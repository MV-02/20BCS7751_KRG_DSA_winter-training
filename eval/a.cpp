#include <bits/stdc++.h>
using namespace std;

int sortArr(int arr[], int n, int min, int max)
{
	// Count of elements in given range
	int m = max - min + 1;
	
	// Count frequencies of all elements
	vector<int> c(m, 0);
	for (int i=0; i<n; i++)
	c[arr[i] - min]++;

	// Traverse through range. For every
	// element, print it its count times.
	for (int i=0; i<m; i++)
		for (int j=0; j < c[i]; j++)
		cout << (i + min) << " ";
}

// Driver Code
int main()
{
	int arr[] = {10, 10, 1, 4, 4, 100, 0};
	int min = 0, max = 100;
	int n = sizeof(arr)/sizeof(arr[0]);
	sortArr(arr, n, min, max);
	return 0;
}
