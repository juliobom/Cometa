
    var num = document.getElementById('num') //puxando o elemento do input para a variavel num
    var list = document.getElementById('list') //puxando o elemento do select para a variavel res
    var n = []

function listrepetido(n,l){  // verificando se o numero ja existe na lista
    if(l.indexOf(n) != -1){
        return true
    }
    else{
        return false
    }

}


function enumerators(n) { // verificando se e um numero e esta entre 1 e 100
    if(Number(n) >=1 && Number(n) <=100){ //Number() e usado para converter a string do input em numero, caso o valor seja um numero a funcao retorna true
        return true
    }
    else{
        return false
    }
}


function verificar(){
    if(enumerators(num.value) && !listrepetido(num.value, n)){// caso as duas funcoes retornem true o numero e adicionado a lista
        alert('Numero adicionado')
    }
    else{
        alert('Numero invalido ou ja encontrado na lista')
    }
}