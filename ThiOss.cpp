
#include <iostream>
using namespace std;
//Ham tinh chu vi hinh tron
float chuViHinhTron(float banKinh) {
	if (banKinh <= 0)
	{
		cout << "Canh hinh chu nhat phai lon hon 0";
		return 0;
	}
	return 2 * 3.14*banKinh;
}
float dienTichHinhTron(float bankinh) {
	if (banKinh <= 0)
	{
		cout << "Canh hinh chu nhat phai lon hon 0";
		return 0;
	}
	return 3.14*banKinh*banKinh;
}
int main()
{
	float banKinh;
	cout << "nhap ban kinh hinh tron";
	cin >> banKinh;
	cout << "chu vi hinh tron la:" << chuViHinhTron(banKinh);
	cout << "dien tich hinh tron la:" << dienTichHinhTron(banKinh);
	/*
	De thi:
	1/ Ham chuViHinhTron tren co loi khong? ham chuViHinhTron khong co loi
	Neu co thi hay tao ra 1 ban sao cua nhanh ban dang lam co ten la m??_moi de fix loi
	2/ Neu ham chuViHinhTron khong co loi thi hay tao ra nhanh moi co ten la m??_moi de xay dung them chuc nang tinh dien tich hinh tron
	3/ Viet ham main de goi ham tren
	4/ Tron nhanh m??_moi vao nhanh m??
	*/

	system("pause");
	return 0;
}
