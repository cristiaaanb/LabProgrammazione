#include <iostream>
using namespace std;

void f(){

    int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int* ptr = &v[2];


    ptr[-1] = 2;
    for(int i = 0; i < sizeof(v)/sizeof(int)-3; i++){
        ptr[i] = 3;
    }

    cout << "eseguito f() senza errori" << endl;
}

void f_illegal(){
    int v1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int* ptr = &v1[2];


    ptr[-1] = 2;
    for(int i = 0; i < (sizeof(v1)/sizeof(int))+5; i++){
        ptr[i] = 3;
    }
    //qui prova ad accedere a memoria non allocata, quindi il programma crasha (provando ad accedere oltre la definizione dell'array)
    cout << "eseguito f_illegal() " << endl;
}

int main() {

    f();
    f_illegal();
    cout << "eseguito main() senza errori" << endl;
    return 0;

}