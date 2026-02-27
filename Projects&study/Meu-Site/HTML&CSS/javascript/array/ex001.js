var carro = ['Gol', 'Palio', 'Uno', 'Celta', 'Corsa']
for (var i = 0; i < carro.length; i++) {
    console.log(`O carro ${i+1} é ${carro[i]}`)
}
for( i in carro){
    console.log(`o ${carro[i]} e bom`)
}
var carrinho = carro.indexOf('Celta')
console.log(`o celta esta na posicao ${carrinho}`)