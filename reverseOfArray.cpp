#include<iostream>
using namespace std;

int main(){
    int n; 
    cin >> n;
    int arr[n];
    
    // Input array elements
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Print reverse array
    cout << "Your reverse array: ";
    for(int i = n - 1; i >= 0; i--){  // Adjusted loop to include index 0
        cout << arr[i] << " ";  // Added a space for better readability
    }
    cout << endl;

    return 0;
}
