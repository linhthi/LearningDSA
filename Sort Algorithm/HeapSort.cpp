/**
    Heap Sort Algoritm
*/
#include <iostream>
#include <cmath>
using namespace std;
/*
To heapify a substree rooted with node i which is
an index in a[]. n is size of heap
*/
void heapify(int a[], int n, int i)
{
    int largest = i; //Initialize largest as root
    int l = 2*i;
    int r = 2*i + 1;

    // If left child is larger than root
    if (l < n && a[l] > a[largest])
        largest = l;
    //If right child is larger than largest so far
    if (r < n&& a[r] > a[largest])
        largest = r;
    //If largest is not root
    if (largest != i)
    {
        swap(a[i], a[largest]);

        //Recursively heapify the affected sub=stree
        heapify(a, n, largest);
    }
}
void heapSort(int a[], int n)
{
    //Build heap (rearrange array)
    for (int i=n/2; i>=0; i--)
        heapify(a, n, i);

    //One by one extract an element from heap
    for (int i=n-1; i>=0; i--)
    {
        // Move current root to end
        swap(a[0], a[i]);

        //Call max heapify on the reduced heap
        heapify(a, i, 0);
    }
}
void printArray(int a[], int n) {
    for (int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
}
int main() {
    int a[] = {3, 11, 9, 15, 4, 10};
    int n = sizeof(a)/sizeof(a[0]);
    heapSort(a, n);
    printArray(a,n);
    return 0;
}

