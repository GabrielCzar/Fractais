#include <iostream>
#include <string>

using namespace std;

#include "fractais/frac_arvore.h"
#include "fractais/frac_gelo.h"
#include "fractais/frac_triangulo.h"
#include "fractais/frac_quadrados.h"
#include "fractais/frac_trigo.h"
#include "fractais/frac_circulos.h"
#include "fractais/frac_tapete.h"
#include "fractais/frac_rotacao.h"
#include "fractais/frac_dragon.h"

int main() {
    //Execute a funcao de criacao de algum dos fractais

    string fractal[9] = { "Tree", "Ice", "Triangle", "Square", "Wheat", "Circle", "Carpet", "Rotation", "Dragon" };
    int type;

    cout << "Please choose a fractal to execute: " << endl
         << "1 - Tree" << endl
         << "2 - Ice"  << endl
         << "3 - Triangle" << endl
         << "4 - Square" << endl
         << "5 - Wheat" << endl
         << "6 - Circle" << endl
         << "7 - Carpet" << endl
         << "8 - Rotation" << endl
         << "9 - Dragon" << endl;

    cin >> type;

    if (type >= 1 && type <= 9) {
        cout << "Choosed: " << fractal[type - 1] << endl;
    } else {
        cout << "Invalid option... " << endl;
        return 1;
    }

    switch (type) {
    case 1:
        fractal_arvore();
        break;
    case 2:
        fractal_gelo();
        break;
    case 3:
        fractal_triangulo();
        break;
    case 4:
        frac_quadrados();
        break;
    case 5:
        fractal_trigo();
        break;
    case 6:
        fractal_circulos();
        break;
    case 7:
        fractal_tapete();
        break;
    case 8:
        fractal_rotacao();
        break;
    case 9:
        fractal_dragon();
        break;
    default:
        cout << "Invalid option.." << endl;
        break;
    }

    return 0;
}
