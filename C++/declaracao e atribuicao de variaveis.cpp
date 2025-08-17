#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main (){
    int idade;
    double salario, altura;
    char genero;
    string nome;
    
    idade = 18;
    salario = 1000.00;
    altura = 1.63;
    genero = 'm';
    nome = "Max Thomazini" ;

    cout <<fixed<< setprecision(2);
    cout << "idade = " << idade << endl;
    cout << "salario = " << salario << endl;
    cout << "altura = " << altura << endl;
    cout << "genero = " << genero << endl;
    cout << "nome = " << nome << endl;

}