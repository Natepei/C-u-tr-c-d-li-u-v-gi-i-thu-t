#include <iostream>
using namespace std;
int main() {
	int i, n;
	long S;
	S = 0;
	i = 1;
	std::cout << "\nNhap n: ";
	std::cin >> n;
	while (i <= n)
	{
		S = S + i * i;
		i++;
	}
	std::cout << "i = " << i;
	std::cout << "\nTong 1^2 + 2^2 + ... +" << n << " la: " << S;
	return 0;
}