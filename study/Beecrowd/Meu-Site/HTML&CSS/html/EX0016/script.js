function verificar(){
    var data = new Date() // criando um objeto data para pegar o ano atual
    var anoa = data.getFullYear() // atribuindo o ano atual
    var anob = document.getElementById('ano') // pegando o valor do input (ano)
    var res = document.getElementById('res') // pegando a div de resposta
    if(anob.value == 0 || anob.value > anoa){
        window.alert('[ERRO] Verifique os dados e tente novamente!')
    }else{
        var fsex = document.getElementsByName('sexo') //recebendo o valor do input (sexo)
        var idade = anoa - Number(anob.value)
        var genero = ''
        var img = document.createElement('img') //Criando um elemento de imagem
        img.setAttribute('id', 'imag')
        if(fsex[0].checked){ //verificando se o sexo é masculino
            genero = 'Homem'
            if(idade >0 && idade <10){
                //Criança
                img.setAttribute('src', 'beba-masc.jpg')

            }else if(idade <40){
                //Adulto
                img.setAttribute('src', 'adulto.jpg')
            }else{
                //Idoso
                img.setAttribute('src', 'idoso.jpg')
            }
        } else if(fsex[1].checked){ //verificando se o sexo é feminino
            genero = 'Mulher'
            if(idade >0 && idade <10){
                //Criança
                img.setAttribute('src', 'beba-fem.jpg')
            }else if(idade <40){
                //Adulto
                img.setAttribute('src', 'adulta.jpg')
            }else{
                //Idoso
                img.setAttribute('src', 'idosa.jpg')
            }
        }
        res.style.textAlign = 'center'
        res.innerHTML = `detectamos ${genero} com ${idade} anos.`
        res.appendChild(img) //Adiciona um elemento como filho do elemento pai(vem depois do innerHTML para não sobrepor imagem no texto)
    }
    
}