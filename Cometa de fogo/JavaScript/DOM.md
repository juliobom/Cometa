
## ~={yellow}Document Object Model=~


-  O JavaScript pode alterar todos os elementos HTML na página
- O JavaScript pode alterar todos os atributos HTML na página
- O JavaScript pode alterar todos os estilos CSS na página
- O JavaScript pode remover elementos e atributos HTML existentes
- JavaScript pode adicionar novos elementos e atributos HTML
- O JavaScript pode reagir a todos os eventos HTML existentes na página
- O JavaScript pode criar novos eventos HTML na página


Exemplo:

![[Captura de tela 2025-05-03 145135.png]]

~={cyan}res.innerHTML=~ = `o valor deu: ${s}` no caso captura altera o valor ~={cyan}res=~ impondo um texto em HTML. 


# ~={yellow}Localizando elementos=~

#### ~={cyan}document.getElementById( )=~

busca o elemento pelo ~={cyan}ID=~.
![[Captura de tela 2025-05-03 145957.png]]

no caso acima <~={blue}div=~ foi colocado um ~={cyan}Id=~ escrito ~={orange}'msg'=~.e buscamos este elemento com
~={cyan}document=~.~={yellow}getElementById=~('~={orange}msg=~')





#### ~={cyan}document.getElementsByTagName( )=~
pelo nome e quase a mesma coisa, porém ao invés de colocar ~={cyan}id=~ buscamo pela tag.


![[Captura de tela 2025-05-03 150944.png]]
ficando assim: 
~={cyan}document=~.~={yellow}getElementsByTagName=~('~={orange}nome do diretório=~')[posição]
no caso acima o getelements esta no plural oque diz q ele pode pegar vários elementos, causando um possível erro se não especificar qual diretório dele deve puxar, se tiver dois <~={blue}div=~ tem que especificar qual ele deve pegar.
Exemplo:

![[Captura de tela 2025-05-03 151442.png]]
Em ordem numérica o primeiro recebe o valor ~={orange}0 =~ou seja ~={orange}1=0=~, ~={orange}2=1=~, ~={orange}3=2=~ e assim vai.


#### ~={cyan}document.getElementsByClassName( )=~


#### ~={cyan}document.queryselector(#)=~
queryselector e um pouco mais atualizado basta declarar o elemento que deseja entre parêntese~={orange}('xxsxxs#msg')=~ e colocar o valor após o # .
exemplo:
![[Captura de tela 2025-05-03 152028.png]]
