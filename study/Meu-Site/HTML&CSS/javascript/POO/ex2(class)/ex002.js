//classe com herança

var res = document.getElementById('res')

class Carro {
    constructor(marca,modelo,ano){
        this.marca = marca
        this.modelo = modelo
        this.ano = ano
    }
    anocar(){
        let data = new Date()
        let anotaual = data.getFullYear()
        return anotaual - this.ano
    }
    
}
class CarroEletrico extends Carro{
    constructor(marca,modelo,ano,autonomia){
        super(marca,modelo,ano)
        this.auton = autonomia
    }
    
}


function verificar(){
    let marca = prompt("Digite a marca do carro")
    let modelo = prompt("Digite o modelo do carro")
    let ano = prompt("Digite o ano do carro")
    let auton = prompt("Digite a autonomia do carro em km")
    const carro1 = new CarroEletrico(marca,modelo,ano,auton)

    
    res.innerHTML = `seu carro:<br>Marca: ${carro1.marca}<br>Modelo: ${carro1.modelo} <br>Ano: ${carro1.ano}<br>Idade do carro: ${carro1.anocar()} anos<br> ${carro1.auton}`
}