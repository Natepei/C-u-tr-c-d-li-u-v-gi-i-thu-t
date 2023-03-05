#include <iostream>
using namespace std;
int T(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return n * T(n - 1);
	}
}
int main() {
	cout << "10! = " << T(10) << endl;
}