#include<bits/stdc++.h>
using namespace std;

int sum( int * ptr, int n, int c){
    int sum=0;
    for(int i=0 ; i<n ; i++){
        for(int j=0; j<c; j++){
            sum+=*((ptr + i) + j);
        }
        ptr+=c-1;
    }
    return sum;
}

int main(){
    // int a=20;
    // int arr[2][2] = {{0,10},{20,30}};
    // int sum=0;
    // int *p = arr[0];
    // // cout<<*(p+1)<<endl;
    // for(int i=0 ; i<4 ; i++){
    //     sum += *(p)+i;
    //     cout<<*p<<endl;
    //     cout<<sum;
    //     // p +=i;
    // }

    int arr[][2] = {{05,12},{24,37}};
    cout<<sum( &arr[0][0], 2,2);
    return 0;
}