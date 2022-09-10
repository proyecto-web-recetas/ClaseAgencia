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
/*funcion envioPedido*/
void Agencia::generarPedido(int idPedido,int trafic,int standar,int special,int idZona,int idAgencia){
    switch(idZona){
        case 1:
            if(idAgencia>0 && idAgencia<16){
                    /*funcionPruebaFabrica(idPedido,trafic,standar,special,idZona,idAgencia);
                    agencia(idPedido,trafic,standar,special,idZona,idAgencia);*/
                    consultaStock(trafic,standar,special,respuesta);
                    /*igualacion de las variables de la cantidad de autos a la cantidad de la fabrica*/
            }else{
                cout<<"IdAgencia incorrecta"<<endl;
            }
            break;
        case 2:
            if(idAgencia>0 && idAgencia<11){
                consultaStock(trafic,standar,special,respuesta);
                /*funcionPruebaFabrica(idPedido,trafic,standar,special,idZona,idAgencia);
                 agencia(idPedido,trafic,standar,special,idZona,idAgencia);*/
            }else{
                cout<<"IdAgencia incorrecta"<<endl;
            }
            break;
        case 3:
            if(idAgencia>0 && idAgencia<5){
                    consultaStock(trafic,standar,special,respuesta);
                /*funcionPruebaFabrica(idPedido,trafic,standar,special,idZona,idAgencia);
                 agencia(idPedido,trafic,standar,special,idZona,idAgencia);*/
            }else{
                cout<<"IdAgencia incorrecta"<<endl;
            }
            break;
        default: cout<<"idZona incorrecta"<<endl;
    }
}

/*funcion funcionPruebaFabrica*/
/*void Agencia::funcionPruebaFabrica(int idPedido,int trafic,int standar,int special,int idZona,int idAgencia) {
        cout<<"Ingrese texto "<<idPedido<<" "<<trafic<<" "<<standar<<" "<<special<<" "<<idZona<<" "<<idAgencia;
}*/

//void Agencia::envioPedido(int idPedido,int trafic,int standar,int special,int idZona,int idAgencia){
    /*UML clase fabrica, tomar en cuenta sus variable*/
  /*  cout<<"Ingrese texto "<<idPedido<<" "<<trafic<<" "<<standar<<" "<<special<<" "<<idZona<<" "<<idAgencia;
}*/

bool Agencia::consultaStock(int trafic, int standar, int special,bool respuesta){/*bool Fabrica::consultaStock(int trafic, int standar, int special){*/
    if(trafic==1){/*prueba*/
        respuesta=true;
        cout<<"Hay stock"<<endl;
        verificacion(respuesta,confirmacion);
        return respuesta;

    }else{
        respuesta=false;
        cout<<"No hay stock"<<endl;
        verificacion(respuesta,confirmacion);
        return respuesta;
    }
    /*comparacion*/
}

/*verficar el pedido*/
bool Agencia::verificacion(bool respuesta,bool confirmacion){
    int nro=0;

    if(respuesta==true){
        cout<<"Posee cant. sugerida (1 para aprobar , 2 para cancelar)"<<endl;
        cout<<"Se realiza el pedido: ";
        cin>>nro;
    }else{
        cout<<"Posee cant. sugerida (1 para aprobar , 2 para cancelar)"<<endl;
        cout<<"Se realiza el pedido: ";
        cin>>nro;
    }
    if(nro==1){
        confirmacion=true;
        cout<<"Pedido enviado a la fabrica"<<endl;
    }else{
        confirmacion=false;
        cout<<"Pedido enviado a la fabrica"<<endl;
    }
    return confirmacion; //se envia a la fabrica
}

/*bool Agencia::rechazoPedido(){

}*/

/*void Agencia::finPedido(){
}

Agencia::~Agencia()
{
    //dtor
}
*/
