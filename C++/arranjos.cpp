#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main(){

    int m, n, i, j;
    cout<<"digite a quantidade de linhas: ";
    cin>>m;
    cout<<"digite a quantidade de colunas: ";
    cin>>n;

    int matriz[m][n];
    for (i = 0; i<m; i++){
        for (j = 0;j < n;j++){
            cout<<"digite o valor do elemento["<<i<<","<<j<<"]: ";
            cin >> matriz[i][j];
        }
    }
    cout<<"matriz digitada:"<<endl;
    for (i = 0; i <m; i++){
        for (j = 0; j<n; j++){
            cout << matriz[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}
