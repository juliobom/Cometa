import { prisma } from "./lib/prisma.js"; // nao necessita declara variavel prisma, pois ela ja foi exportada no arquivo prisma.ts
import express from "express";

const stat = express();
stat.use(express.json());// dizendo para o express entender o formato json no corpo da requisição

async function getUsers() {
    const users = await prisma.user.findMany();
    console.log(users[0]?.email);
}


stat.get("/users/:id", async (req, res) => {
    const id = Number(req.params.id);
    const user = await prisma.user.findUnique({
        where: { id }
    });
    //console.log(user);
    res.json(user);

})

stat.post("/users", async (req, res) => {
    const { name, email, age } = req.body;
    const user = await prisma.user.create({
        data: { name, email, age }
    })
    res.status(201).json(user);
})

stat.delete("/users/:id", async (req, res) => {
    const id = Number(req.params.id);
    if(!id){
        return res.status(400).send("usuario nao encontrado");
    }
    await prisma.user.delete({
        where: { id }
    })
    res.send(`Usuário deletado com sucesso!`);

})

stat.listen(3000, () => {
    console.log("Servidor rodando na porta 3000");
})


//getUsers();