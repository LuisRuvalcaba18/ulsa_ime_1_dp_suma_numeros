// ¿Recuerdas qué hace iostream?
#include <iostream>
using namespace std;

// ¿por qué debe existir la función main()?
int main() {
    // 1. Constante: valor que no cambia durante la ejecución
    const int CANTIDAD = 5;
    int contador = 0;

    // 2. Variables (siempre inicializadas)
    double suma   = 0.0;
    double numero = 0.0;
    while (contador < CANTIDAD){
        std::cout<<"ingresar numero"<<endl;
        std::cin>>numero;
        if (std::cin) {
            suma+=numero;
            contador++;
        }else{
            cout<<"numero no valido"<<endl;
        }
    }

    

    // 3. Ciclo: repetir CANTIDAD veces
    //    TODO: elige un ciclo (for o while) y usa un contador
    //    TODO: pedir el numero, leerlo y acumularlo en suma

    // 4. Salida
    //    TODO: mostrar el total

    // ¿Qué significa return 0;?
    cout<<"la suma es:" <<suma<<
    endl;
    return 0;
}