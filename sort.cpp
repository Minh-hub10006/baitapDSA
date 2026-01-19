#include <bits/stdc++.h>
using namespace std;
//Hàm in mảng 
void printf(int a[], int n) {
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << "\n";
}

//Sắp xếp nhanh
//Hàm đổi vị trí 2 phần tử
int partition(int a[], int l, int h, int n) {
    int pivot = a[h];     
    int i = l - 1;

    for (int j = l; j < h; j++) {
        if (a[j] < pivot) {  
            i++;
            swap(a[i], a[j]);
        }
    }

    swap(a[i + 1], a[h]); 

    printf(a, n);

    return i + 1;
}

//Hàm quick sort
void quicksort(int a[], int l, int h, int n) {
    if (l < h) {
        int minh = partition(a, l, h, n);

        quicksort(a, l, minh - 1, n);   
        quicksort(a, minh + 1, h, n);  
    }
}

//Xắp sếp trộn
//Hàm hợp nhất
void merge(int a[], int l, int m, int r, int n) {
    int x = m - l + 1;
    int y = r - m;

    int L[x], R[y];

    for (int i = 0; i <x; i++)
        L[i] = a[l + i];

    for (int j = 0; j < y; j++)
        R[j] = a[m + 1 + j];

    int i = 0, j = 0, k = l;

    while (i < x && j <y) {
        if (L[i] <= R[j]) a[k++] = L[i++];
        else a[k++] = R[j++];
    }

    while (i < x) a[k++] = L[i++];
    while (j < y) a[k++] = R[j++];

    printf(a, n);
}

void mergeSort(int a[], int l, int r, int n) {
    if (l < r) {
        int m = (l + r) / 2;

        mergeSort(a, l, m, n);
        mergeSort(a, m + 1, r, n);

        merge(a, l, m, r, n);
    }
}
int main(){
    int a[] = {0,36,3636,363636,3,6};
    int n = 6;
    quicksort(a, 0, n - 1, n);
    cout<<endl;
    mergeSort(a, 0, n - 1, n);
    return 0;
}
