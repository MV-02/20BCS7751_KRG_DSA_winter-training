#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={-41,4,-5,-9,-7,5,6,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,j,temp=0;
    i=0;j=n;

   for (j = 0; j < n; j++)
   {
        if (arr[j]<0)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
        }
        
   }
   for ( i = 0; i < n; i++)
   {
      cout<<arr[i];
   }
   
   
    
}