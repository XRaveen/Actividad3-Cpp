#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int cantidad;
    string nombre;
    float nota1, nota2, nota3, nota4, promedio;

    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> cantidad;
    cin.ignore();

    cout << endl;
    cout << left << setw(25) << "Estudiante"
         << setw(10) << "Nota 1"
         << setw(10) << "Nota 2"
         << setw(10) << "Nota 3"
         << setw(10) << "Nota 4"
         << setw(12) << "Promedio"
         << "Estatus" << endl;

    for (int i = 1; i <= cantidad; i++)
    {
        cout << "\nNombre del estudiante: ";
        getline(cin, nombre);

        cout << "Nota 1: ";
        cin >> nota1;

        cout << "Nota 2: ";
        cin >> nota2;

        cout << "Nota 3: ";
        cin >> nota3;

        cout << "Nota 4: ";
        cin >> nota4;

        promedio = (nota1 + nota2 + nota3 + nota4) / 4;

        cin.ignore();

        cout << left << setw(25) << nombre
             << setw(10) << nota1
             << setw(10) << nota2
             << setw(10) << nota3
             << setw(10) << nota4
             << setw(12) << fixed << setprecision(2) << promedio;

        if (promedio >= 70)
        {
            cout << "Aprobado";
        }
        else
        {
            cout << "Reprobado";
        }

        cout << endl;
    }

    return 0;
}