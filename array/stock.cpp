#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> prices ={7,1,5,3,6,4};
    int max=0,d=0,c=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            if((c>=prices[i]))
                c=prices[i];
            d=prices[i]-c;
            cout<<d<<" ";
            if(max<d)
            max=d;
                
        
        }
        cout<<endl<<max;
return 0;
}