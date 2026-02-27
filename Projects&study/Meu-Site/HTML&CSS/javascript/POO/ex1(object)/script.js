let nome = "João";

n="2"

const usuario = {
    nome: "julio bom",
    idade: "25",
    profissao: "programador",
    namorada: "Kamilly benigno de paula",
    loc: {
        cidade: "sao paulo",
        estado: "SP",
        pais: "Brasil"
    }
}

class Pessoa { //classe é um molde para criar objetos, ela tem atributos e metodos, os atributos são as caracteristicas do objeto, e os metodos são as funcoes que o objeto pode executar.
    constructor(nome,ano){
        this.nome = nome
        this.ano = ano
    }
    age(){ //funcao que ira retornar o ano atual menos o ano de nascimento da pessoa, para calcular a idade da pessoa.
        let data = new Date()
        let anoatual = data.getFullYear()
        return anoatual - this.ano
    }
}
const doidinho = new Pessoa("julio", 1998)

console.log(`o ${doidinho.nome} tem ${doidinho.age()} anos de idade`)   //classe
console.log(`o ${usuario.nome} tem ${usuario.idade} anos de idade e namora a ${usuario.namorada} e mora em ${usuario.loc.cidade} no pais ${usuario.loc.pais}`)   //objeto
