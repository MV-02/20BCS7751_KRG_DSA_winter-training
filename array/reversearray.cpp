#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {

        arr[i] = arr[i] + arr[n - i - 1];
        arr[n - 1 - i] = arr[i] - arr[n - 1 - i];
        arr[i] = arr[i] - arr[n - 1 - i];
    }
}
int main()
{
    int a[] = {11, 12, 13, 14, 15};
    int n = sizeof(a) / sizeof(a[0]);
    reverse(a,n);
    for (int16_t i = 0; i < n; i++)
   {
      cout<<a[i]<<" ";
   }
    return 0;
}

