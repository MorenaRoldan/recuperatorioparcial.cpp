#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int numMaterias;
    cout << "Ingrese la cantidad de materias: ";
    cin >> numMaterias;

    double sumaPonderada = 0;
    double sumaPonderaciones = 0;

    for (int i = 0; i < numMaterias; ++i) {
        string nombre;
        double nota, ponderacion;

        cout << "Ingrese el nombre de la materia " << i + 1 << ": ";
        cin >> nombre;
        cout << "Ingrese la nota obtenida en " << nombre << ": ";
        cin >> nota;
        cout << "Ingrese la ponderación de " << nombre << " (en porcentaje): ";
        cin >> ponderacion;
        ponderacion /= 100; // Convertir porcentaje a decimal

        sumaPonderada += nota * ponderacion;
        sumaPonderaciones += ponderacion;
    }

    double promedioPonderado = sumaPonderada / sumaPonderaciones;

    cout << fixed << setprecision(2);
    cout << "El promedio ponderado final es: " << promedioPonderado << endl;

    return 0;

}
