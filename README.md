#FORÇA BRUTA


Esse projeto consiste na implementação de um algoritmo de força bruta em linguagem C, com o objetivo de estudar e compreender os conceitos por trás desse tipo de ataque. O código desenvolvido permite a quebra de senhas de até 6 dígitos, através da geração e teste de todas as combinações possíveis dentro desse limite. É importante ressaltar que esse projeto é puramente acadêmico e tem como finalidade o aprendizado e a exploração de técnicas de segurança. O uso de força bruta para quebrar senhas sem autorização é ilegal e antiético. Portanto, é importante utilizar os fundamentos desse código de forma responsável, respeitando sempre a privacidade e a segurança das informações.
EXPLICAÇÃO DO CODIGO 
Primeiro, algumas bibliotecas são incluídas para que possamos utilizar funções específicas do C. As bibliotecas stdio.h, stdlib.h e string.h são utilizadas para operações de entrada e saída, alocação de memória e manipulação de strings, respectivamente.
Definimos uma constante chamada TAMANHO_MAXIMO com valor 7. Essa constante representa o tamanho máximo da senha que o programa pode manipular. No caso, consideramos senhas de até 6 dígitos, mais 1 caractere nulo para indicar o fim da string.
A função forcaBruta é responsável por realizar o ataque de força bruta. Ela recebe como parâmetro a senha que desejamos quebrar. Dentro dessa função, declaramos um array chamado tentativa com o tamanho TAMANHO_MAXIMO para armazenar as tentativas de senha.
O algoritmo começa com uma tentativa de senha de 1 dígito. Utilizamos um laço de repetição while para iterar sobre todas as combinações possíveis de senhas com a quantidade de dígitos atual.
Dentro desse laço, geramos a string de tentativa preenchendo-a com dígitos '0'. Em seguida, fazemos um laço de repetição para percorrer todas as tentativas possíveis dentro do limite de dígitos.
A cada iteração, exibimos a senha que está sendo testada. Se a senha atual for igual à senha fornecida, imprimimos uma mensagem informando que a senha foi encontrada e encerramos a função.
Caso contrário, incrementamos a tentativa atual de senha. Se um dígito pode ser incrementado sem ultrapassar o valor '9', fazemos esse incremento. Caso contrário, definimos o dígito como '0' e decrementamos o dígito anterior.
Verificamos se atingimos o limite máximo de dígitos. Se sim, encerramos o laço de tentativas. Caso contrário, continuamos gerando novas tentativas com uma quantidade maior de dígitos.
Na função main, solicitamos ao usuário que digite a senha de até 6 dígitos. Em seguida, verificamos se o tamanho da senha é maior que 6 usando a função strlen da biblioteca string.h. Se for, exibimos uma mensagem de erro e o programa é encerrado.
Caso contrário, iniciamos o ataque de força bruta chamando a função forcaBruta com a senha fornecida pelo usuário.
Ao final, o programa exibe uma mensagem indicando que o ataque de força bruta foi iniciado. Se a senha correta for encontrada, o programa imprime a senha. Caso contrário, uma mensagem informando que a senha não foi encontrada é exibida.

Mensagem Final:
É essencial lembrar que esse código foi desenvolvido exclusivamente para fins educacionais, com o intuito de explorar e compreender os conceitos relacionados à força bruta. É crucial enfatizar que o uso indevido desse tipo de técnica pode ter consequências sérias e infringir leis e regulamentos.
A aplicação de força bruta para quebrar senhas sem permissão é considerada uma atividade ilegal e antiética. A segurança e a privacidade das informações devem ser sempre respeitadas. É fundamental utilizar o conhecimento adquirido de forma ética e responsável, agindo dentro dos limites legais e com a devida autorização.
Portanto, encorajamos a utilização deste código apenas para fins de estudo, conscientizando-se das implicações éticas e legais envolvidas. Aprenda com ele, aprimore suas habilidades, mas sempre faça uso do seu conhecimento para promover a segurança e proteção das informações, respeitando a privacidade de terceiros.
