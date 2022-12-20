#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[],int n){
    int temp=arr[n-1];
    for (int i = n-1; i >0; i--)
    {
        arr[i]=arr[i-1];

    }
    arr[0]=temp;
    
}
int main(){
    int a[]={5,2,10,6,8,4,3};
    int n=sizeof(a)/sizeof(a[0]);
    rotate(a,n);
    for (int i = 0; i < n; i++)
   {
      cout<<a[i]<<" ";
   }
    return 0;
}