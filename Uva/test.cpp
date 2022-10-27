#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

pair<int, int> p[100];
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    // If left child is larger than root
    if (l < n && p[arr[l]].first > arr[largest])
        largest = l;

    // If right child largest
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If root is nor largest
    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        // Recursively heapifying the sub-tree
        heapify(arr, n, largest);
    }
}
void heapSort(int arr[], int n)
{

    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract an element from heap
    for (int i = n - 1; i >= 0; i--)
    {
        // Moving current root to end
        swap(arr[0], arr[i]);

        // Calling max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\n";
}
int main()
{

    // int arr[] = {0, 1, 14, 3, 7, 0};
    // for (int i = 1; i <= 5; i++)
    // {
    //     if (2 * i + 1 <= 5)
    //     {
    //         p[arr[i]].first = arr[2 * i];
    //         p[arr[i]].second = arr[2 * i + 1];
    //     }
    // }
    // for (int i = 1; i <= 5; i++)
    // {
    //     cout << " " << p[arr[i]].first << " " << p[arr[i]].second << endl;
    // }
    int arr[] = {10, 20, 30, 40, 50};

    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n / 2 + 1; i++)
    {
        p[arr[i]].first = arr[2 * i];
        p[arr[i]].second = arr[2 * i + 1];
    }
    for (int i = 0; i < n / 2 + 1; i++)
    {
        cout << p[arr[i]].first << " " << p[arr[i]].second << endl;
    }
    // cout << "Unsorted array  \n";
    // display(arr, n);

    // heapSort(arr, n);

    // cout << "Sorted array  \n";
    // display(arr, n);
}