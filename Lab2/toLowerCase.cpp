#include <iostream>
using namespace std;

void to_lower_case(char* str) {
    while (*str) {
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str + ('a' - 'A');
        }
        str++;
    }
    }
}

int main() {
    char str[] = "Hello, World!";
    to_lower_case(str);
    cout << str << endl;
    return 0;
}