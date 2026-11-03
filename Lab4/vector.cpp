#include <iostream>
using namespace std;

class myVector{

    public:

        int Dim() const{
            return space;
        }

        int Size() const{
            return sz;
        }

        ~myVector(){
            delete[] elem;
        }

        double& operator[](int i){
            return elem[i];
        }
    
        double operator[](int i)const{
            return elem[i];
        }

        class Invalid{};
        myVector();

        myVector(int space);

        myVector(int space, int sz);

    private:
        int sz;
        int space;
        double* elem;

};

myVector::myVector(){ 
    elem = new double[10];
    sz = 0;
    space=10;
    for(int i = 0; i<10; i++){
        elem[i]=0.0;
    }
}

myVector::myVector(int s){

    space = s; 
    sz=s; 
    elem = new double[space];
    for(int i=0; i<space; i++){
        elem[i] = 0.0;
    }

}

myVector::myVector(int s,int d){

    space=s; 
    sz=d; 
    elem = new double[space];
    for(int i=0; i<space; i++){
        elem[i] = 0.0;
    }

}

int main(){

    return 0;
    
}