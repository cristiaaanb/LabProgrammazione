#include <iostream>
using namespace std;

void to_lower(char* str) {
    while (*str!=0) {
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str + ('a' - 'A');
        }
        str++;
    }
    }


int main() {
    char str[] = "Hello, World!0";
    to_lower(str);
    cout << str << endl;
    return 0;
}