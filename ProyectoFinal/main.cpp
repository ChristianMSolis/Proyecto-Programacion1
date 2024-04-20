#include <iostream>

using namespace std;

int main(){
    int opcion;
    do

{
    system("cls");
        cout << "Ingrese el numero de la figura " << endl;
        cout << "1. Triangulo" << endl;
        cout << "2. Cuadrado" << endl;
        cout << "3. Rectangulo" << endl;
        cout << "4. Circulo" << endl;
        cout << "5. Salir del Programa" << endl;
        cout << "Ingrese su eleccion: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                cout << "" << endl;
                cout << "\n";
                break;
            case 2:
                cout << "" << endl;
                cout << "\n" << endl;
                break;
            case 3:
                cout << "" << endl;
                cout << "\n" << endl;
                break;
            case 4:
                cout << "" << endl;
                cout << "\n" << endl;
                break;
            case 5:
                cout << "Saliendo del programa." << endl;
                break;

            default:
                cout << "Opcion no valida. Por favor, seleccione una opcion valida." << endl;

        }

        cin.ignore();
        cin.get();

    } while (opcion != 5);

    return 0;

}
