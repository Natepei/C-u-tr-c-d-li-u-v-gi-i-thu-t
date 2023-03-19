#include<iostream>
#define MAX 100
using namespace std;
void heapify(int a[], int n, int i) {
    int max = i;
    int l = i * 2 + 1;
    int r = l + 1;
    if (l<n && a[l] > a[max]) {
        max = l;
    }
    if (r<n && a[r] > a[max]) {
        max = r;
    }
    if (max != i) {
        int tam = a[i];
        a[i] = a[max];
        a[max] = tam;
        heapify(a, n, max);
    }
}
void heapSort(int a[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);
    for (int j = n - 1; j > 0; j--) {
        int temp = a[0];
        a[0] = a[j];
        a[j] = temp;
        heapify(a, j, 0);
    }
}
void nhapmang(int a[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap phan tu thu " << i << ": ";
        cin >> a[i];
    }
}
void printArray(int a[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";
    cout << "\n";
}
int main()
{
    int a[MAX], n;
    cout << "Nhap so phan tu n: ";
    cin >> n;
    nhapmang(a, n);
    cout << "Mang luc dau co dang: ";
    printArray(a, n);
    cout << "Mang sau khi sap xep: ";
    heapSort(a, n);
    printArray(a, n);
}