#ifndef FRAC_ARVORE_H
#define FRAC_ARVORE_H
#include "lib/cpen.h"
#include "lib/pen.h"

void arvore(Pen &p, int tamanho, int x, int y, int heading) {
    if(tamanho < 1) return;
    p.setHeading(heading + 35);
    p.walk(tamanho * 0.7);
    arvore(p, tamanho * 0.7, p.getX(), p.getY(), heading + 35);
    p.setXY(x,y);
    p.setHeading(heading - 35);
    p.walk(tamanho * 0.7);
    arvore(p, tamanho * 0.7, p.getX(), p.getY(), heading - 35);
}

void fractal_arvore() {
    double tam = 200;
    Pen p(800, 800);
    p.setXY(400, 690);
    p.setHeading(90);
    p.setSpeed(10);
    p.setColor(0,255,0);

    p.walk(tam);
    arvore(p, tam, p.getX(), p.getY(), p.getHeading());

    p.wait();

}

#endif // FRAC_ARVORE_H
