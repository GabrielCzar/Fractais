#ifndef FRAC_TRIANGULO_H
#define FRAC_TRIANGULO_H
#include "lib/pen.h"

void triangulo(Pen &p, int tam){
    if(tam < 1) return;
    for(int var = 0; var < 3; var++){
        p.walk(tam);
        p.left(120);
        triangulo(p, tam / 2);
    }
}

void fractal_triangulo(){
    int tam = 600;
    Pen p(620, 550);
    p.setXY(10, 530);
    p.setHeading(0);
    p.setSpeed(200);

    triangulo(p, tam);

    p.wait();
}

#endif // FRAC_TRIANGULO_H
