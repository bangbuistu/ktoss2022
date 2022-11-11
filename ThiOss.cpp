
#include <iostream>
using namespace std;
//Nguyen Quoc Huy 72
//Ham tinh dien tich hinh tron
float dienTichHinhTron(float banKinh) {
	if (banKinh <= 0)
	{
		cout << "Duong kinh hinh tron phai lon hon 0";
		return 0;
	}
	return  3.14*banKinh*banKinh;
}
float chuViHinhTron(float banKinh) {
	if (banKinh <= 0)
	{
		cout << "Duong kinh hinh tron phai lon hon 0";
		return 0;
	}
	return  2 * 3.14 *banKinh;
}
int main()
{
	/*
	De thi:
	1/ Ham dienTichHinhTron tren co loi khong?
	tra loi: co loi o dong "cout << "Canh hinh chu nhat phai lon hon 0";" phai sua thanh => "cout << "Duong kinh hinh tron phai lon hon 0";
	2/ Neu ham dienTichHinhTron tren co loi thi hay tao ra nhanh moi co ten la m??_moi de xay dung them chuc nang tinh chu vi hinh tron
	3/ Viet ham main de goi ham tren
	4/ Tron nhanh m??_moi vao nhanh m??
	*/
	float n;
	cout << "nhap n: ";
	cin >> n;
	float chuVi = chuViHinhTron(n);
	cout << chuVi;
	cout<<dienTichHinhTron(2) <<endl;
	system("pause");
	return 0;
}
