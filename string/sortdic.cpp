#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[][50] = {"qbnsh", "acc", "lmnop", "qr","bfoasf","jdskfah"};
    int n=sizeof(a)/sizeof(a[0]);
    char b[50] ;
    int i = 0;


    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (strcmp(a[j], a[j + 1]) == 1)
            {
                strcpy(b, a[j]);
                strcpy(a[j], a[j + 1]);
                strcpy(a[j + 1], b);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\n";
    }


    return 0;
}