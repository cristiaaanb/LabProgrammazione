#include <iostream>
using namespace std;

int main(){

    int i=999009000000000000;

    while(true){
        char* s = new char[i];
        i++;
        cout<<i<<endl;
    }

    /*
    2087458652 è la dimensione massima che è riuscito ad allocare
    
    terminate called after throwing an instance of 'std::bad_alloc'
    what():  std::bad_alloc*/
    return 0;
}