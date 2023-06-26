//sentencias

#include<iostream>

using namespace std;

int i = 1;
int main(){

do{
	
	cout<<"Imprimir Numeros"<<endl;
	cout<<i<<endl;
	i++;
	
}while(i<11);

// do = hacer
// switch = segun
// default = de otro modo
// break = finsi o finsegun
// case = opcion
//do whale = hacer mientras
//while = mientras

int count = 1;
while(count <= 10){
	
	cout<<"Imprimir numeros"<<endl;
	cout<<endl;
	count++;
}


int seleccion;
do{
	cout<<"\n menu 1,2,3, y otra opcion";
	cout<<"opcion 1\n";
	cout<<"opcion 2\n";
	cout<<"opcion 3\n";
	cout<<"salir\n";
	
	cin>>seleccion;
	
	
	switch(seleccion){
	    case 1:
	    	cout<<"esta es la opcion 1";
	    	break;
	    case 2:
			cout<<"esta es la opcion 2";
			break;
		case 3:
			cout<<"esta es la opcion 3";
			break;
		default:
			cout<<"adios";
			break;
	
	}
	
}while((seleccion > 0)&&(seleccion < 4));

}
