#include <iostream>
#include <string>
using namespace std;

struct Empleado {
    string NombreEmpleado;
    string ContrasenaUsuario;
};

struct UsuarioHotel {
    string NombreUsuario;
    string NroHabitacion;
    float horashabitacion;
    char clasehabitacion;
};

int MatrizHabitaciones[100][100];

string HabitacionOcupada[] = {"Ocupado" , "Desocupado"};

void vaciarMatriz ();

void vaciarMatriz (){
    for (int i = 0; i < 100 ; i++){
        for (int j = 0; j < 100; j++){
            Matrizhabitaciones[i][j] = 0;
        }
    } 
}

InformacionUsuario.UsuarioHotel[100];


void RegistroUsuario(int Numero);

void RegistroUsuario(int Numero){
    cout << "por favor registre los datos de la persona" << endl;
    cout << "Datos de la persona" << endl;
    cout << "Nombre: "; cin >> NombreUsuario[Numero].UsuarioHotel;
    cout << "Tiempo (h):"; cin >> horas[Numero].UsuarioHotel;
    cout << "clase (a, b ,c)"; cin >> clase[Numero].UsuarioHotel;
}


void OpcionSeleccionarHabitacion();

void OpcionSeleccionarHabitacion(){
    do {
        int Numero;
        int opcionHabitacion;

        cout << "habitaciones..." << endl;
        if (Matrizhabitaciones[0] = 1){
            cout << "1.    A 100" << "[   " << HabitacionOcupada[0]  << "  ]" << endl;
        } else {
            cout << "1.    A 100" << "[   " << HabitacionOcupada[1]  << "  ]" << endl;
        }
        if (Matrizhabitaciones[1] = 1){
            cout << "1.    A 101" << "[   " << HabitacionOcupada[0]  << "  ]" << endl;
        } else {
            cout << "1.    A 101" << "[   " << HabitacionOcupada[1]  << "  ]" << endl;
        }
        if (Matrizhabitaciones[2] = 1){
            cout << "1.    A 102" << "[   " << HabitacionOcupada[0]  << "  ]" << endl;
        } else {
            cout << "1.    A 102" << "[   " << HabitacionOcupada[1]  << "  ]" << endl;
        } 
        if (Matrizhabitaciones[3] = 1){
            cout << "1.    A 103" << "[   " << HabitacionOcupada[0]  << "  ]" << endl;
        } else {
            cout << "1.    A 103" << "[   " << HabitacionOcupada[1]  << "  ]" << endl;
        }
        
        cout << "    seleccione una habitacion ... "; cin >> opcionHabitacion;
        switch (opcionHabitacion) {
            case 1:
                Numero = 0;
                RegistroUsuario(Numero);
                break;
            case 2:
                Numero = 1;
                RegistroUsuario(Numero);
                break;
            case 3:
                Numero = 2;
                RegistroUsuario(Numero);
                break;
            case 4: 
                Numero = 3;
                egistroUsuario(Numero);
            case 0:
                cout << "saliendo" << endl;
                break;
            default:
                cout << "No valido. Intente de nuevo" << endl;
                break;
        }
    } while (opcionHabitacion != 0);
}






int main (){



    string NombreEmpleado, ContrasenaEmpleado;

    cout << "GESTOR DE HABITACIONES LAEX" << endl;
    cout << "bienvenido" << endl;

    do {
    cout << "ingrese un nombre de usuario: "; cin >> NombreEmpleado;
    cout << "ingrese una contrasena: "; cin >> ContrasenaEmpleado;

    }

    cout << "hola " << NombreUsuario << endl;


    do {
        int opcionOpcion;

        cout << "gestor de habitaciones ..." << endl;

        cout << "1.  selecccionar una habitacion" << endl;
        cout << "2.  ver ganancias" << endl;
        cout << "3.  opciones" << endl;
        cout << "0.  salir " << endl;
        cout << "seleccione una opcion..."; cin >> opcionOpcion;
        switch (opcionOpcion){
            case 1: 
                OpcionSeleccionarHabitacion();
                break;
            case 2: 
                Verganancias();
                break;
            case 3: 
                OpcionesMenu();
                break;
            case 4:
            int salirPrograma;
                cout << "1.  continuar" << endl;
                cout << "0.  salir " << endl;

                cout << "de verdad desea salir? "; cin >> salirPrograma
                if (salirPrograma != 0) {
                cout << "saliendo..."
                }
                else {
                    break;
                }
        }
    }



        cout << "seleccione una habitacion para visualizarla" << endl; 
}

