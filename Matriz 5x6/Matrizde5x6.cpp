#include<iostream>
#include<cstdlib>
using namespace std;



int main() {
	int columna,fila,a,i,j,k,determinante;
	int matriz[2][2];
	int matriz[3][3];

	cout<<"Elija una Opcion";
	cout<<"(1) Matriz de 2x2";
	cout<<"(2) Matriz de 3x3";
	cin>>a;

	if (a=1){
	for (fila=0;fila<=1;fila++) {
		for (columna=0;columna<=1;columna++) {
			matriz[fila][columna] = (rand()%9)+1;
			determinante[1]=(i[2]*j[3]-i[3]*j[2]);
            determinante[2]=(i[3]*j[1]-i[1]*j[3]);
            determinante[3]=(i[1]*j[2]-i[2]*j[1]);
		}
		
	}
	}
	else if (a=2){
	for (fila=0;fila<=2;fila++) {
		for (columna=0;columna<=2;columna++) {
			cout << matriz[fila][columna] << " ";
			determinante = matriz[fila][columna];
			determinante[1]=(i[2]*j[3]-i[3]*j[2]);
            determinante[2]=(i[3]*j[1]-i[1]*j[3]);
            determinante[3]=(i[1]*j[2]-i[2]*j[1]);
    
		}
		cout << " " << endl;
	}
	cout<<"El Resultado del determinante es: "<<determinante<<endl;
	}
	return 0;

}

