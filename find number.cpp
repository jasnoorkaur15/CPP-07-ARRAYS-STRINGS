//Jasnoor Kaur
//24070123049

  #include <iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter number to search: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << key << " found at position " << i + 1 << endl;
            return 0; 
            
        }
    }


