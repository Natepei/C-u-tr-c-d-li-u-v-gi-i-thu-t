#include <iostream>
using namespace std;
void doichotructiep(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				int tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
		}
	}
}
int main()
{
	int a[6] = { 41, 23, 4, 14, 56, 1 };
	doichotructiep(a, 6);
	cout << "Mang sau khi sap xep:" << endl;
	for (int i = 0; i < 6; i++) {
		cout << a[i] << " ";
	}
	return 0;
}