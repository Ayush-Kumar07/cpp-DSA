#include <iostream>
using namespace std;
int main()
{
    int a[6] = {1, 2, 3, 4, 5, 6};
    int count = 0;
    for (int i = 0; i < 6; i++)
    {
        if (a[i] % 2 == 0)
            count = count + 1;
    }

    cout << "The no of even number in Array is :" << count << endl;
}