#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={11,12,13,14,16};
    int n=sizeof(a)/sizeof(a[0]);
    float r=((n/2.0)*(a[0]+a[n-1]))-((n/2.0)*(a[0]+(a[0]+n-1)));
    if (r)
    {
        cout<<false;
    }

    else
    {
        cout<<true;
    }
    
    
    return 0;
}