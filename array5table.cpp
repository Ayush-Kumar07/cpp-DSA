#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int mul = 5;  // Start with 5 as the base for multiplication
    for (int i = 1; i <= 10; i++) {  // Loop through the first 10 multiples
        cout << mul * i << " ";  
    }

    return 0;
}
