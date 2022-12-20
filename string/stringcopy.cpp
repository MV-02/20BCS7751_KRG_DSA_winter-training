#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[20]="abcdefgh";
    char b[20];
    int i=0;
    while (*(a+i)!='\0')
    {
        b[i]=a[i];
        i++;
    }

    cout<<b;
    
return 0;
}