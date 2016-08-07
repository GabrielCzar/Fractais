#ifndef FRAC_TRIGO_H
#define FRAC_TRIGO_H
#include "lib/pen.h"

void makeTrigo(Pen &p, double tam){
    if(tam < 1) return;
    p.walk(tam);
    for (int var = 0; var < 4; ++var) {
        p.left(45);
        p.walk(tam/4);
        p.jump(-(tam/4));
        makeTrigo(p, tam/4);
        p.right(90);
        p.walk(tam/4);
        p.jump(-(tam/4));
        makeTrigo(p, tam/4);
        p.left(45);
        p.jump(-(tam/4));
    }

}

void fractal_trigo(){
    Pen p(400, 610);
    p.setXY(200, 600);
    p.setHeading(90);
    p.setSpeed(30);
    p.setColor(255, 255, 0);
    double tam = 400;
    makeTrigo(p, tam);
    p.wait();
}

#endif // FRAC_TRIGO_H
