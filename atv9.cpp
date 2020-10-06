#include <iostream>

using namespace std;

int main(){
    int n, i=1, resp=0;


    cout << "Digite o valor de 'n' (para n > 0): ";
    cin >> n;

    for (int j = 0; j < n; j++){
        resp += i*(i+1);
        i++;
    }
    cout << "Resolucao: " << resp << endl;
}
