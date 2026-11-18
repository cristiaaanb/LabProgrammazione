#include <iostream>
using namespace std;

template <typename T>

class myVector{

    public:

        int Dim();

        int Size();

        ~myVector();

        T& operator[](int i);
    
        T operator[](int i);

        T& at(int i);

        T at(int i); 

        void reserve(int newalloc);
        void push_back(T d);
        void pop_back();

        class Invalid{};
        explicit myVector();

        explicit myVector(int space);

        explicit myVector(int space, int sz);

    private:
        int sz;
        int space;
        T* elem;

};

template <typename T>
myVector<T>::myVector(){ 
    elem = new T[10];
    sz = 0;
    space=10;
    for(int i = 0; i<10; i++){
        elem[i]=T{};
    }
}

template <typename T>
myVector<T>::myVector(int s){

    space = s; 
    sz=s; 
    elem = new T[space];
    for(int i=0; i<space; i++){
        elem[i] = T{};
    }

}

template <typename T>
myVector<T>::myVector(int s,int d){

    space=s; 
    sz=d; 
    elem = new T[space];
    for(int i=0; i<space; i++){
        elem[i] = T{};
    }

}

template <typename T>
int myVector<T>::dim(){
    return space;
}

template <typename T>
int myVector<T>::size(){
    return sz;
}

template <typename T>
myVector<T>::~myVector(){
    delete[] elem;
}

template <typename T>
T& myVector<T>::operator[](int i){
    if(i < 0 || i >= sz) throw Invalid();
    return elem[i];
}

template <typename T>
T myVector<T>::operator[](int i)const{
    if(i < 0 || i >= sz) throw Invalid();
    return elem[i];
}

template <typename T>
T& myVector<T>::at(int i){
    if(i < 0 || i >= sz) throw Invalid();
    return elem[i];
}

template <typename T>
T myVector<T>::at(int i) const{
    if(i < 0 || i >= sz) throw Invalid();
    return elem[i];
}

template <typename T>
void myVector<T>::reserve(int newalloc){
    if(newalloc <= space) return;

    T* p = new T[newalloc];
    for(int i = 0; i < sz; ++i){
        p[i] = elem[i];
    }
    delete[] elem;
    elem = p;
    space = newalloc;
}

template <typename T>
void myVector<T>::push_back(const T d){
    if(space == 0){
        reserve(8);
    }
    else if(sz == space){
        reserve(2 * space);
    }
    elem[sz] = d;
    sz++;
}

template <typename T>
void myVector<T>::pop_back(){
    if(sz > 0){
        sz--;
    }
}

int main(){

    return 0;
    
}