#include <bits/stdc++.h>
using namespace std;

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
void read(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
int main()
{
    int a[] = {2, 4, 6, 1, 8, 3, 9, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int b[n];
    int j=0;
    // for (int i = 0; i < n; i++)
    // {
    //     b[i] = 0;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (a[j] > a[i])
    //         {
    //             b[i] = a[j];
    //             break;
    //         }
    //     }
    // }
    // display(b, n);
    for (int i = 0; i < n; i++)
    {
        if (a[i]<b[j])
        {
            /* code */
        }
        
    }
    

    return 0;
}