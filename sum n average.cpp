//Jasnoor Kaur
//24070123049

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n]; 
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];  
    }

    float avg = (float)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;

    return 0;
}

Enter number of elements: 4
Enter the elements:
1 3 4 5
Sum = 13
Average = 3.25
