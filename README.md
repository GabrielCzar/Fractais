# Fractais

## Objetivo

O seu objetivo é aprender recursão para implementar o código que produzirá os fractais da pasta imagens. 

## Instalação

    sudo apt-get install libsfml-dev -y

## Uso

   A biblioteca para C está em `lib/cpen.h`. A biblioteca para C++ está em `lib/pen.h`.
   O projeto do QTCreator já inclui as bibliotecas.
   No caso, se for utilizar Python turtle so é necessário o executar.

## Métodos

```c++
    //anda pra frente e se o valor for negativo para trás
    void walk(float distance);

    void rotate(float angulo);

    //vira pra esquerda
    void left(float angulo);

    //vira pra direita
    void right(float angulo);

    //limpa todos os tracos da tela
    void clear();

    //levanta a caneta do papel
    void up();

    //abaixa a caneta no papel
    void down();

    //vai para essa posicao da tela riscando o papel se down
    void move(float x, float y);

    //espera tantos segundos
    void wait(int seconds);

    //espera ate clicar em fechar
    void wait();

    //muda a cor de risco
    void setColor(int R, int G, int B);
    
    //muda a cor de fundo
    void setBackColor(int R, int G, int B);

    //geran um numero aleatorio
    static int rand();

    //GETTERS and SETTERS

    //muda x e y sem riscar
    void  setXY         (float x, float y);
    
    //muda o angulo de orientacao em graus
    //segue o cartesiano, 0 é a direita, cresce no sentido antihorário
    void  setHeading    (float angulo);    

    //muda a velocidade
    //se velocidade = 0, então ele não mostra o desenho até que esteja terminado
    //se velocidade > 0, speed pode ser qualquer valor inteiro
    void  setSpeed      (int velocidade);

    //muda a espessura da linha
    void  setThickness  (int espessura);

    float getX();        
    float getY();
    int   getSpeed();
    float getHeading();
    int   getThickness();
```
