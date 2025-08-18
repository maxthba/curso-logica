#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int x, y;

    do{
        cout << "digite o valor de x: ";
        cin >> x;

        cout << "digite o valor de y: ";
        cin >> y;

        if (x == y ){
            cout << "numeros iguais";
            break;
        }
        else if (x>y){
            cout << "decrecente" << endl;
        }
        else if (y>x){
            cout << "crescente" << endl;
        }
    }
    while (x != y);

    return 0;
}
