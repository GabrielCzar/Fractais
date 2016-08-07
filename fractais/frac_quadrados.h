#ifndef FRAC_QUADRADOS_H
#define FRAC_QUADRADOS_H

#include "lib/cpen.h"

void square(float x, float y, float lado){
    pen_set_xy(x, y);
    pen_set_heading(0);
    pen_walk(lado);
    pen_right(90);
    pen_walk(lado);
    pen_right(90);
    pen_walk(lado);
    pen_right(90);
    pen_walk(lado);
}

void quadrados(int x, int y, float lado){
    square(x, y, lado);
    if(lado < 10)
        return;
    float tam = lado * 0.46;
    quadrados(x - tam/2, y - tam/2, tam);
    quadrados(x + lado - tam/2, y - tam/2, tam);
    quadrados(x - tam/2, y + lado - tam/2, tam);
    quadrados(x + lado - tam/2, y + lado  - tam/2, tam);
}

void frac_quadrados(){
    pen_open(1000, 800);
    pen_set_back_color(0, 0, 0);
    pen_set_thickness(1);
    pen_set_speed(30);
    quadrados(180, 180, 350);
    pen_wait();
    pen_close();
}

#endif // FRAC_QUADRADOS_H
