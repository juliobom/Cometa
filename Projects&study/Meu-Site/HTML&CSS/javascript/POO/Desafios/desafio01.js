

class Pessoa{
    constructor(nome,idade){
        this.Name = nome
        this.ida = idade
    }
    apresentar(){
        return 'ola meu nome e ' + this.Name + ' e tenho ' + this.ida + ' anos.'
    }
}

const ida = 25
const Name = 'julio bom'
let user = new Pessoa(Name,ida)

console.log(user.apresentar())