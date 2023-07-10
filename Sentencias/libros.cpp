#include <iostream> 
#include <string> 
using namespace std;

int main(){
	string titulos[5];
	string autores[5];

	cout<<"Ingrese la Siguiente Informacon";
	for(int i = 0; i < 5; i++){
		cout<<"\n datos del libro : "<< i + 1 <<" \n";
		cout<<"titulo: ";
		getline(cin, titulos[i]);
		cout<<"autor: ";
		getline(cin, autores[i]);
	}
}
