#include <iostream>
#include <cmath>
using namespace std;

int main(){
    char resp = 's';
    int opcion;
    while (resp == 's'){
        cout << " Menu Lab1" << endl
        << "[1] Ejercicio 1" << endl
        << "[2] Ejercicio 2" << endl
        << "[3] Salir" << endl
        << "Seleccione una opcion: ";
        cin >> opcion;
        cout << endl;
        switch(opcion){
            case 1:
                //Ejercicio 1
                int valor_ingresado;
                double valor_respuesta;
                cout << "Ingrese un valor x para la funcion sigmoide: ";
                cin >> valor_ingresado;
                cout << endl;
                //Ecuación
                valor_respuesta = 1/(1 + exp(valor_ingresado * -1));
                cout << "Respuesta f(" << valor_ingresado << ") = " << valor_respuesta<< endl<< endl;
            break;
            case 2:
                //Ejercicio 2
                int valor_usuario, sumatoria;
                sumatoria = 0;
                cout << "Ingrese un numero para realizar el calculo: ";
                cin >> valor_usuario;
                cout << endl;
                while(valor_usuario < 0){
                    cout << "Valor ingresado no valido" <<endl
                    <<"Ingrese un numero valido para realizar el calculo [n >= 0]: ";
                    cin >> valor_usuario;
                    cout << endl;
                }
                //Ecuación
                for (int i = 0; i <= valor_usuario; i++){
                    sumatoria += (2 * i - 1) * (2 * i + 1);
                }
                cout << "Respuesta f(" <<valor_usuario << ") = "  << sumatoria << endl << endl;
            break;
            case 3:
                //Terminar el Programa
                cout << "Fin del Programa" << endl;
                resp = 'n';
            break;
            default:
            cout << "Opcion invalida";
        }
    }
}
