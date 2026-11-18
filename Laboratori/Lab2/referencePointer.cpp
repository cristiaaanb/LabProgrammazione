#include <iostream>
using namespace std;

void print_reference(const int& i, const double& d) {
    cout << "Value of i: " << i << endl;
    cout << "Value of d: " << d << endl;
}

void print_pointer(const int* i, const double* d) {
    cout << "Value of i: " << *i << endl;
    cout << "Value of d: " << *d << endl;
}


int main() {
    const int i = 5;
    const double d = 3.14;

    print_reference(i, d);
    print_pointer(&i, &d);

    return 0;
}