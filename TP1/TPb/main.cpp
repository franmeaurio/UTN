#include <iostream>

using namespace std;

int main()
{
    float m1, b1, m2, b2, x, y;

    cout << "Ingrese los valores de la recta 1:" << endl;

    cout << "m1: ";
    cin >> m1;

    cout << "b1: ";
    cin >> b1;

    cout << " " << endl;
    cout << "--------------------------------------" << endl;
    cout << " " << endl;

    cout << "Ingrese los valores de la recta 2:" << endl;

    cout << "m2: ";
    cin >> m2;

    cout << "b2: ";
    cin >> b2;

    cout << " " << endl;
    cout << "--------------------------------------" << endl;
    cout << " " << endl;

    cout << "Recta 1: y = " << m1 << "x + " << b1 << endl;
    cout << "Recta 2: y = " << m2 << "x + " << b2 << endl;

    cout << " " << endl;
    cout << "--------------------------------------" << endl;
    cout << " " << endl;

    if(b1==b2)
    {
        if(m1==m2)
        {
            cout << "Las rectas son iguales.";
            return 0;
        }
        cout << "Las rectas son paralelas.";
        return 0;
    }

    x= (b2-b1)/(m1-m2);
    y= m1*x+b1;

    cout << "El punto de interseccion de las rectas es: (" << x << ";" << y << ")" << endl;
    return 0;
}
