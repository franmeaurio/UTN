#include <iostream>

using namespace std;

int main()
{
    float k, m;

    cout << "Ingrese una velocidad en km/h:" << endl;
    cin >> k;

    m = k/3.6;

    cout << "El resultado de la conversion es de: " << m << "m/s";
    return 0;
}
