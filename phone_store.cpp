#include <iostream>
#include <string.h>
#include "iphone.h"
#include "usuario.h"

using namespace std;


int main(){

   
    iphone iphone7(01,"iphone",100,1300,0,true);    
    usuario usuario("admin", "admin", true);
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