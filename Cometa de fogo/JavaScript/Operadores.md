
# ~={yellow}**Aritméticos**=~

#### ~={orange}+ =~ Adição
#### ~={orange}-=~ Subtração
#### ~={orange}* =~Multiplicação
#### ~={orange}/ =~Divisão
#### ~={orange}%=~ Resto da Divisão
#### ~={orange}**=~ Elevado


---

## **Ordem de Precedências**

| 1º  | ~={orange}( )=~            |
| --- | -------------------------- |
| 2º  | ~={orange}**=~             |
| 3º  | ~={orange}%     /      *=~ |
| 4º  | ~={orange}+   -=~          |


---
### **Sintase**


## ~={cyan}+= =~   

É Utilizado para atribuir um mesmo valor da variável e ele mesmo.

Exemplo:

Var idade = 3

idade = ~={cyan}idade=~ + ano

idade  ~={cyan}+= =~  ano


Outras Formas de simplificar:

| X = X ~={orange}+=~ 1 | X ~={cyan}+= =~ 1 | X ~={cyan}++=~ |
| --------------------- | ----------------- | -------------- |
| X = X ~={orange}-=~ 1 | X ~={cyan}-= =~ 1 | X ~={cyan}--=~ |
| X = X ~={orange}%=~ 1 | X ~={cyan}%= =~ 1 |                |
| X = X ~={orange}/=~ 1 | X ~={cyan}/= =~ 1 |                |

---
# ~={yellow}**Atribuição**=~

### ~={orange}= =~

(igualdade) utilizado para atribuir valor a uma variável ou seja, ele vai receber um valor e não igualar. que é utilizado com ~={orange}== =~.


~={pink}var=~ nome ~={orange}= =~ ~={blue}prompt=~('digite seu nome')

*nome irá receber o valor digitado no ~={blue}prompt=~.*

---
# ~={yellow}Relacionais=~

#### .~={orange}>  =~ Maior que.
#### ~={orange}<=~  Menor que.
#### .~={orange}>= =~ Maior ou igual.
#### ~={orange}<= =~ Menor ou igual.
#### ~={orange}== =~ Igual.
#### ~={orange}!= =~ Diferente.


---
# ~={yellow}Identidade=~

#### ~={orange}=== =~ 

irá compara a identidade do valores atribuidos.

Exemplo:

5 ~={orange} === =~ '5'     <mark style="background: #FF5582A6;">False</mark>
5   ~={orange}!== =~ '5'     <mark style="background: #BBFABBA6;">True</mark>

o '5' em (aspas) diz q é uma ~={purple}string=~, diferente do 5 (sem aspas) que um ~={purple}Number=~.

---
# ~={yellow}Lógicos=~

#### ~={orange}!=~ Negação
#### ~={orange}&&=~ Conjunção (e)
#### ~={orange}| |=~ Disconjunção (ou)


**Ordem de Precedências**

| Aritimeticos | ~={orange}+=~ ,~={orange} -=~, ~={orange}%=~, ~={orange}( )=~.  |     |
| ------------ | --------------------------------------------------------------- | --- |
| Relacionais  | ~={orange}<=~ , ~={orange}>=~, ~={orange}<= =~, ~={orange}== =~ |     |
| Lógicos      | ~={orange}!=~                                                   |     |
|              | ~={orange}&&=~                                                  |     |
|              | ~={orange}\| \|=~                                               |     |

---
# ~={yellow}Ternário=~

#### ~={orange}?=~ se verdadeiro....
#### ~={orange}:=~ se falso...

Exemplo:

~={cyan}Teste=~ ~={orange}?=~ verdadeiro **~={orange}:**=~ falso

5 > 6 ~={orange}? =~sim ~={orange}:=~ não  ~={cinza}(não)=~

ou

var ~={cyan}a=~ = 10
var ~={cyan}b=~ = 17
var ~={cyan}nota=~ = 15


var ~={cyan}nota=~ = ~={cyan}nota=~ ~={orange}+=~ b ~={orange}== =~ 32 ~={orange}?=~ ~={cyan}nota =~ ~={orange}+=~ 5 ~={orange}:=~ 'impossivel fazer o cálculo'
~={cyan}nota=~ = 20
