#include <iostream>
using namespace std;

void print_array_length(double x[]) {
    
    cout << "Length of array: " << sizeof(x)/sizeof(double) << endl;
    //non compila essendo che a causa del decadimento non abbiamo nell'argomentol'interno array di double ma solo il primo
    //elemento, il puntatore.
    return;
}


int main() {

    const int n = 10;
    double v[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Length of array: " << sizeof(v)/sizeof(double) << endl;

    print_array_length(v);
    return 0;
}