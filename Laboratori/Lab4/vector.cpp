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

        double& at(int i){
            if(i < 0 || i >= sz){
                throw Invalid{};
            }
            return elem[i];
        }

        double at(int i) const{
            if(i < 0 || i >= sz){
                throw Invalid{};
            }
            return elem[i];
        }

        void reserve(int newalloc);
        void push_back(double d);
        void pop_back();

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

void myVector::reserve(int newalloc){
    if(newalloc <= space) return;

    double* p = new double[newalloc];
    for(int i = 0; i < sz; ++i){
        p[i] = elem[i];
    }
    delete[] elem;
    elem = p;
    space = newalloc;
}

void myVector::push_back(double d){
    if(space == 0){
        reserve(8);
    }
    else if(sz == space){
        reserve(2 * space);
    }
    elem[sz] = d;
    sz++;
}

void myVector::pop_back(){
    if(sz > 0){
        sz--;
    }
}

int main(){

    return 0;
    
}