
#include <iostream>
using namespace std;
//Ham tinh dien tich hinh tron
float dienTichHinhTron(float banKinh) {
	if (banKinh <= 0)
	{
		cout << "Ban kinh hinh tron phai lon hon 0";
		return 0;
	}
	return  3.14*banKinh*banKinh;
}
float chuViHinhTron(float banKinh) {
	if (banKinh <= 0)
	{
		cout << "Ban kinh phai lon hon 0";
		return 0;
	}
	return  3.14*2*banKinh;
}
int main()
{
	/*
	De thi:
	1/ Ham dienTichHinhTron tren co loi khong?
	Neu co thi hay tao ra 1 ban sao cua nhanh ban dang lam co ten la m??_moi de fix loi
	2/ Neu ham dienTichHinhTron khong co loi thi hay tao ra nhanh moi co ten la m??_moi de xay dung them chuc nang tinh chu vi hinh tron
	3/ Viet ham main de goi ham tren
	4/ Tron nhanh m??_moi vao nhanh m??
	*/
	float banKinh;
	cout << "Nhap ban kinh hinh tron: ";
	cin >> banKinh;
	cout<< "Dien tich hinh tron: " << dienTichHinhTron(banKinh);
	cout << "Chu vi hinh tron: " << chuViHinhTron(banKinh);

	system("pause");
	return 0;
}
