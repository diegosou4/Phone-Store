#include <iostream>
#include <string.h>
#include "iphone.h"


using namespace std;


int main(){


    iphone iphone7(01,"iphone",100,1300,0,true);
    iphone7.getinfo();
    cout <<  "Informe o nome do aparelho";

    

    return 0;
}