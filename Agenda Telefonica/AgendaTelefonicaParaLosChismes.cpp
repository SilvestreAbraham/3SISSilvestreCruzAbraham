#include <iostream>
#include <string>

using namespace std;

void inicializar(string lisnombre[], string listelper[], string listelcel[], string listelcasa[], string listelofi[], int i);
void guardarcontacto(string lisnombre[], string listelper[], string listelcel[], string listelcasa[], string listelofi[], int i);
void vercontacto(string lisnombre[], string listelper[], string listelcel[], string listelcasa[], string listelofi[], int i);
void eliminarcontacto(string lisnombre[], string listelper[], string listelcel[], string listelcasa[], string listelofi[], int i);

int main() {
	int ax;
	int co;
	int da;
	int i;
	int j;
	int k;
	string lisnombre[9];
	string listelcasa[9];
	string listelcel[9];
	string listelofi[9];
	string listelper[9];
	int numer;
	int op;
	j = 0;
	k = 0;
	i = 0;
	op = 0;
	co = 0;
	
	do {
		cout << "AGENDA TELEFONICA PARA LOS CHISMES" << endl;
		cout << "Elija una Opcion" << endl;
		cout << "(1) Crear Contacto" << endl;
		cout << "(2) Ver Contacto Registrado" << endl;
		cout << "(3) Eliminar Contacto por Numero" << endl;
		cout << "(4) Salir" << endl;
		cin >> op;
		switch (op) {
		case 1:
			for (j = 0; j < 1; j++) {
				if (lisnombre[0]=="0") {
					co = co+1;
					k = j;
					j = 8;
				}
			}
			if (i < 3 || co > 8) {
				ax = i;
				i = k;
				guardarcontacto(lisnombre, listelper, listelcel, listelcasa, listelofi, i);
				co = 0;
				i = ax;
				i = i+1;
			}
			break;
		case 2:
			vercontacto(lisnombre,listelper,listelcel,listelcasa,listelofi,i);
			break;
		case 3:
			eliminarcontacto(lisnombre,listelper,listelcel,listelcasa,listelofi,i);
			break;
		}
    }
	while (op = 4);	
	return 0;
}

void init(string lisnombre[], string listelper[], string listelcel[], string listelcasa[], string listelofi[]) {
	for (int a = 0; a < 10; a++) {
		lisnombre[a] = "0";
		listelper[a] = "0";
		listelcel[a] = "0";
		listelcasa[a] = "0";
		listelofi[a] = "0";
	}
}

void guardarcontacto(string lisnombre[], string listelper[], string listelcel[], string listelcasa[], string listelofi[], int i) {
	int co;
	string numer;
	int val;
	co = 0;
	val = 0;
	cout << "Ingrese Nombre del Contacto a Guardar" << endl;
	cin >> lisnombre[i];
	while (val==0) {
		cout << "Ingrese el Numero de Telefono Personal" << endl;
		cin >> numer;
		cout << "Ingrese el Numero de Telefono Celular" << endl;
		cin >> numer;
		cout << "Ingrese el Numero de Telefono de Casa" << endl;
		cin >> numer;
		cout << "Ingrese el Numero de Telefono de Oficina" << endl;
		cin >> numer;
		if (numer.size()==10) {
			listelper[i] = numer;
			listelcel[i] = numer;
			listelcasa[i] = numer;
			listelofi[i] = numer;
			val = 1;
		}
		 else {
			cout << "Numero Invalido, Vuelva a Ingresar el Numero No Mayor a 10 Digitos" << endl;
			val = 0;
			co = 0;
		}
	}	
}

void vercontacto(string lisnombre[], string listelper[], string listelcel[], string listelcasa[], string listelofi[], int i) {
	for (int j = 0; j < 10; j++) {
		if (listelper[j]!="0") {
			cout <<"Contacto: " << lisnombre[j] << endl;
			cout <<"El Telefono Personal es: " << listelper[j] << endl;
			cout <<"El telefono Celuar es: " << listelcel[j] << endl;
			cout <<"El Telefono de Casa es: " << listelcasa[j] << endl;
			cout <<"El Telefono de Oficina es: " << listelofi[j] << endl;
		}
	}
}

void eliminarcontacto(string lisnombre[], string listelper[], string listelcel[], string listelcasa[], string listelofi[], int i) {
    string numer;
	cout << "Ingrese el Numero de Telefonon del Contacto" << endl;
	cin >> numer;
	for (int j = 0; j < i; j++) {
		if ((listelper[j]==numer) || (listelcel[j]==numer) || (listelcasa[j]==numer) || (listelofi[j]==numer)) {
			listelper[j] = "0";
			listelcel[j] = "0";
			listelcasa[j] = "0";

			
			listelofi[j] = "0";
		}
	}
}

