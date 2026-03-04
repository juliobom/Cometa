import { prisma } from "./lib/prisma.js"; // nao necessita declara variavel prisma, pois ela ja foi exportada no arquivo prisma.ts
import express from "express";

const stat = express();


async function getUsers() {
    const users = await prisma.user.findMany();
    console.log(users[0]?.email);
}


stat.get("/users", async (req,res)=>{

    res.send('deu certo!');

})


stat.listen(3000)


//getUsers();