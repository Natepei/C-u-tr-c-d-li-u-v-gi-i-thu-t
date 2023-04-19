#include <iostream>  
#define MAX 100
using namespace std;
int timkiemnhiphan(int a[], int n) {
    int left, right, mid, x;
    left = 0;
    right = n - 1;
    cout << " Nhap gia tri 10 can tim " << endl;
    cin >> x;
    while (left <= right) {
        mid = (left + right) / 2;
        if (a[mid] == x) {
            return 0;
        }
        else if (x > a[mid]) {
            left = mid + 1;
        }
        else if (x < a[mid]) {
            right = mid - 1;
        }
    }
    cout << " Khong tim thay " << endl;
    return 0;
}
void nhapmang(int a[], int n) {
    cout << " Nhap gia tri phan tu { 2, 3, 4, 10, 40} " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << " a [" << i << "] = ";
        cin >> a[i];
    }
}
void xuatmang(int a[], int n) {
    int x, mid;
    cout << x << " duoc tim thay o vi tri so " << (mid + 1);
    for (int i = 0; i < n; ++i)
        cout << a[i];
}
int main() {
    int a[MAX], n;
    cout << " Nhap 5 phan tu: " << endl;
    cin >> n;
    nhapmang(a, n);
    timkiemnhiphan(a, n);
    xuatmang(a, n);
}