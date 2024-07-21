#include <iostream>
#include <string>
using namespace std;

struct Empleado {
    string NombreEmpleado;
    string ContrasenaUsuario;
};

struct UsuarioHotel {
    string NombreUsuario;
    int NroHabitacion;
    float HorasHabitacion;
    char ClaseHabitacion;
};

const int MAX_HABITACIONES = 100;
UsuarioHotel InformacionUsuario[MAX_HABITACIONES];

int MatrizHabitaciones[MAX_HABITACIONES][MAX_HABITACIONES];
string HabitacionOcupada[] = {"Ocupado", "Desocupado"};

void vaciarMatriz() {
    for (int i = 0; i < MAX_HABITACIONES; i++) {
        for (int j = 0; j < MAX_HABITACIONES; j++) {
            MatrizHabitaciones[i][j] = 0;
        }
    }
}

void RegistroUsuario(int Numero) {
    cout << "Por favor registre los datos de la persona" << endl;
    cout << "Datos de la persona" << endl;
    cout << "Nombre: "; cin >> InformacionUsuario[Numero].NombreUsuario;
    cout << "Tiempo (h): "; cin >> InformacionUsuario[Numero].HorasHabitacion;
    cout << "Clase (a, b ,c): "; cin >> InformacionUsuario[Numero].ClaseHabitacion;
    InformacionUsuario[Numero].NroHabitacion = Numero;
}

void OpcionSeleccionarHabitacion() {
    int opcionHabitacion;
    do {
        cout << "Habitaciones..." << endl;
        for (int i = 0; i < 4; ++i) { // Limitar la visualización a 4 habitaciones por ahora 
            cout << i + 1 << ".    A " << 100 + i << " [   " << HabitacionOcupada[MatrizHabitaciones[0][i]]  << "  ]" << endl;
        }

        cout << "Seleccione una habitacion (0 para salir)... "; cin >> opcionHabitacion;
        if (opcionHabitacion > 0 && opcionHabitacion <= 4) {
            int Numero = opcionHabitacion - 1;
            if (MatrizHabitaciones[0][Numero] == 0) {
                RegistroUsuario(Numero);
                MatrizHabitaciones[0][Numero] = 1; // Marcar la habitación como ocupada aunque deberia mandar desocupada 
            } else {
                cout << "Habitación ocupada por: " << InformacionUsuario[Numero].NombreUsuario << endl;
            }
        } else if (opcionHabitacion != 0) {
            cout << "No válido. Intente de nuevo" << endl;
        }
    } while (opcionHabitacion != 0);
}

int main() {
    string NombreEmpleado, ContrasenaEmpleado;

    cout << "GESTOR DE HABITACIONES LAEX" << endl;
    cout << "Bienvenido" << endl;

    cout << "Ingrese un nombre de usuario: "; cin >> NombreEmpleado;
    cout << "Ingrese una contrasena: "; cin >> ContrasenaEmpleado;

    cout << "Hola " << NombreEmpleado << endl;

    int opcionOpcion;
    do {
        cout << "Gestor de habitaciones..." << endl;
        cout << "1. Seleccionar una habitacion" << endl;
        cout << "2. Ver ganancias" << endl;
        cout << "3. Opciones" << endl;
        cout << "0. Salir " << endl;
        cout << "Seleccione una opcion... "; cin >> opcionOpcion;

        switch (opcionOpcion) {
            case 1: 
                OpcionSeleccionarHabitacion();
                break;
            case 2: 
                // VerGanancias(); // Implementar esta función
                break;
            case 3: 
                // OpcionesMenu(); // Implementar esta función
                break;
            case 0:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo" << endl;
                break;
        }
    } while (opcionOpcion != 0);

    return 0;
}
