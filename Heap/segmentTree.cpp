#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> &arr)
{
    int size = arr.size();
    for (int i = 0; i < size + size - 1; i=i+2)
    {
        
    }
}

void printArray(vector<int> &hT)
{
    for (int i = 0; i < hT.size(); ++i)
        cout << hT[i] << " ";
    cout << "\n";
}

int main()
{
    vector<int> arr = {1, 3, 4, 7};

    printArray(arr);

    return 0;
}