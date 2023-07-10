#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <locale>


using namespace std;

struct Alumno {
    string nombre;
    string edad;
    string plantel;
    string numeroCuenta;
    string matricula;
    string asignacionExtraordinario;
    double calificacionPromedio;
};

void inscripcion(Alumno& alumno);
void generarNumeroCuenta(Alumno& alumno);
void entregaComprobante(const Alumno& alumno);
void consultarAsignacion(const Alumno& alumno);
void obtenerCalificacionPromedio(Alumno& alumno);
void imprimirResultados(const Alumno& alumno);

int main() {
    setlocale(LC_ALL, "");  
    Alumno alumno;
    int a,b,c,n;

    do{
    cout<<"\nUniversidad Tres Culturas"<<endl;
    cout<<"Ingrese las Calificaciones Finales del alumno: "<<endl;
    cin>>a>>b>>c;

    if(a>=6 || b>=6 || c>=6){
        cout<<"El Alumno Aprobo"<<endl;
        cout<<"No Necesita Presentar Examenes Extraordinarios"<<endl;
        cout<<"Maldito Suertudo A Quien le Rezo"<<endl;
    }
    else if(a<=5 || b<=5 || c<=5){

        inscripcion(alumno);
        generarNumeroCuenta(alumno);
        entregaComprobante(alumno);
        consultarAsignacion(alumno);
        obtenerCalificacionPromedio(alumno);
        imprimirResultados(alumno);
    }
    }
    while (n=2);

    return 0;
}

void inscripcion(Alumno& alumno) {
    cout<<"\nExtraordinarios UTC"<<endl;
    cout<<"Inscripcion de Examenes Extraordinarios"<<endl;
    cout<<"\nIngrese su nombre: "<<endl;
    cin>>alumno.nombre;
    cout<<"\nIngrese su edad: "<<endl;
    cin>>alumno.edad;
    cout<<"\nIngrese su Matricula"<<endl;
    cin>>alumno.matricula;
    cout<<"\nIngrese su plantel: "<<endl;
    cin>>alumno.plantel;
    cin.ignore();
    cout<<""<<endl;
}

void generarNumeroCuenta(Alumno& alumno) {
    srand(time(0));  
    int numeroAleatorio = rand() % 10000 + 1;
    alumno.numeroCuenta = "Extd.-" + to_string(numeroAleatorio);
    cout<<"\nIniciando Proceso de Registro y Tramites de Extraordinarios"<<endl;
    cout<<"\nEl Número de Cuenta es: "<<alumno.numeroCuenta<<endl;
}

void entregaComprobante(const Alumno& alumno) {
    cout<<"\nComprobante"<<endl;
    cout<<"\nSe Asigno el Comprobante al Alumno: "<<alumno.nombre<<" con Numero de Cuenta: "<<alumno.numeroCuenta<<endl;
}

void consultarAsignacion(const Alumno& alumno) {
    cout<<"\nConsultar Asignación del Extraordinario"<<endl;
    srand(time(0));  
    int respuestaAleatoria = rand() % 2;
    string respuesta = (respuestaAleatoria == 0) ? "No" : "Sí";
    cout<<"\nEl Extraordinario para el Alumno: "<<alumno.nombre<<"con Numero de Cuenta: "<<alumno.numeroCuenta<<" es: "<<respuesta<<endl;
}

void obtenerCalificacionPromedio(Alumno& alumno) {
    cout<<"\nCalificación del Extraordinario"<<endl;
    srand(time(0));  
    alumno.calificacionPromedio = rand() % 101;
    cout<<"\nCalificación Final del Alumno: "<<alumno.nombre<<" con numero de Cuenta: "<<alumno.numeroCuenta<<" es: "<<alumno.calificacionPromedio<<endl;
}

void imprimirResultados(const Alumno& alumno) {
    cout<<"\nResultados"<<endl;
    cout<<"\nNombre: "<<alumno.nombre<<endl;
    cout<<"\nMatricula: "<<alumno.matricula<<endl;
    cout<<"\nEdad: "<<alumno.edad<<endl;
    cout<<"\nPlantel: "<<alumno.plantel<<endl;
    cout<<"\nNúmero de Cuenta: "<<alumno.numeroCuenta<<endl;
    cout<<"\nAsignación Extraordinario: "<<alumno.asignacionExtraordinario<<endl;
    cout<<"\nCalificación Promedio: "<<alumno.calificacionPromedio<<endl;
    cout<<"\nDatos enviados a coordinación"<<endl;
}