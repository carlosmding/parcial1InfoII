#include <iostream>
#include <math.h>
using namespace std;

//Programa de defensa

double calcular_x(double vel, int angulo, int x_inicial);

int main(){
    cout<<"Bienvenido al sistema de defensa"<<endl;

    double xDO=calcular_x(34.8,20,3);
    cout<<xDO;

}

double calcular_x(double vel, int angulo, int x_inicial){
   double Xfinal;
   Xfinal=x_inicial+((vel*cos()*2.5);
   return Xfinal;
}

double calcular_y

char menu(){
    char opc;

    do{
        cout<<"1. Generar disparos ofensivos que comprometan la integridad del "
              "cañón defensivo"<<endl;
        cout<<"2. Generar disparos defensivos que comprometan la integridad del "
              "cañón ofensivo"<<endl;
        cout<<"3. Dado un disparo ofensivo, generar disparos defensivos que impida que el cañón "
              "defensivo sea destruido sin importar si el cañón ofensivo pueda ser destruido"<<endl;
        cout<<"4. Dado un disparo ofensivo, generar disparo defensivos que impidan que "
              "los cañones defensivo y ofensivo puedan ser destruidos."<<endl;
        cout<<"5. Salir del programa"<<endl;

    }while (opc !='5') {

    }
}
