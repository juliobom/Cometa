import express from "express"
import { PrismaClient } from "./generated/prisma"

const app = express()
const prisma = new PrismaClient()

app.use(express.json())

// 🔎 Buscar todos usuários
app.get("/users", async (req, res) => {
  const users = await prisma.user.findMany()
  res.json(users)
})

// 🔍 Buscar usuário por ID
app.get("/users/:id", async (req, res) => {
  const id = Number(req.params.id)

  const user = await prisma.user.findUnique({
    where: { id }
  })

  if (!user) {
    return res.status(404).json({ error: "User not found" })
  }

  res.json(user)
})

// ➕ Criar usuário
app.post("/users", async (req, res) => {
  const { name, email } = req.body

  const user = await prisma.user.create({
    data: { name, email }
  })

  res.status(201).json(user)
})

// ❌ Deletar usuário
app.delete("/users/:id", async (req, res) => {
  const id = Number(req.params.id)

  await prisma.user.delete({
    where: { id }
  })

  res.status(204).send()
})

app.listen(3000, () => {
  console.log("🚀 Server running on port 3000")
})