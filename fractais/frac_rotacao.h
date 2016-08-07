#ifndef FRAC_ROTACAO_H
#define FRAC_ROTACAO_H
#include "lib/cpen.h"

void rotacionar(Pen &p, int lado, int rotacao){
    if(lado < 5) return;
    p.walk(lado);
    p.right(90 * rotacao);
    p.setColor(rand()%255, rand()%255, rand()%255);
    rotacionar(p, lado - 5, -1);
    p.setColor(0, 255, 0);
    p.left(90 * rotacao);
    p.walk(-lado);

}

void fractal_rotacao(){
    Pen p(710, 710);
    p.setXY(1, 700);
    p.setHeading(0);
    p.setSpeed(100);
    rotacionar(p, 700, -1);
    p.wait();
}

#endif // FRAC_ROTACAO_H
