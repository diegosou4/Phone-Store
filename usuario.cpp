#include <iostream>
#include "usuario.h"

using namespace std;


usuario::usuario(string usuarioLogin,string usuarioSenha,bool admin){
    this->usuarioLogin = usuarioLogin;
    this->usuarioSenha = usuarioSenha;
    this->admin = admin;
}

void usuario::getinfo(){
    cout << "\nLogin" << usuarioLogin;
}

bool usuario::isadmin(){
    if(admin == true){
        return true;
    }
    else {
        return false;
    }
}

bool usuario::compareLogin(string login,string senha){
    if(this->usuarioLogin == login && this->usuarioSenha == senha){
        return true;
    }else{
        return false;
    }
}