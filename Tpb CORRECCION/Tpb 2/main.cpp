#include <iostream>

using namespace std;

int main()
{
    float m1, b1, m2, b2, x, y;

    cout << "Recta 1:" << endl;
    cout << "m1: ";
    cin >> m1;
    cout << "b1: ";
    cin >> b1;

    cout << endl << "Recta 2:" << endl;
    cout << "m2: ";
    cin >> m2;
    cout << "b2: ";
    cin >> b2;

    if(m1==m2)
    {
        if(b1==b2)
        {
            cout << endl << "Las rectas son iguales." << endl;
            return 0;
        }
        else
            cout << "Las rectas son paralelas." << endl;
        return 0;
    }
    else

        x= (b2-b1)/(m1-m2);
        y= m1*x+b1;

    cout << endl << "Interseccion de las rectas: (" << x << ";" << y << ")" << endl;
    return 0;

}
