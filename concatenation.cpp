// Jasnoor Kaur
// E&TC-A2
// 24070123049

#include <iostream>
using namespace std;
int main() {
    char str1[20] = "Hello";
    char str2[] = "World";
    int i = 5;
    for (int j = 0; str2[j] != '\0'; j++) {
        str1[i] = str2[j];
        i++;
    }
    str1[i] = '\0';
    cout << "Concatenated: " << str1;
    return 0;
}
