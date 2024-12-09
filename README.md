# UnderC

-Resumo:
 UnderC é um jogo inspirado em Undertale, desenvolvido exclusivamente em C e baseado em interações textuais. Ele mistura elementos de exploração, batalhas dinâmicas e escolhas morais que impactam diretamente no desfecho da história.

-Ambientação:
 O jogo se passa em um mundo subterrâneo misterioso, habitado por criaturas e personagens que desafiarão o jogador tanto em combates quanto em dilemas éticos. Cada escolha feita influencia as relações com os habitantes e o curso da narrativa.

-Mecânicas Principais:

--Exploração:
   O jogador navega por um mapa textual, explorando diferentes salas e encontrando eventos aleatórios.

--Batalhas:
   O sistema de combate é baseado em turnos, onde o jogador pode optar por:

    Atacar: Causar dano direto aos inimigos.

    Poupar: Resolver confrontos sem lutar, ganhando respeito.

    Agição: Interagir de forma criativa com os inimigos para influenciá-los.

-Sistema de Moralidade:
 As escolhas do jogador (ser pacífico ou agressivo) impactam o comportamento dos personagens e o desfecho da história, com três finais distintos:

--Pacifista: Quando todos os inimigos são poupados.

--Neutro: Uma mistura de ações.

--Genocida: Quando todos os inimigos são eliminados.

--História:
   O jogador assume o papel de um humano perdido no subterrâneo. Sua missão é encontrar uma forma de voltar para casa enquanto interage com um mundo cheio de personagens memoráveis, cada um com suas próprias motivações e segredos.

--Destaques:

   Um sistema de escolhas que oferece rejogabilidade.

   Narrativa envolvente e cheia de momentos emocionantes.

   Desenvolvido inteiramente em C, utilizando apenas recursos textuais.

*Arquitetura Base:*

/Jogo-Da-Forca            
├── Makefile                
├── build/                 
│   ├── main.o             
│   ├── screen.o           
│   ├── timer.o            
│   ├── keyboard.o         
│   └── Meu-Jogo-Em-C     
├── include/               
│   ├── screen.h           
│   ├── timer.h            
│   ├── keyboard.h         
│   └── main.h             
├── src/                   
│   ├── main.c             
│   ├── screen.c           
│   ├── timer.c            
│   └── keyboard.c 
└── database/
    ├── 
    ├── 
    ├── 
    └── 
