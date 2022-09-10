#ifndef AGENCIA_H
#define AGENCIA_H
#include<string>
#include<iostream>
using namespace std;

class Agencia
{
    private:
        int idPedido,trafic,standar,special,idZona,idAgencia;
        bool respuesta,confirmacion;
    public:
        /*constructores*/
        void agencia(int,int,int,int,int,int);
        /*operaciones*/
        void generarPedido(int,int,int,int,int,int);
        //void funcionPruebaFabrica(int,int,int,int,int,int); /*prueba*/
        bool consultaStock(int,int,int,bool);
        bool verificacion(bool,bool);
        void rechazoPedido();
        void finPedido();
        /*virtual ~Agencia();*/
};

#endif // AGENCIA_H
