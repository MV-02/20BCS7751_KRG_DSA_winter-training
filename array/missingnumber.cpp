 #include<bits/stdc++.h>
using namespace std;

bool miss(int arr[],int n){
    for (int i = 0; i <n; i++)
    {
        if((arr[0]+i)!=arr[i])
            return false;

    }
    return true;
    
}
int main(){
    int a[]={11,12,13,14,15};
    int n=sizeof(a)/sizeof(a[0]);
    bool res=miss(a,n);
    cout<<res;
    return 0;
}