#include <iostream>
using namespace std;
int main(){
	int a[50];
	int b[50];
	int c[50];
	int n, i;
	
	cout<<"Ingresa el limite del vector \n";
	cin>>n;
	
	cout<<"Ingresa los Elementos del V1 \n";
	for(i = 0; i < n; i++){
		cout<<"Ingresa el Elemento ["<<i<<"]\n";
		cin>>b[i];
	}
	
	for(i = 0; i < n; i++){
		c[i] = a[i] + b[i];
		cout<<"Elemento: ["<<i<<"]\n";
	}
	
	cout<<"La Suma de los Vectores es: \n";
	for(i = 0; i < n; i++){
		cout<<" "<<c[i];
	}
	return 0;
}
