const fs = require('fs');
const input = fs.readFileSync(0,'utf8').trim();
const lines = input.split('\n')


console.log('digite um valor:')
const a = lines[0];  //exemplo de entrada 1
let b = parseInt(lines.shift()); //exemplo de entrada 2

console.log(`${a}`)

var maior = a;
