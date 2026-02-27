// class heranca de classes 

class Nome{
    constructor(nome){
        this.nome = nome
    }
    presentar(){
        return 'meu nome e: ' + this.nome
    }

}
class idade extends Nome{
    constructor(nome,idad){
        super(nome)
        this.ida = idad
    }
    show(){
        return this.presentar() + ' e tenho ' + this.ida + ' anos'
    }
}

const usuario = new idade('julio',25)

console.log(`${usuario.show()}`)
//----------------------------------------------------------------------------------------------------

class carro{
    constructor(modelo){
        this.model = modelo
    }
    get tmod (){  //
        return this.model
    }
    set tmod (x){
        this.model = x
    }
    
}

let car = new carro("ford")

console.log(`meu carro e: ${car.tmod}`)

car.model = 'Renault'
console.log(car.tmod + ' troquei sem querer rs')

