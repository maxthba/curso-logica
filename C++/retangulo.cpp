#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
    double base, alt, peri, area, diag;

    cout << "digite a base do retangulo: ";
    cin >> base;

    cout << "digite a altura do retangulo: ";
    cin >>alt;

    peri = 2*base + 2*alt;
    area = base*alt;
    diag = sqrt(pow(base, 2.0)  +  pow(alt, 2.0));

    cout<<fixed<<setprecision(4);
    cout << "perimetro: "<<peri<<endl;
    cout << "area: "<<area<<endl;
    cout << "diagonal: "<<diag<<endl;

    return 0;
}
