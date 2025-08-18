#include <iostream>
#include <string>
#include <iomanip>
#include <climits>

using namespace std;

int main (){
    double salario1, salario2;
    string nome1, nome2;
    int idade;
    char sexo;

    cout << "nome da primeira pessoa: ";
    getline (cin, nome1);
    cout << "salario da primeira pessoa: ";
    cin >> salario1;

    cout << "nome da segunda pessoa: ";
    cin.ignore(INT_MAX, '\n');
    getline (cin, nome2);
    cout << "salario da segunda pessoa: ";
    cin >> salario2;

    cout <<"digite uma idade: ";
    cin >> idade;
    cout << "digite o sexo (F/M): ";
    cin >> sexo;

    cout << fixed << setprecision(2);
    cout << "nome1 = " << nome1 << endl;
    cout << "salario1 = " << salario1 << endl;
    cout << "nome2 = " << nome2 << endl;
    cout << "salario2 = " << salario2 << endl;
    cout << "idade = " << idade << endl;
    cout << "sexo = " << sexo << endl;






}