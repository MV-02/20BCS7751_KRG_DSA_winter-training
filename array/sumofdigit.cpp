#include<bits/stdc++.h>
using namespace std;

int sum(int a){
    int s=0;
    if (a==0)
    {
        return s;
    }
    else{
        s+=a%10 + sum(a/10);
        return s;
    }
    
}
int main (){
    cout<<sum(456);
}