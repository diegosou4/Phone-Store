#include <iostream>
#include <string.h>
#include "iphone.h"
#include "usuario.h"

using namespace std;


void limpatela(){
   #if defined(__linux__) || defined(__unix__) 
           system("clear");
    #elif(_WIN32) || defined(_WIN64)
            system("CLS");
    #endif
 
}


int main(){

    string login,senha;
    iphone iphone7(01,"iphone",100,1300,0,true);    
    usuario usuario("admin", "admin", true);
      cout << " /    PHONE STORE    /" << endl;
        cout << "Digite seu login:" << endl;
        cin >> login;
        cout << "Digite sua senha:" << endl;
        cin >> senha;
    while(usuario.compareLogin(login,senha) == false)
    {   
      cout << "Invalido";
       cout << "Digite seu login:" << endl;
        cin >> login;
        cout << "Digite sua senha:" << endl;
        cin >> senha;
        limpatela();
    } 
       limpatela();
    cout << " ===================== " << endl;
	cout << " /    PHONE STORE    /" << endl;
	cout << " ===================== " << endl;
    cout << " 1- Cadastrar Produto" << endl;
    cout << " 2- Vender Produto" << endl;
    if(usuario.isadmin() == true){
        cout << " 3- Cadastrar Vendedor" << endl;
        cout << " 4- Relatorio de Vendas" << endl;
        cout << " 5- Sair" << endl;
    }else{
        cout << " 3- Relatorio de Vendas" << endl;
        cout << " 4- Sair" << endl;
    }
   

    return 0;
}