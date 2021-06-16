//Author Subham
//kadane's algorithm..... Maximum sum of a subarray
#include <bits/stdc++.h>

using namespace std;
int MaxSum(int a[], int n)
{
    int current_sum = 0;
    int maxsum = 0;
    for (int i = 0; i < n; i++)
    {
        current_sum = current_sum + a[i];
        if (current_sum > maxsum)
        {
            maxsum = current_sum;
        }
        if (current_sum < 0)
        {
            current_sum = 0;
        }
    }
    if (maxsum <= 0)
    {
        cout << 0;
    }
    return maxsum;
}

int main()
{
    int n;
    cin >> n;
    if (n <= 0)
    {
        cout << "Invalid Size";
        return 0;
    }
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << MaxSum(a, n);
    return 0;
}
