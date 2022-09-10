#ifndef AGENCIA_H
#define AGENCIA_H
#include<string>
#include<iostream>
using namespace std;

class Pedido
{
    private:
        int idPedido;
        int trafic;
        int standar;
        int special;
        int idZona;
        int idAgencia;
        bool respuesta;
        bool confirmacion;
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


/* cambio Orrego
#ifndef AGENCIA_H
#define AGENCIA_H
#include<string>
#include<iostream>
using namespace std;

class Pedido
{
    private:
        int idPedido;
        int trafic;
        int standar;
        int special;
        int idZona;
        int idAgencia;
        bool respuesta;
        bool confirmacion;
    public:
		Pedido(int,int,int,int,int,int,bool);
        void generarPedido(int,int,int,int,int,int);
        void check();
        void verificacion();
        void DevolverPedido();
        void finPedido();
};

#endif 
*/
