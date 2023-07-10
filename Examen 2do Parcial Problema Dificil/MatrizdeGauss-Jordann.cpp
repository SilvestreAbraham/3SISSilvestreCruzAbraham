#include <iostream>
#include <windows.h>

using namespace std;

COORD coord={0,0};
void gotoxy(int x, int y){
    coord.X=x;
    coord.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
};

int main(){
    short int i,j,k,n;

    cout<<"Ingrese el Numero de Filas y Columnas nxn"<<endl;
    cin>>n;

    float a[n][n], b[n][n],aux,pivote;

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){

            gotoxy(j*5, i+3);
            cin>>a[i][j];
            b[i][j]=0;

            if(i==j){

                b[i][j] = 1;
            }
        }
    }
    for(i=0; i<n; i++){
        pivote = a[i][i];

        for(k=0; k<n; k++){
            a[i][k] = a[i][k] / pivote;
            b[i][k] = b[i][k] / pivote;
        }

        for(j=0; j<n; j++){

            if(i!=j){
                aux = a[j][i];

                for(k=0; k<n; k++){
                    a[j][k] = a[j][k] - aux * a[i][k];
                    b[j][k] = b[j][k] - aux * b[i][k];
                }
            }
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            gotoxy(j*5, i+10);
            cout<<a[i][j];

            gotoxy(10+j*5, i+10);
            cout<<b[i][j];
        }
    }
    return 0;
}
   