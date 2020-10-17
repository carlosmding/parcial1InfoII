#include <iostream>
#include <math.h>
using namespace std;

//Programa de defensa

char menu();
float calcular_x(float vel, int angulo, int x_inicial);
float calcular_y(float vel, int angulo, int y_inicial);


int main(){
    short int unsigned posicion_x_O;
    short int unsigned posicion_y_O;
    short int unsigned posicion_x_D;
    short int unsigned posicion_y_D;

    char opcion;
    cout<<"Bienvenido al sistema de defensa (DefenZa)"<<endl;
    cout<<" "<<endl;

    do {
        opcion=menu();
        switch (opcion) {
            case '1':
                //float posicionesx[]={};
                //float posicionesy[]={};
                int total_x=0; int total_y=0;
                cout<<"Generar disparos ofensivos que comprometan la integridad del "
                          "canon defensivo"<<endl;
                cout<<"Ingresa la posición en X del canon Ofensivo"<<endl;
                cin>>posicion_x_O;
                cout<<"Ingresa la posición en Y del canon Ofensivo"<<endl;
                cin>>posicion_y_O;
                cout<<"Ingresa la posición en X del canon Defensivo"<<endl;
                cin>>posicion_x_D;
                cout<<"Ingresa la posición en Y del canon Defensivo"<<endl;
                cin>>posicion_y_D;

                while(total_x <=3 && total_y <=3){
                    for (int i=1;i<100 ; i++ ) { //rango de velocidades
                        for (int j=1;j<181 ; j++) { //rango de angulos
                            float xDO=calcular_x(i,j,posicion_x_O);
                            float yDO=calcular_y(i,j,posicion_y_O);
                            if (xDO==posicion_x_D or yDO == posicion_y_D)
                                cout<<"un valor"<<endl;
                        }
                    }
                    total_x++;
                    total_y++;
                }
            break;

            case '2':

                break;
            case '3':

                break;
            case '4':

                break;
            case '5':
                cout<<"Gracias por utilizar el software DefenZa"<<endl;
                break;
            default:
                cout<<"Opción no valida"<<endl;
                cout<<" "<<endl;
                break;
            }

    } while (opcion != '5');


}



float calcular_x(float vel, int angulo, int x_inicial){
   float Xfinal;
   Xfinal=x_inicial+((vel*cos(angulo)*2.5));
   return Xfinal;
}

float calcular_y(float vel, int angulo, int y_inicial){
    float Yfinal;
    Yfinal=y_inicial+((vel*sin(angulo)*2.5));
    return Yfinal;
 }



char menu(){
    char opc;

    cout<<"1. Generar disparos ofensivos que comprometan la integridad del "
          "canon defensivo"<<endl;
    cout<<"2. Generar disparos defensivos que comprometan la integridad del "
          "canon ofensivo"<<endl;
    cout<<"3. Dado un disparo ofensivo, generar disparos defensivos que impida que el canon"
          " defensivo sea destruido sin importar si el canon ofensivo pueda ser destruido"<<endl;
    cout<<"4. Dado un disparo ofensivo, generar disparo defensivos que impidan que "
          "los canones defensivo y ofensivo puedan ser destruidos."<<endl;
    cout<<"5. Salir del programa"<<endl;
    cout<<" "<<endl;

    do {
        cout<<"Opcion: "<<endl;
        cin >> opc;
    } while (opc < '1' or opc < '5' );

    return opc;
}
