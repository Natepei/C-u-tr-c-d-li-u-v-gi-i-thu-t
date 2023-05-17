#include <iostream>
#define MAX 100
using namespace std;
void nhap(int a[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        std::cout << "Nhap phan tu a["<<(i+1)<<"] = ";
        std::cin >> a[i];
    }
}

void xuat(int a[], int n) 
{
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }
}
int tinhtong(int a[], int n)
{
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            tong += a[i];
        }
    }
    return tong;
}
int main()
{
    int a[MAX];
    int n;
    std::cout << "Nhap n = " << std::endl;
    std::cin >> n;
    nhap(a, n);
    std::cout << "Mang da nhap = ";
    xuat(a, n);
    std::cout << "\n";
    std::cout << "Tong so chan = " << tinhtong(a, n);
}

