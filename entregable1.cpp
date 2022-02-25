#include <iostream>

using namespace std;

int main(){
    int i = 0, opcion, opt, pu, total, cant, o, u = 0;
    string nombre, tratamiento, d, h;
    
    menu:
        cout << "---- MENÚ ----" << endl;
        cout << "Eliga una de las siguientes opciones: " << endl;
        cout << "1) Agendar cita " << endl;
        cout << "2) salir " << endl;
        cin >> opcion;
    
    
    switch(opcion){
        case 1: 
            
                 while (i <  3){

                    i = i + 1;
                    cout << "Agendar cita " << endl;
                    cout << endl;

                    cout << "su número de cita es: " << i << endl;

                    cout << "ingrese su nombre completo del paciente" << endl;
                    getline(cin, nombre);
                    getline(cin, nombre);

                    cout << "ingrese el nombre del tratamiento" << endl;
                    getline(cin, tratamiento);
                    
                    cout << "ingrese la descripción de su tratamiento" << endl;
                    getline(cin, d);

                    cout << "Ingrese la hora del tratamiento en fotmato 24h" << endl ;
                    getline(cin, h);

                    pu = 300;
                    cout  << "El precio unitario es de: $" << pu << endl;
                    cout << "Ingrese el precio del tratamiento"<< endl;
                    cin >> cant;
                    cout << " "  << endl;
                    cout << "Nombre del paciente: " << nombre << endl;
                    cout << "Tratamiento: " << tratamiento << endl;
                    cout << "Descripcción: " << d << endl;
                    cout << "Hora: " << h << endl;
                    cout<< "El precio total es de: $" << cant + pu << endl;

                    cout << "Si desea agendar otra cita ingrese 1, de lo contrario ingrese 0" << endl;
                    cin >> o;
                    if ( o == 0){
                       goto menu;
                    }
                }
                if (i == 3 ){
                  cout << " ya no se pueden programar más citas ";
                  goto menu;
                }
            break ;

        case 2:
           return 0; 
        break;
    }
    
}
