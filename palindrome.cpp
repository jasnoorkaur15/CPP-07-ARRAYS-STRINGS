//Jasnoor Kaur
//Batch- A2
//24070123049

#include <iostream>
using namespace std;
int main() {
    char str[] = "madam";
    int len = 0;
    while (str[len] != '\0') len++;
    bool isPalindrome = true;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
}
