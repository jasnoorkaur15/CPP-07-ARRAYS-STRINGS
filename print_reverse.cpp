// Jasnoor Kaur
// E&TC-A2
// 24070123049

#include <iostream>
using namespace std;
int main() {
    char str[] = "Hello";
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    for (int i = len - 1; i >= 0; i--) {
        cout << str[i];
    }
    return 0;
}
