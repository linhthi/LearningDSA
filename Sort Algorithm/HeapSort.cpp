/**
 * Algorithmn Quick Sort
 */
 #include <iostream>
 #include <cmath>
 using namespace std;
 /*
    This function takes last element as pivot,
    the pivot element at its correct posittion
    in sorted array, and places all small (smaller than pivot)
    to left of pivot and all greater to right of pivote
 */
 int partition(int a[], int low, int high) {
    int pivot = a[high];
    int i = low -1;
    for (int j = low; j<=high-1; j++) {
        if (a[j] <= pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[high]);
    return i+1;
}
/* low -->Starting index, high --> Ending index */
 void quickSort(int a[], int low, int high) {
     if (low < high)
     {
        int pi = partition(a, low, high);

        quickSort(a, low, pi-1);
        quickSort(a, pi + 1, high);
     }
}

int main() {
    int a[] = {1, 2, 8, 9, 5, 3, 10, 4};
    quickSort(a,0,7);
    for (int i=0; i<8; i++) {
        cout << a[i] << " ";
    }
    return 0;
}

