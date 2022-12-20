#include<bits/stdc++.h>
using namespace std;

int main(){
    int s = 3, count = 0 ,pcount = 0;
    char a[] = "DeepLee";
    char f[s] = "eep";
    int b = sizeof(a)/sizeof(a[0]);
    int j = 0;
    while ((j+s) < b )
    {
        for (int i = 0; i<s ; i++)
        {
            if (a[j+i] == f[i])
            {
                count++;
            }
            else {
                count = pcount;
                break;
            }
        }
        pcount = count;
        j++;
    }
    cout<<count/s;

return 0;
}