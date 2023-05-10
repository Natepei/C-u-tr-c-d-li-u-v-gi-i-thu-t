#include <iostream>
void chentructiep(int a[], int n) {
	for (int i = 1; i < n; i++) {
		int x = a[i]; int pos = i - 1;
		while ((pos >= 0) && (a[pos] > x)) { 
			a[pos + 1] = a[pos];
			pos--;
		}
		a[pos + 1] = x;
	}
}
int main()
{
	int a[6] = { 41, 23, 4, 14, 56, 1 };
	chentructiep(a, 6);
	std::cout << "Mang sau khi sap xep: " << std::endl;
	for (int i = 0; i < 6; i++) {
		std::cout << a[i] << " ";
	}
	return 0;
}