#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter size : " << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "value : " << endl;
        cin >> arr[i];
    }
    int mx = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
        }
    }
        cout << "the maximum value is : " << mx << endl;
}
