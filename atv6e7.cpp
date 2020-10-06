#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;


int main() {

int cabe();
    char resp='s';
    int linh, colu, vertice, aresta;
    string nomeArq, ler;
    ifstream arquivoE;

    cout << "Ativ 6: " << endl;
    cout << endl;



    while (!arquivoE.is_open()){
        cout << "Nome do arquivo: ";
        getline(cin, nomeArq);

        arquivoE.open(nomeArq);
        if (arquivoE.is_open()){

            arquivoE.seekg(0);
            arquivoE >> vertice;

            arquivoE.seekg(1);
            arquivoE >> aresta;

            linh = aresta;
            colu = vertice/2;

            int matriz[linh][colu], matrizA[vertice][vertice], linA, colA, peso, vert[vertice], grauV=0;

            arquivoE.seekg(3);
            for (int x = 0; x < linh; x++){
                for (int y = 0; y < colu; y++){
                    arquivoE >> matriz[x][y];
                }
            }
            for (int x = 0; x < vertice; x++){
                for (int y = 0; y < vertice; y++){
                    matrizA[x][y] = 0;
                }
            }
            for (int i = 0; i < aresta; i++){
                linA = matriz[i][0];
                colA = matriz[i][1];
                peso = matriz[i][2];
                matrizA[linA][colA] = peso;
                matrizA[colA][linA] = peso;
            }
            cout << "\nMatriz adjacente: " << endl;
            for (int x = 0; x < vertice; x++){
                for (int y = 0; y < vertice; y++){
                    cout << matrizA[x][y] << "     ";
                }
                cout << endl;
            }
            for (int i = 0; i < vertice; i++){
                vert[i] = 0;
            }

            for (int x = 0; x < vertice; x++){
                for (int y = 0; y < vertice; y++){
                    grauV += matrizA[x][y];
                }
                vert[x] = grauV;
                grauV = 0;
            }

            cout << endl;
            cout << "Grau dos vertices: " << endl;;
            for (int i = 0; i < vertice; i++){
                cout << "Vertice " << i << ": " << vert[i] << endl;
            }

            while(resp != 's' || resp != 'n'){
                cout << " Ver a resposta da ativ 7? [S/N] ";
                cin >> resp;

                if (resp == 's'){
                    cabe();

                    cout << "Ativ 7: " << endl;
                    cout << endl;

                    for (int x = 0; x < vertice; x++){
                        cout << "Adjacentes ao " << x << ": ";
                        for (int y = 0; y < vertice; y++){
                            if (matrizA[x][y] != 0){
                                cout << y << " ";
                            }
                        }
                        cout << endl;
                    }
                    return 0;
                }
                else if (resp == 'n'){
                    return 0;
                }
                else{
                    cabe();
                    cout << "Não entendi a resposta" << endl;
                }
            }

        }
        else{
            cabe();
            cout << "Arquivo não encontrado" << endl;
        }
    }
    arquivoE.close();
    return 0;
}


