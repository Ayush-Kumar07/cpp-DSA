#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    for (int i = n - 1; i >= 0; i--)
    {
        cout << " " << arr[i];
    }


    // int i = 0;
    // int e = n - 1;
    // while(i <= e){
    //     swap(arr[i] , arr[e]);
    //     i++;
    //     e--;
    // }

    // for(int i = 0; i < n; i++){
    //     cout<< arr[i] << " ";
    // }
} jcladv 