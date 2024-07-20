#include <iostream>
#include <vector>
#include <string>
#include <iomanip> // Para std::setw y std::left

using namespace std;

// Clase para representar a un huésped
class Huesped {
private:
    string nombre;
    string dni;

public:
    Huesped(string _nombre, string _dni) : nombre(_nombre), dni(_dni) {}

    string getNombre() const {
        return nombre;
    }

    string getDNI() const {
        return dni;
    }
};

// Clase para representar una habitación del hotel
class Habitacion {
private:
    bool ocupada;
    Huesped* huesped;

public:
    Habitacion() : ocupada(false), huesped(nullptr) {}

    bool estaOcupada() const {
        return ocupada;
    }

    void reservar(Huesped* _huesped) {
        ocupada = true;
        huesped = _huesped;
    }

    void liberar() {
        ocupada = false;
        huesped = nullptr;
    }

    Huesped* getHuesped() const {
        return huesped;
    }
};

// Función para mostrar el estado de las habitaciones
void mostrarEstadoHabitaciones(const vector<Habitacion>& hotel) {
    cout << "\nEstado de las Habitaciones\n";
    cout << "--------------------------\n";

    for (size_t i = 0; i < hotel.size(); ++i) {
        cout << "Habitacion " << setw(2) << i + 1 << ": ";
        if (hotel[i].estaOcupada()) {
            cout << "Ocupada por " << setw(15) << left << hotel[i].getHuesped()->getNombre();
            cout << " DNI: " << hotel[i].getHuesped()->getDNI() << endl;
        } else {
            cout << "Libre\n";
        }
    }
    cout << endl;
}

int main() {
    const int numHabitaciones = 10;
    vector<Habitacion> hotel(numHabitaciones);

    // Menú de opciones
    int opcion;
    do {
        system("cls"); // Limpiar la pantalla (para sistemas Windows)
        cout << "Bienvenido al Hotel Virtual\n";
        cout << "---------------------------\n";
        cout << "1. Reservar Habitacion\n";
        cout << "2. Mostrar Estado de Habitaciones\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                // Reservar habitación
                int numHab;
                string nombre, dni;

                cout << "Ingrese el numero de habitacion que desea reservar (1-" << numHabitaciones << "): ";
                cin >> numHab;
                numHab--; // Convertir a índice base 0

                if (numHab >= 0 && numHab < numHabitaciones) {
                    if (hotel[numHab].estaOcupada()) {
                        cout << "La habitacion está ocupada.\n";
                    } else {
                        cout << "Ingrese su nombre: ";
                        cin >> nombre;
                        cout << "Ingrese su DNI: ";
                        cin >> dni;

                        Huesped* nuevoHuesped = new Huesped(nombre, dni);
                        hotel[numHab].reservar(nuevoHuesped);

                        cout << "Habitacion reservada correctamente.\n";
                    }
                } else {
                    cout << "Numero de habitación invalido.\n";
                }
                break;
            }
            case 2: {
                // Mostrar estado de habitaciones
                mostrarEstadoHabitaciones(hotel);
                system("pause"); // Pausar la consola antes de volver al menú
                break;
            }
            case 3:
                // Salir del programa
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opcion invalida. Intente nuevamente.\n";
                break;
        }
    } while (opcion != 3);

    // Liberar memoria de los objetos Huesped creados dinámicamente
    for (auto& habitacion : hotel) {
        if (habitacion.estaOcupada()) {
            delete habitacion.getHuesped();
        }
    }

    return 0;
}
