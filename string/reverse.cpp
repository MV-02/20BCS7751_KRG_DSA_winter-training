#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[20]="abcdefgh";
    char b[20];
    int i=0,j=0;
    while(a[i]!='\0')
    {
        i++;
    }
    b[i--]='\0';
    while (*(a+i)!='\0')
    {
        b[j]=a[i--];
        j++;
    }
    i=0;
    while(b[i]!='\0')
    {
        cout<<b[i];
        i++;
    }
    // cout<<b;
    
return 0;
}