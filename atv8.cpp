#include <iostream>

using namespace std;

int ativ8(int vetor[], int tamanho){
    if (tamanho == 0){
       return 0;
    }
    else{
        return (vetor[tamanho-1] + ativ8(vetor, tamanho-1));
    }
}


