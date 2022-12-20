#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[] = "hkjfahhf";
    int a=sizeof(str)/sizeof(str[0]);
    char sub[3] = "fa";
    int n = 2,i;
    int hash = 0, hashcal;
    for (i = 0; i < n-1; i++)
    {
        hash += sub[i] * pow(31, 3 - i);
    }
    cout<<" HASH is "<<hash<<endl;
    for (i = 0; i < a-2; i++)
    {
        hashcal=0;
        for (int j = 0; j < n; j++)
        {
            hashcal += str[i] * pow(31, n - j);
            cout<<" IN NESTED HASCAL = "<<hashcal<<endl;
        }
        if (hashcal==hash)
        {
            cout<<" Found it "<<hashcal;
            goto H;
        }
    }

    H:
    for (int j = 0; j < n; j++)
    {
        cout<<str[i];
        i++;cout<<" I IS "<<i;
    }
    
    

    return 0;
}