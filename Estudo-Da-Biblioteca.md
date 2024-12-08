# keyboard.h {

*keyboardInit:*

Configura o terminal para um modo que desativa a entrada canônica (permitindo a leitura de caracteres sem pressionar Enter) e oculta a entrada do usuário (modo sem eco).

*keyboardDestroy:*

Restaura as configurações originais do terminal, garantindo que ele volte ao estado padrão após o programa ser executado.

*keyhit:*

Verifica se uma tecla foi pressionada, retornando 1 para "sim" e 0 para "não", sem bloquear a execução.

*readch:*

Lê e retorna o caractere pressionado. Se houver um caractere em espera, ele será retornado imediatamente.

}

# screen.c {

*screenDrawBorders:*

Desenha uma borda ao redor do terminal usando os caracteres definidos na biblioteca.
Utiliza coordenadas definidas por MINX, MINY, MAXX e MAXY para determinar os limites da borda.

*screenInit:*

Inicializa a tela, limpando-a e desenhando as bordas caso seja solicitado.
Move o cursor para a posição inicial e o oculta.

*screenDestroy:*

Restaura a tela ao estado padrão: redefine as cores, limpa a tela e exibe o cursor.

*screenGotoxy:*

Move o cursor para uma posição específica no terminal, usando coordenadas (x, y).
Garante que as coordenadas estejam dentro dos limites.

*screenSetColor:*

Configura a cor do texto (foreground) e do fundo (background).
Inclui suporte para cores "brilhantes" (fg > LIGHTGRAY).

}

# timer.c {

*timerInit:*

Inicializa o temporizador, configurando o intervalo de tempo desejado em milissegundos.
Armazena o momento inicial (timer) para cálculo posterior.

*timerDestroy:*

Desativa o temporizador, definindo o valor de atraso como inválido (-1).

*timerUpdateTimer:*

Atualiza o intervalo do temporizador e redefine o momento inicial.

*getTimeDiff:*

Calcula a diferença de tempo (em milissegundos) desde que o temporizador foi iniciado ou redefinido.

*timerTimeOver:*

Verifica se o tempo configurado no temporizador já passou.
Retorna 1 (verdadeiro) se o tempo terminou, e reinicia o momento inicial do temporizador para o próximo ciclo.

*timerPrint:*

Exibe no terminal o tempo decorrido desde o início ou a última redefinição.

}