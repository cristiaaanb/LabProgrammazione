#include <iostream>
using namespace std;

char* strdup(const char* s){

    int n=0;
    int i=0;
    while(s[i]!=0){

        i++;
        n++;

    }

    char* prova = new char[n+1];
    i=0;
    
    while(s[i]!=0){

       prova[i] = s[i];
       i++;

    }
    return prova;

}

int main() {

    char s[] = "Hello, World!";
    int n=0;
    int i=0;
    
    while(s[i]!=0){

        n++;
        i++;
    }
    
    char* copia = new char[n+1];
    copia = strdup(s);
    
    cout<<"Originale: "<<endl;
    cout<<s<<endl;
    
    cout<<"Copiata: "<<endl;
    cout<<copia<<endl;
    
    delete copia;
    return 0;
}