
function contar(){
    let inicio = document.getElementById('nmbinico')
    let fim = document.getElementById('nmbfim')
    let passo = document.getElementById('nmbpass')
    let res = document.getElementById('res')

    if(inicio.value.length == 0 || fim.value.length == 0 || passo.value.length == 0){
        window.alert('[ERRO] Faltam dados!')
    } 
    else {
        var i = Number(inicio.value)
        var f = Number(fim.value)
        var p = Number(passo.value)
        if(p <= 0){
            window.alert('Passo inválido! Considerando PASSO 1')
            p = 1
        }
        res.innerHTML = 'Contando: <br>'

        if(i > f){
            for(i; i>=f; i= i-p){
                res.innerHTML += `${i} \u{1F449}`
            }
        }
        else {
            for(i; i<=f; i= i+p){
                res.innerHTML += `${i} \u{1F449}`
            }
            
        }
        res.appendChild(document.createTextNode('\u{1F3C1}'))
    }
}
