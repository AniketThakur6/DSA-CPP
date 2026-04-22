#include <iostream>
using namespace std; // not in lecture it is from chatgpt

int main()
{
    int arr[] = {0,0,0,1, 2, 37};
    int n = 6;

    int totalSubsets = 1 << n;   // 2^n

    for (int mask = 0; mask < totalSubsets; mask++)
    {
        cout << "{ ";
        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
                cout << arr[i] << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
