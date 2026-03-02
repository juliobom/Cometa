import express from 'express'

const stat = express();
stat


stat.get('/users',(req,res)=>{

    res.send('deu certo!')

})


stat.set('/user',(req,res)=>{

    stat.req()

})


stat.listen(3000)