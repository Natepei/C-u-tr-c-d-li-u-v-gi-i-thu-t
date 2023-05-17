#include<stdio.h>
#include <iostream>
using namespace std;

void sapxepnhanh(int a[], int l, int r) {
	int p = a[(l + r) / 2];
	int i = l, j = r;
	while (i < j) {
		while (a[i] < p) {
			i++;
		}
		while (a[j] > p) {
			j--;
		}
		if (i <= j) {
			int tam = a[i];
			a[i] = a[j];
			a[j] = tam;
			i++;
			j--;
		}
	}
	if (i < r) {
		sapxepnhanh(a, i, r);
	}
	if (l < j) {
		sapxepnhanh(a, l, j);
	}
}

void xuatmang(int a[], int n)
{
    int i;
	for (i = 0; i < n; i++)
		std::cout << a[i] << " ";
	    std::cout << std::endl;
}

int main()
{
    int a[] = { 41, 23, 4, 14, 56, 1 };
	int n = 6;
	std::cout << "Mang truoc khi sap xep: " << std::endl;
    xuatmang(a, n);
    sapxepnhanh(a, 0, n - 1);
	std::cout << "Mang sau khi sap xep: " << std::endl;
    xuatmang(a, n);
    return 0;
}