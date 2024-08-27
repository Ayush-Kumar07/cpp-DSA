#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number to search: ";
    cin >> n;

    int arr[8] = {1, 3, 7, 9, 34, 22, 12, 18};

    for(int i = 0; i < 8; i++) {
        if(arr[i] == n) {
            cout << "Yes, number " << n << " is present." << endl;
            return 0; 
        }
    }

    cout << "No, the number " << n << " is not present." << endl;
    return 0;
}