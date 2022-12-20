#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={1,45,2,4,0,78,2},temp;
    int i=0;
    int n=sizeof(a)/sizeof(a[0]);
    // while(a[i]!='\0')
    // {
    //     i++;
    // }
    // cout<<a;
    for (int j = n; j >= 0; j--)
    {
        for (int k = 0; k < j; k++)
        {
            if (a[k]>a[k+1])
            {
                temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
            
        }
        
    }
    for ( i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
return 0;
}