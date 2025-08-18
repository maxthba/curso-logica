#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num1, num2, num3, menor;

    cout << "primeiro valor: ";
    cin >> num1;
    menor = num1;
    cout << "segundo valor: ";
    cin >> num2;
    if (menor>num2){
        menor = num2;
    }
    cout << "terceiro valor: ";
    cin >> num3;

    if (menor>num3){
        menor = num3;
    }

    cout << "menor: " << menor << endl;


    return 0;
}
