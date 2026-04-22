#include <iostream>
#include <vector>
using namespace std;

int quadsum(vector<int> arr, int target)
{
    int n = arr.size();
    //selection sort
    for (int i = 0; i < n - 1; i++)
    {
        int ans = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[ans] > arr[j])
            ans = j;
        }
        swap(arr[i], arr[ans]);
    }
    for (int i = 0; i < n - 3; i++)
    {
        for (int j = i + 1; j < n - 2; j++)
        {
            for (int k = j + 1; k < n - 1; k++)
            {
                int no = target - arr[i] - arr[j] - arr[k];
                int start = k + 1, end = n - 1;
                while (start <= end)
                {
                    int mid = start + (end - start) / 2;
                    if (arr[mid] == no)
                    return 1; // Quadruplet found
                    else if (arr[mid] < no)
                    start = mid + 1;
                    else
                    end = mid - 1;
                }
            }
        }
    }
    return 0; // No quadruplet found
}    

int main()
{
    vector<int> v = {1, 5, 1, 0, 6, 0};
    int target = 13;
    cout<< quadsum(v, target);
}