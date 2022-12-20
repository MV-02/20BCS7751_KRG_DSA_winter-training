#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[20]="abcd";
    char b[20]="efgh";
    int j=0,i=0;
    while(a[i]!='\0')
    {
        i++;
    }
    while(b[j]!='\0'){
        a[i]=b[j];
        i++;
        j++;
    }
    a[i]='\0';
    cout<<a;
return 0;
}