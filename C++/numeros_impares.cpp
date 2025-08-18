#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int x, y, i, soma = 0;

    cout << "digite x: ";
    cin >> x;

    cout << "digite y: ";
    cin >> y;

    if (x>y){
        for (i = y; i<x; i++){
            if (i%2!=0){
                soma +=i;
            }
        }   
    }
    else if (x<y){
        for (i = x; i<y; i++){
            if (i%2!=0){
                soma +=i;
            }
        }
    }

    cout << "soma: " << soma <<endl;
    return 0;
}
