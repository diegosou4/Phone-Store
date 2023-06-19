#include <string>

using namespace std;



class usuario
{
private:
    string usuarioLogin;
    string usuarioSenha;
    bool admin;
    
public:
    // construtor
    usuario(string usuarioLogin,string usuarioSenha,bool admin);
    void getinfo();
    bool isadmin();
    bool compareLogin(string login,string senha);
};


