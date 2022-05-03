#include <iostream>
#include "lib.h"
using namespace std;
    int main(){
        char c;
        cin >>c;
        if (carattere(c)){
            if (c>=97 && c<=122){
                c= c-32;
                } else {
                c=c + 32;}
            cout << (char)c;
        }
        else
            cout << "errore" << endl;
        return 0;
     }
