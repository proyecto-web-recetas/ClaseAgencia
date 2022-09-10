#include<iostream>
#include <string>
#include "Agencia.h"
using namespace std;

void Agencia::agencia(int _idPedido,int _trafic,int _standar,int _special,int _idZona,int _idAgencia){
    idPedido=_idPedido;
    trafic=_trafic;
    standar=_standar;
    special=_special;
    idZona=_idZona;
    idAgencia=_idAgencia;
}
void Agencia::envioPedido(int idPedido,int trafic,int standar,int special,int idZona,int idAgencia){
    switch(idZona){
        case 1:
            if(idAgencia>0 && idAgencia<16){
                    funcionPruebaFabrica(idPedido,trafic,standar,special,idZona,idAgencia);
                    agencia(idPedido,trafic,standar,special,idZona,idAgencia);
            }else{
                cout<<"IdAgencia incorrecta"<<endl;
            }
            break;
        case 2:
            if(idAgencia>0 && idAgencia<11){
                funcionPruebaFabrica(idPedido,trafic,standar,special,idZona,idAgencia);
                 agencia(idPedido,trafic,standar,special,idZona,idAgencia);
            }else{
                cout<<"IdAgencia incorrecta"<<endl;
            }
            break;
        case 3:
            if(idAgencia>0 && idAgencia<5){
                funcionPruebaFabrica(idPedido,trafic,standar,special,idZona,idAgencia);
                 agencia(idPedido,trafic,standar,special,idZona,idAgencia);
            }else{
                cout<<"IdAgencia incorrecta"<<endl;
            }
            break;
        default: cout<<"idZona incorrecta"<<endl;
    }
}

void Agencia::funcionPruebaFabrica(int idPedido,int trafic,int standar,int special,int idZona,int idAgencia) {
        cout<<"Ingrese texto "<<idPedido<<" "<<trafic<<" "<<standar<<" "<<special<<" "<<idZona<<" "<<idAgencia;
}

/*void Fabrica::Pedido(){*/ //verificar que tipo de valor retorna
    /*UML clase fabrica, tomar en cuenta sus variable*/

/*}*/

/*bool Fabrica::consultaStock(){

}

bool Agencia::verificacion(){

}

bool Agencia::rechazoPedido(){

}

void Agencia::finPedido(){
}

ClaseAgencia::~ClaseAgencia()
{
    //dtor
}
*/
