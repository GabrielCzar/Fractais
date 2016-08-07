#ifndef FRAC_CIRCULOS_H
#define FRAC_CIRCULOS_H
#include "lib/cpen.h"

void circulos(Pen &p, double tam){
    if(tam < 1) return;

    for (int var = 1; var < 7; ++var) {
        p.right(60);
        p.jump(tam * 2.9999);
        p.circle(tam);
        circulos(p, tam/2.9999);
        p.jump(-tam * 2.9999);
    }
}

void fractal_circulos(){
    double tam = 250;
    Pen p(1000, 1000);
    p.setXY(500, 350);
    p.setHeading(0);
    p.setSpeed(100);

    p.circle(tam);
    circulos(p, tam/2.9999);

    p.wait();
}


#endif // FRAC_CIRCULOS_H
