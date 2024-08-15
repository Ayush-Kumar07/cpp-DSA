#include <iostream>
using namespace std;
int main()
{
    int a[5] = {1, 3, 5, 7, 9};
    int mx = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > mx)
        {
            mx = a[i];
        }
    }
    cout << "The maximum number is " << mx;
}