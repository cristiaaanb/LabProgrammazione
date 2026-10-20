#include <iostream>
using namespace std;

char* strdup(char* s){
    char* copia[];
    while(*s != '\0'){
        *copia = *s;
        copia++;
        s++;
    }
    return copia;
}

int main() {
    char str[] = "Hello, World!";

    char copia[] = strdup(str);
    return 0;
}//da finire non funziona