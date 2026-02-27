var num = document.getElementById('num')
var list = document.getElementById('list')
var n = []
var res = document.getElementById('res')
list.innerHTML = ''


function isnumber(n){
    if(Number(n) >=1 && Number(n) <=100){
        return true
    }
    else{
        return false
    }
}



function isinlist(n,l){
    if(l.indexOf(n) != -1){ // (-1) ele nao encontrou o numero na lista.
        return true
    }
    else{
        return false
    }
}



function adicionar(){
    res.innerHTML = ''    // vai zerar os resultados da div (res)
    if(isnumber(num.value) && !isinlist(num.value, n)){ // ! inverte o valor da funcao, ou seja, se a funcao retornar true, o ! vai transformar em false, e o if nao vai ser executado, caso a funcao retorne false, o ! vai transformar em true, e o if vai ser executado.
        //alert('numero adicionado')
        n.push(num.value)
        let item = document.createElement('option')
        item.text = `numero ${num.value} adicionado`
        list.appendChild(item)
    }
    else{
        alert('numero invalido ou ja encontrado na lista')
    }
}



function verificar(){
    let maior = 0
    let menor = 100
    let soma = 0
    let media = 0
    let count = 0
    for(let c in n){
        soma += Number(n[c])
        if(Number(n[c]) > maior){
            maior = Number(n[c])
        }
        if(Number(n[c]) < menor){
            menor = Number(n[c])
        }
        count++
    }
    media = soma / count
    res.innerHTML = `Foram adicionados ${count} numeros <br>`
    res.innerHTML += `O maior valor adicionado foi: ${maior} <br>`
    res.innerHTML += `O menor valor foi: ${menor} <br>`
    res.innerHTML += `A soma total deu: ${soma} <br>`
    res.innerHTML += `A media dos valores: ${media} <br>`

}
