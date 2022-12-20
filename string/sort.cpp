#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[20]="bdca",temp;
    int i=0;
    while(a[i]!='\0')
    {
        i++;
    }
    // cout<<a;
    for (int j = i; j >= 0; j--)
    {
        for (int k = 0; k < j-1; k++)
        {cout<<"\n";
            if ((int)a[k]>(int)a[k+1])
            {
                temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
            
        }
        
    }
    i=0;
    while(a[i]!='\0')
    {
        cout<<a[i];
        i++;
    }
    
return 0;
}