#include <iostream>

using namespace std;

int main(){
    int opcion,bt, i, j,bc;
    const float PI = 3.141516;
    float radio, volumen;

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
                cout << "Ingrese la base del Triangulo" << endl;
                cout << "\n";
                cin >> bt;
                for (i=1; i<=bt; i++){

                    for (j=1; j<bt-i; j++){
                        cout << " ";
                    }
                    for (j=1; j<=i; j++)
                    {
                    cout << "*";
                }
                    cout << endl;
                }
                break;
            case 2:
                cout << "Ingrese el Tama�o del Cuadrado" << endl;
                cout << "\n" << endl;
                cin >> bc;
                for (i=0; i<bc; i++){
                    for(j=0; j<bc; j++)
                    {
                        if ((i==0)||(j==0)||(i==bc-1)||(j==bc-1))
                        {
                            cout<<"*";
                        }
                        else{
                            cout<<" ";
                        }
                    }
                    cout<<"\n";
                }
                break;
            case 3:
                cout << "" << endl;
                cout << "\n" << endl;
                break;
            case 4:
                cout << "Ingrese el radio del circulo" << endl;
                cout << "\n" << endl;
                cin >> radio;
                //volumen = 4.0/3*PI*pow(radio,3);
                cout << "" << endl;
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
