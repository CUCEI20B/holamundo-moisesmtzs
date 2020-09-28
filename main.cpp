#include <iostream>

using namespace std;

int main() {

    string nombre;
    cout<<"Ingresa tu nombre: "<<endl;
    getline(cin,nombre);
    cout << "Hola "<<nombre<< " bienvenido al Mundo!" << endl; // eliminar esta línea

    return 0;
}