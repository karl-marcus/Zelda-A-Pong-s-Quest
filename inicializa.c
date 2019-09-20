#include <GL/glew.h>
#include <GL/freeglut.h>
#include <SOIL/SOIL.h>

#include "main.h"
#include "global.h"

void inicializa(){

    glClearColor(1, 1, 1, 1);
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    glLineWidth(3);
    link.posicao.x=-60;
    link.posicao.y=0;
    link.proporcao.x=7;
    link.proporcao.y=12;
    ganon.posicao.x=60;
    ganon.posicao.y=0;
    ganon.proporcao.x=15;
    ganon.proporcao.y=10;
    bola.velocidade.x=3.5;
    bola.velocidade.y=3.5;
    glColor3f(1,1,1);
    bola.proporcao.x=4.5;
    bola.proporcao.y=2.8;
    bola.posicao.x=0;
    bola.posicao.y=65;
    telaAtual = MENU;
    PontuacaoLink=0;
    PontuacaoGanon=0;
    SetsLink=0;
    SetsGanon=0;
    vitoriaGanon=0;
    vitoriaLink=0;
    velocidadeLink=8;
    velocidadeGanon=6;
    seColisao=100;
    tempoBola=0;
    linkAtacando=0;
    ganonAtacando=0;

    glEnable(GL_BLEND );
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    idTexturaFundo = carregaTextura("/home/marcus/CG/TP1/TP1-CG/fundo4.png");
    idTexturaFundo2 = carregaTextura("/home/marcus/CG/TP1/TP1-CG/fundo2.png");
    idTexturaFundo3 = carregaTextura("/home/marcus/CG/TP1/TP1-CG/fundo3.png");
    idTexturaFundo4 = carregaTextura("/home/marcus/CG/TP1/TP1-CG/fundo4.png");
    idTexturaMenu = carregaTextura("/home/marcus/CG/TP1/TP1-CG/back_menu.png");
    idTexturaInici = carregaTextura("/home/marcus/CG/TP1/TP1-CG/botao_iniciar.png");
    idTexturaSair = carregaTextura("/home/marcus/CG/TP1/TP1-CG/botao_exit.png");
    idLink = carregaTextura("/home/marcus/CG/TP1/TP1-CG/Link.png");
    idGanon = carregaTextura("/home/marcus/CG/TP1/TP1-CG/Ganons.png");
    idSTART = carregaTextura("/home/marcus/CG/TP1/TP1-CG/botao_iniciarSE.png");
    idEXIT = carregaTextura("/home/marcus/CG/TP1/TP1-CG/botao_exitSE.png");
    idZeldaNormal = carregaTextura("/home/marcus/CG/TP1/TP1-CG/sair.png");
    idZeldaW = carregaTextura("/home/marcus/CG/TP1/TP1-CG/zelda_1.png");
    idZeldaL0 = carregaTextura("/home/marcus/CG/TP1/TP1-CG/1411x274.png");
    idZeldaL1 = carregaTextura("/home/marcus/CG/TP1/TP1-CG/1411x362.png");
    idLos = carregaTextura("/home/marcus/CG/TP1/TP1-CG/victoryGanon.png");
    idVic = carregaTextura("/home/marcus/CG/TP1/TP1-CG/victory.png");
    idMar = carregaTextura("/home/marcus/CG/TP1/TP1-CG/1411x274.png");
    idCeu = carregaTextura("/home/marcus/CG/TP1/TP1-CG/1411x362.png");
    pausa = carregaTextura("/home/marcus/CG/TP1/TP1-CG/pause.png");

    ZeldaPresa.idTextura = carregaTextura("/home/marcus/CG/TP1/TP1-CG/zeldaPresas.png");
    ZeldaPresa.quadrosHorizontais =14;
    ZeldaPresa.quadroAtual=0;

    ZeldaPresaL.idTextura = carregaTextura("/home/marcus/CG/TP1/TP1-CG/zeldaPresa1.png");
    ZeldaPresaL.quadrosHorizontais =14;
    ZeldaPresaL.quadroAtual=0;

    ZeldaPresaW.idTextura = carregaTextura("/home/marcus/CG/TP1/TP1-CG/zeldaPresa2.png");
    ZeldaPresaW.quadrosHorizontais =14;
    ZeldaPresaW.quadroAtual=0;


    bola.idTextura = carregaTextura("/home/marcus/CG/TP1/TP1-CG/bolaf.png");
    bola.quadrosHorizontais=3;
    bola.quadroAtual=1;

    ataqueLink.idTextura = carregaTextura("/home/marcus/CG/TP1/TP1-CG/Link_Ataca.png");
    ataqueLink.quadrosHorizontais=3;
    ataqueLink.quadroAtual=0;

    ataqueGanon.idTextura = carregaTextura("/home/marcus/CG/TP1/TP1-CG/g2.png");
    ataqueGanon.quadrosHorizontais=3;
    ataqueGanon.quadroAtual=2;

    andaLink.idTextura = carregaTextura("/home/marcus/CG/TP1/TP1-CG/Link_Moveo.png");
    andaLink.quadrosHorizontais=6;
    andaLink.quadroAtual=0;

    andaGanon.idTextura = carregaTextura("/home/marcus/CG/TP1/TP1-CG/ganon_sprite_mov.png");
    andaGanon.quadrosHorizontais=4;
    andaGanon.quadroAtual=0;

    fundomenu.idTextura = carregaTextura("/home/marcus/CG/TP1/TP1-CG/anima_menu.png");
    fundomenu.quadrosHorizontais=2;
    fundomenu.quadroAtual=0;

    logo.idTextura = carregaTextura("/home/marcus/CG/TP1/TP1-CG/logo-loz.png");
    logo.quadrosHorizontais = 4;
    logo.quadroAtual=0;

    Av.idTextura = carregaTextura("/home/marcus/CG/TP1/TP1-CG/BOTAO_Ave.png");
    Av.quadrosHorizontais =2;
    Av.quadroAtual=0;

    Cl.idTextura = carregaTextura("/home/marcus/CG/TP1/TP1-CG/BOTAO_Cla.png");
    Cl.quadrosHorizontais =2;
    Cl.quadroAtual=0;

    heart.idTextura = carregaTextura("/home/marcus/CG/TP1/TP1-CG/heart.png");
    heart.quadrosHorizontais =11;

    heartG.idTextura = carregaTextura("/home/marcus/CG/TP1/TP1-CG/heart.png");
    heartG.quadrosHorizontais =11;

    linkop.idTextura = carregaTextura("/home/marcus/CG/TP1/TP1-CG/link_op_anim.png");
    linkop.quadrosHorizontais =4;
    linkop.quadroAtual=0;

    zeldaop.idTextura = carregaTextura("/home/marcus/CG/TP1/TP1-CG/zelda_op_anim.png");
    zeldaop.quadrosHorizontais =4;
    zeldaop.quadroAtual=0;

    hist.idTextura = carregaTextura("/home/marcus/CG/TP1/TP1-CG/historia.png");
    hist.quadrosHorizontais =24;
    hist.quadroAtual=0;

    tri.idTextura = carregaTextura("/home/marcus/CG/TP1/TP1-CG/triforce.png");
    tri.quadrosHorizontais = 4;
    tri.quadroAtual =0;

    botaoAtual = START;
}
