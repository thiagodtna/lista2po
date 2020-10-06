#include <iostream>


using namespace std;

int main(){
    int n, i, j, resp=0;


    cout << "Qual a ordem das matrizes 'A' e 'B' (por ex: 4 se for 4x4): ";
    cin >> n;
    int matA[n][n], matB[n][n];

    //As matrizes do exercicio 3 não foram salvas pois o exercicio não pede para salva-las
    for (int linh=0; linh < n; linh++){
        cout << "Digite os numeros da " << (linh+1) << "ª linha da mariz 'A': ";
        for (int colu=0; colu < n; colu++){
            cin >>matA[linh][colu];
        }
    }
    for (int linha=0; linha < n; linha++){
        cout << "Digite os numeros da " << linha << "ª linha da mariz 'B': ";
        for (int colluna=0; colluna < n; colluna++){
            cin >>matB[linha][colluna];
        }
    }

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            resp += (matA[i][j] * matB[i][j]);
        }
    }

    cout << "Resolucao: " << resp << endl;
}
