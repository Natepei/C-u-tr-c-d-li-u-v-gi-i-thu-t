#include <iostream>
#include <string>
using namespace std;
struct Ngay
{
	std::string ngay;
	std::string thang;
	std::string nam;
};
typedef Ngay NGAY;
void Nhap_Ngay(NGAY &ng) {
	std::cout << "Nhap ngay: ";
	std::cin >> ng.ngay;
	std::cout << "Nhap thang: ";
	std::cin >> ng.thang;
	std::cout << "Nhap nam: ";
	std::cin >> ng.nam;
}
void Xuat_Ngay(NGAY ng) {
	std::cout << "Ngay" << " " << ng.ngay << " " << "Thang" << " " << ng.thang << " " << "Nam" << " " << ng.nam << std::endl;
}
int main() {
	NGAY ng;
	Nhap_Ngay(ng);
	Xuat_Ngay(ng);
	system("pause");
	return 0;
}
