#include <iostream>
#include <iomanip>
#include <string>
#include <climits>

using namespace std;

int main(){

    int idade1, idade2;
    double media;
    string nome1, nome2;

    cout << "digite o nome da primeira pessoa: " << endl;
    getline(cin, nome1);
    cout << "digite a idade da primeira pessoa: " << endl;
    cin>>idade1;
    cout << "digite o nome da segunda pessoa: " << endl;
    cin.ignore(INT_MAX, '\n');
    getline(cin, nome2);
    cout << "digite a idade da segunda pessoa: " << endl;
    cin>>idade2;

    media = (double)(idade1 + idade2) /(double) 2;
    cout << fixed << setprecision(1);
    cout << "dados da primeira pessoa" << endl;
    cout << "nome:" << nome1 << endl;
    cout << "idade:" << idade1 << endl;
    cout << "dados da segunda pessoa" << endl;
    cout << "nome:" << nome2 << endl;
    cout << "idade:" << idade2 << endl;
    cout << "a media de idade eh de " << media << " anos" << endl;


    return 0;
}
