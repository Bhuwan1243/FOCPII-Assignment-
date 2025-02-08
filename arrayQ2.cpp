#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Reversed array: ";
    for (int i=n-1; i>= 0; i--) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    int largest = arr[0], second_largest = arr[0];
    int smallest = arr[0], second_smallest = arr[0];

    for (int i=1; i<n; i++) {
        if (arr[i]>largest) {
            second_largest=largest;
            largest=arr[i];
        } else if (arr[i]>second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }

        if (arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < second_smallest && arr[i] != smallest) {
            second_smallest = arr[i];
        }
    }

    cout << "Second smallest element: " << second_smallest << endl;
    cout << "Second largest element: " << second_largest << endl;

    return 0;
}