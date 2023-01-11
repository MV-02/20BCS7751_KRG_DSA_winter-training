#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> &hT, int newNum)
{
  int size = hT.size();
  int c = size - 1, p = c / 2, tmp;
  if (size == 0)
  {
    hT.push_back(newNum);
  }
  else
  {
    hT.push_back(newNum);
    c = hT.size() - 1, p = c / 2;
    while (hT[c] > hT[p] && c > 0)
    {
      tmp = hT[c];
      hT[c] = hT[p];
      hT[p] = tmp;
      c = p;
      p = c / 2;
    }
  }
}

int delet(vector<int> &hT)
{
  int n = hT.size() - 1;
  int res = hT[0];
  hT[0] = hT[n];
  hT.pop_back();
  n = hT.size() - 1;
  int p = 1;
  int l = p * 2 - 1;
  int r = p * 2;
  p = 0;
  while ((hT[p] < hT[l] || hT[p] < hT[r]) && p < (n) / 2)
  {

    if (hT[p] < hT[l])
    {
      swap(hT[p], hT[l]);
    }
    if (hT[p] < hT[r])
    {
      swap(hT[p], hT[r]);
    }
    p = p + 1;
    l = p * 2;
    r = p * 2 + 1;
  }

  return res;
}

void printArray(vector<int> &hT)
{
  for (int i = 0; i < hT.size(); ++i)
    cout << hT[i] << " ";
  cout << "\n";
}

int main()
{
  vector<int> arr;
  insert(arr, 10);
  insert(arr, 20);
  insert(arr, 31);
  insert(arr, 14);
  insert(arr, 58);
  insert(arr, 63);
  insert(arr, 86);
  insert(arr, 96);
  insert(arr, 65);

  printArray(arr);
  cout << delet(arr) << endl;
  // printArray(arr);

  cout << delet(arr) << endl;
  // printArray(arr);
  cout << delet(arr) << endl;
  // printArray(arr);
  cout << delet(arr) << endl;
  // printArray(arr);
  cout << delet(arr) << endl;
  // printArray(arr);
  cout << delet(arr) << endl;
  // printArray(arr);
  cout << delet(arr) << endl;
  // printArray(arr);
  cout << delet(arr) << endl;
  // printArray(arr);
  cout << delet(arr) << endl;
  // printArray(arr);

  return 0;
}