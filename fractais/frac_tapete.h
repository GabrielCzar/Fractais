#ifndef FRAC_TAPETE_H
#define FRAC_TAPETE_H

void quadrado(Pen &p, int tam){
    for(int i = 0; i < 4; i++){
        p.walk(tam);
        p.right(90);
    }
}

void tapete(Pen &p, double tam){
    if(tam < 1)
        return;
    p.right(45);
    double diag = (tam/3.0) * sqrt(2);
    p.jump(diag);
    p.left(45);
    quadrado(p, tam/3.0);
    p.right(45);
    //p.setColor(sf::Color::Red);
    p.jump(-diag);
    p.left(45);

    for(int i = 0; i < 4; i++){
        p.jump(tam/3.0);
        tapete(p, tam/3.0);
        p.jump(tam/3.0);
        tapete(p, tam/3.0);
        p.jump(tam/3.0);
        p.right(90);
    }
}

void fractal_tapete(){
    Pen p(700, 700);
    p.setXY(0, 0);
    p.setHeading(0);
    p.setSpeed(30);
    double tam = 700;
    tapete(p, tam);
    p.wait();
}

#endif // FRAC_TAPETE_H
