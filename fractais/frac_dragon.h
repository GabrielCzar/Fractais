#ifndef FRAC_DRAGON_H
#define FRAC_DRAGON_H

#include "lib/cpen.h"
#include "lib/pen.h"

void dragon(Pen &p, int tam, int iterations, int direction){
    if(iterations <= 0) {
        p.walk(tam);
        return;
    }

    // forward
    dragon(p, tam, iterations - 1, 1);

    p.right(90 * direction);

    // backward
    dragon(p, tam, iterations - 1, -1);
}

void fractal_dragon(){
    Pen p(1280, 780);
    p.setXY(650, 650);
    p.setHeading(90);
    p.setSpeed(5000);

    dragon(p, 10, 10, 1);

    p.wait();
}

#endif // FRAC_DRAGON_H
