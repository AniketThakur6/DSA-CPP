#include <iostream>// leetcode 
using namespace std;

int maxDistance(int n, int position[], int m) {
    int start = 1, end, mid, ans = -1;//start should start from 1 for searching samller value
    end = position[n - 1] - position[0];

    while (start <= end) {
        mid = start + (end - start) / 2;
        int count = 1, post = position[0];
        for (int i = 1; i < n; i++) {
            if (post + mid <= position[i]) {
                count++;
                post = position[i];
            }
        }
        if (count < m) {
            end = mid - 1;
        } else {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    int position[] = {22, 57, 74, 79};
    int n = 4, m = 4;
    cout << maxDistance(n, position, m);
    return 0;
}