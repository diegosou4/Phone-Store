#include <iostream>
#include "iphone.h"
#include <string.h>


using namespace std;

iphone::iphone(int id=0,string nome="Iphone",int saudeBateria=0,int valorPago=0,int valorVenda=0, bool disponivel = true)
{
    this->id = id;
    this->nome = nome;
    this->saudeBateria = saudeBateria;
    this->valorPago = valorPago;
    this->valorVenda = valorVenda;
    this->disponivel = disponivel;
   
}

void iphone::getinfo(){
    cout << "Id:" << id;
    cout << "\nSaude da Bateria:" << saudeBateria;
    cout << "\nValor Pago:" << valorPago;
    cout << "\nValor Vendido:" << valorVenda;
    if(disponivel == true){
        cout << "\nAparelho Disponivel";
    } else{
        cout << "\nAparelho Vendido";
    }
    cout << "\nNome " << nome;
     cout << "\n" ;

}