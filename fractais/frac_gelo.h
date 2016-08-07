#ifndef FRAC_GELO_H
#define FRAC_GELO_H
#include "lib/cpen.h"

void gelo(Pen &p, double tam){
    if(tam < 1) return;
    for (int var = 1; var < 6; ++var) {
        p.walk(tam);
        gelo(p, tam/2.8);
        p.walk(-tam);
        p.right(360/5); //p.right(72);
    }
}

void fractal_gelo(){
    Pen p(600, 700);
    p.setXY(300, 350);
    p.setHeading(270);
    p.setSpeed(50);
    double tam = 200;
    gelo(p, tam);
    p.wait();
}

#endif // FRAC_GELO_H
