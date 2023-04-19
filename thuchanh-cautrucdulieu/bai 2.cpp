#include<iostream>
#define MAX 100
using namespace std;

int timkiemtuyentinh(int a[], int n, int x) {
	for (int i = 0; i < n; i++) {
		if (a[i] == x) {
			return i;
		}
	}
	return -1;
}
void nhapmang(int a[], int n) {
	cout << " Nhap gia tri phan tu { 2, 3, 4, 10, 40} " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << " a [" << i << "] = ";
		cin >> a[i];
	}
}
int main() {
	int a[MAX], n, x;
	cout << "Nhap 5 phan tu: ";
	cin >> n;
	nhapmang(a, n);
	cout << " Nhap gia tri 10 can tim " << endl;
	cin >> x;
	cout << x << " duoc tim thay o vi tri so " << timkiemtuyentinh(a, n, x);
}