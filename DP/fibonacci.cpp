#include<iostream>
using namespace std;
void genFibonacci(double long fibo[],int n) {
   fibo[0] = 0;
   fibo[1] = 1;
   for (int i = 2; i <= n; i++) {
      fibo[i] = fibo[i-1] + fibo[i-2];
   }
}
int main () {
   int n;
   cout << "Enter number of terms: "; 
   cin >>n;   
   double long fibo[n+2]; 
   genFibonacci(fibo,n);
   for (int i = 0; i < n; i++)
   {
    cout<<fibo[i]<<endl;
   }
   
}