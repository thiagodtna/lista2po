#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int i, n, Sn, Sd, Sn2, Sd2;

    cout << "Digite o valor de 'n': ";
    cin >> n;

    if (n >= 1){
        Sn = ((2*1) - 1);
        Sd =  (pow((-2),(1+1)));

        for (i = 2; i <= n; i++){
            Sn2 = ((2*i) - 1);
            Sd2 =  (pow((-2),(i+1)));

            Sn = ((Sn*Sd2) + (Sd*Sn2));
            Sd = (Sd * Sd2);

            if (Sn < 0 && Sd < 0){
                Sn *= -1;
                Sd *= -1;
            }
        }
        while (Sn%2 == 0 && Sd%2 == 0){
            Sn /= 2;
            Sd /= 2;
        }
    }
    cout << "S = " << Sn << "/" << Sd << endl;
}


