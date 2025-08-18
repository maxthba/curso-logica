#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N, i, j, contador = 0;
    cout << "digite a ordem da matriz: ";
    cin >> N;

    int matriz [N][N];
    for (i=0;i<N;i++){
        for (j=0;j<N;j++){
            cout << "digite o elemento["<< i+1 << "," << j+1 << "]: ";
            cin >> matriz[i][j];
            if (matriz[i][j]<0){
                contador += 1;
            }
        }
    }

    cout << "diagonal da matriz: " << endl;
    for (i = 0; i<N; i++){
        for (j = 0; j<N; j++){
            if(i == j){
                cout << " " << matriz[i][j] << " ";
            }
        }
    }
    cout << endl;
    cout << "total de negativos: " <<  contador << " ";
    return 0;
}

