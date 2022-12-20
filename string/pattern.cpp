#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[]="eepak";
    char b[]="eep";
    int n=sizeof(b)/sizeof(b[0]);
    char temp[n];
    int f=0;
    for (int i = 0; i < sizeof(a)/sizeof(a[0])-n-2; i++)
    {
        
        strncpy(temp,a,n);
        
    }
    if (f==1)
    {
        cout<<"found";
        
    }
    else
    {
        cout<<"nf";
    }
    
    
return 0;
}