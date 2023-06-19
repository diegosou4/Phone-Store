#include <string>

using namespace std;


class iphone
{
private:
    int id;
    string nome;
    int saudeBateria;
    int valorPago;
    int valorVenda;
    bool disponivel;
    

public:
    //Construtor
    iphone(int id, string nome,int saudeBateria,int valorPago,int valorVenda, bool disponivel);
    void getinfo();
};

