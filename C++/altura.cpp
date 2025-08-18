#include <iostream>
#include <string>
#include <iomanip>
#include <climits>

using namespace std;

int main(){
    
    string nome;
    int N, idade, i;
    double altura, porcentagem, media, soma_alt;

    cout << "digite quantas pessoas deseja cadastrar: ";
    cin >> N;

    for (i = 1; i<=N; i++){
        cin.ignore(INT_MAX, '\n');
        cout << "digite nome: ";
        getline(cin, nome);

        cout << "digite idade: ";
        cin >> idade;

        if (idade<16){
            porcentagem +=1;
        }

        cout << "digite sua altura: ";
        cin >> altura;

        soma_alt += altura;
    }

    media = (double)soma_alt/(double)N;
    porcentagem = (double)100*porcentagem / N;

    cout << fixed << setprecision(2);
    cout << "media de altura: " << media << endl;
    cout << "porcentagem " << porcentagem << "%" << endl;



    return 0;
}
