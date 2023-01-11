#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void max_heapify(vector<int> &arr, int i, int size_)
{
    int largest, l = (2 * i) + 1, r = l + 1;

    if (l < size_ && arr[l] > arr[i])
        largest = l;
    else
        largest = i;

    if (r < size_ && arr[r] > arr[largest])
        largest = r;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        max_heapify(arr, largest, size_);
    }
}

void build_max_heap(vector<int> &arr)
{
    for (int i = (arr.size() / 2); i >= 0; i--)
        max_heapify(arr, i, arr.size());
}

void heap_sort(vector<int> &arr)
{
    int sz = arr.size();
    for (int i = arr.size() - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        sz--;
        max_heapify(arr, 0, sz);
    }
}
void printArray(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
int main()
{
    vector<int> arr = {1,2,3,4,5,6};
    build_max_heap(arr);
    printArray(arr);
    heap_sort(arr);
    cout<<"Heap sort implemented "<<endl;
    printArray(arr);

    return 0;
}