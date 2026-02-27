var hora = document.getElementById("Hours")
var imagem = document.getElementById("imag")
var data = new Date()
var hora_atual = data.getHours()
var minuto = data.getMinutes()

function carregar() {
    hora.innerHTML = `Agora são ${hora_atual} Horas e ${minuto} Minutos.`
    if(hora_atual >= 0 && hora_atual <12){
        //bom diaaaaaa!!
        imagem.src = 'Assets/Manha.png'
    }
    else if(hora_atual >= 12 && hora_atual <= 18){
        //boa tardee!!
        imagem.src = 'Assets/Tarde.png'
    }
    else{
        //boa noite!!
        imagem.src = 'Assets/Noite.png'
    }
}