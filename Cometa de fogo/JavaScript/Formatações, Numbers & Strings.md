## ~={yellow}**Number.Parse**=~

~={pink}**Number.Parse**=~ e utilizado quando se quer transformar um '1' em numero e não escrita, pois se não declara a variante em numero o javascript identifica como string, oque pode ocasionar em alguns erros durante o processo do código.

formatando em number

(~={pink}Number.ParseInt=~) - Para números Inteiros
(~={pink}Number.ParseFloat=~) - Para números Reais

Exemplo:

`Number.ParseInt(window.prompt('digite aqui seu nome: '))`

## ~={purple}Number=~

Javascript mais atualizado já utiliza forma automatizada de conversão que é o **Number** somente ele e possível converter um string para number sem a necessidade de colocar o ParseInt ou ParseFloat, a não ser que necessite de alguns desses formatos.

(Number) - tanto para inteiros quanto para Reais

Exemplo:

`Number(window.prompt('digite um número :) ')`


## ~={yellow}**String**=~

Já o String e quando você necessite que o console identifique apenas como uma letra e não número.

Exemplo:

`String(window.prompt('qual é o seu nome? : '))`



---

## ~={yellow}**${ }**=~


A sigla [${ }] é utilizado para simplificar a concatenação [+] dentro do código, reduzindo o tamanho e a complexidade.
ao invez de escrever um codigo com varias concatenações como:

*window.alert('o aluno: ' + [nome] + ' de ' + [idade] + ' anos de idade tirou: ' + [nota] + 'na prova de biologia.')*

preferindo assim utilizar desta forma:

*window.alert('o aluno [${nome}] de [${idade}] anos de idade tirou: ~={purple}${nota}=~ na prova de biologia')*

quando for utilizar da segunda forma, tera que substituir as aspas '' pro crase invertida ´´ 



---

## ~={yellow}**s.length**=~

Informa quantos caracteres a string tem.
~={purple}s=~.length = ~={purple}julio=~.length

Exemplo:

`window.alert('olá : ${nome} seu nome tem ${nome.length} letras!')`

 ~={orange}olá julio seu nome tem 5 letras!=~


---

## ~={yellow}**s.toUpperCase**()=~

s.toUpperCase() - Utilizado para transformar a escritura em Maiúscula.

Exemplo:


`var nome = window.prompt('digite seu nome: ')`

`window.alert`('olá: ${~={purple}nome.toUpperCase()=~}) --------> olá: ~={purple}JULIO=~



## ~={yellow}**s.toLowerCase**()=~ 

s.toLowerCase() - Utilizado para transformar a escritura em Minúscula.

Exemplo:


`var nome = window.prompt('digite seu nome: ')`

`window.alert`('olá: ${~={purple}nome.toLowerCase()=~}) --------> olá: ~={purple}julio=~



---


s.toFixed(2).replace('  ' , '  ')


> [!G] OBS!:
> Esse codigo  é utilizado para substituir alguma função.
