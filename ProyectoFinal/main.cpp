#include <iostream>

using namespace std;

int main(){
    int opcion,bt, i, j,bc, radio, y, x, ancho, alto, lib;
    const float PI = 3.141516;
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
                for (int i=0; i < bt; i++){
                    for (int j=0; j< bt -i -1; j++){
                        cout << " ";
                    }
                for (int j = 0; j < 2 * i + 1; j++) {
                    if (j == 0 || j == 2 * i || i == bt - 1) {
                    cout << "*";
                } else {
                    cout << " ";
                    }
                }
                cout << endl;
            }

                break;
            case 2:
                cout << "Ingrese el Tamanio del Cuadrado" << endl;
                cout << "\n";
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
                cout << "Ingrese el Ancho del Rectangulo" << endl;
                cout << "\n";
                cin >> ancho;
                cout << "Ingrese el Alto del Rectangulo" << endl;
                cout << "\n";
                cin >> alto;
                for (i=1; i<=ancho; i++){
                    cout<<"*";
                    }
                    for(i=2; i<alto; i++){
                        cout<<"\n*";
                        for(lib =2; lib<ancho; lib++){
                            cout<<" ";
                        }
                        cout<<"*";
                    }
                    cout<<"\n";
                    for(i=1; i<=ancho; i++){
                        cout<<"*";
                    }
                break;
            case 4:
                cout << "Ingrese el radio del circulo" << endl;
                cout << "\n";
                cin >> radio;
                for (y =-radio; y<=radio; y++){
                    for (x = -radio; x<=radio; x++){
                        if (x*x + y*y <=radio*radio){
                            cout <<"* ";
                                }else {
                                    cout <<" ";
                                }
                            }
                    cout << "\n";
                }
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
