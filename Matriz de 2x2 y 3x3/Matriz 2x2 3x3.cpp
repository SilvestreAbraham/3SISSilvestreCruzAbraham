#include <iostream>
#include <conio.h>
using namespace std;

int main(){

    float a[2],b[2],c[3],d[3],e[3],r1=0,r2=0,r3=0,r4=0,r5=0,r6=0,r7=0,r8=0,determ=0;
    int i,n;

    do{
        cout<<"\nElija una Opcion"<<endl;
        cout<<"(1) Realizar una Matriz de 2x2"<<endl;
        cout<<"(2) Realizar una Matriz de 3x3"<<endl;
        cin>>n;

        if (n==1) {
            
            cout<<"Digite los Valores para Iniciar la Matriz de 2x2"<<endl;
            cout<<"Digite los Valores del Tamaño del 1er Vetor"<<endl;
            cin>>a[0]>>a[1];
            cout<<"Digite los Valores del Tamaño del 2do Vector"<<endl;
            cin>>b[0]>>b[1];

            for(i=0 ; i<2 ; i++){

                r1 = a[0] * b[1];
                r2 = b[0] * a[1];
                determ = r1 - r2; 
            }
            cout<<"El Determinante es: "<<determ<<endl;
        }

        else if(n==2) {

            cout<<"Digite los Valores para Iniciar la Matriz de 3x3"<<endl;
            cout<<"Digite los Valores del Tamaño del 1er Vector"<<endl;
            cin>>c[0]>>c[1]>>c[2];
            cout<<"Digite los Valores del Tamaño del 2do Vector"<<endl;
            cin>>d[0]>>d[1]>>d[2];
            cout<<"Digite el Valor del Tamaño del 3er Vector"<<endl;
            cin>>e[0]>>e[1]>>e[2];

            for ( i=0 ; i<3 ; i++){
                
                r1 = c[0] * d[1] * e[2];
                r2 = d[0] * e[1] * c[2];
                r3 = e[0] * c[1] * d[2];
                r4 = e[0] * d[1] * c[2];
                r5 = c[0] * e[1] * d[2];
                r6 = d[0] * c[1] * e[2];

                r7 = r1 + r2 + r3;
                r8 = r4 + r5 + r6;

                determ = r7 - r8;

            }
            cout<<"El Determinante es: "<<determ<<endl;

        }
    }
        while (n=4);


    return 0;
}