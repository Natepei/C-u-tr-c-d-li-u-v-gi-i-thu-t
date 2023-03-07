#include<iostream>
using namespace std;
void nhapmang(int a[], int n) {
		for (int i = 0; i < n; i++) {
			std::cout << "a[" << i << "] = ";
			std::cin >> a[i];
		}
	
}
void xuatmang(int a[], int n) {
	for(int i = 0; i < n; i++)
		std::cout << " " << a[i];
}
void xepgiam(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] < a[j]) {
				int tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
		}
	}
}
int main() {
	int a[100], n;
	do {
		std::cout << "Nhap so luong phan tu mang = ";
		std::cin >> n;
		if (n == 0) {
			std::cout << "Ket thuc";
			break;
		}
	} while (n == 0);
	nhapmang(a, n);
	xepgiam(a, n);
	std::cout << "\nMang sau khi sap xep giam dan= ";
	xuatmang(a, n);
	return 0;
}