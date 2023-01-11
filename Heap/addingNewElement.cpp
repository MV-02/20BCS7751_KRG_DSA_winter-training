#include <bits/stdc++.h>

using namespace std;


void heapify(vector<int>& arr, int N, int i)
{
	int largest = i;
	int l = 2 * i + 1; // left = 2*i + 1
	int r = 2 * i + 2; // right = 2*i + 2

	if (l < N && arr[l] > arr[largest])
		largest = l;

	if (r < N && arr[r] > arr[largest])
		largest = r;

	if (largest != i) {
		swap(arr[i], arr[largest]);

		heapify(arr, N, largest);
	}
}

void buildHeap(vector<int>& arr, int N)
{
	int startIdx = (N / 2) - 1;

	for (int i = startIdx; i >= 0; i--) {
		heapify(arr, N, i);
	}
}

void printHeap(vector<int>& arr, int N)
{
	cout << "Array representation of Heap is:\n";

	for (int i = 0; i < N; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}

void insert(vector<int> & arr, int val){
    arr.push_back(val);
    int N = arr.size();
    int j=N-1;
    int i = (N-1)/2;
    while (arr[j]>arr[i])
    {
        swap(arr[j],arr[i]);
        j=i;
        i=i/2;
    }
    

}

int main()
{
	vector<int> arr = {};
	// int N = arr.size();

	// buildHeap(arr, N);
	// printHeap(arr, N);
    // cout<<endl;
    

    insert(arr,1);
    insert(arr,2);
    insert(arr,3);
    // insert(arr,4);
	printHeap(arr, arr.size());
	


	return 0;
}
