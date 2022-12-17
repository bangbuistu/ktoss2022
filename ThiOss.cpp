
#include <iostream>
using namespace std;
//Ham tinh chu vi hinh vuong
float chuViHinhVuong(float canh) {
	if (canh <= 0)
	{
		cout << "Canh hinh vuong phai lon hon 0";
		return 0;
	}
	return canh * 4;
}
float dienTichHinhVuong(float canh) {
	if (canh <= 0)
	{
		cout << "Canh hinh vuong phai lon hon 0";
		return 0;
	}
	return canh * canh;
}
int main()
{
	/*
	De thi:
	1/ Ham chuViHinhVuong tren co loi khong?
	Tra loi: Khong co loi
	Neu co thi hay tao ra 1 ban sao cua nhanh ban dang lam co ten la m??_moi de fix loi
	2/ Neu ham chuViHinhVuong tren khong co loi thi hay tao ra nhanh moi co ten la m??_moi de xay dung them chuc nang tinh dien tich hinh vuong


	3/ Viet ham main de goi ham tren


	4/ Tron nhanh m??_moi vao nhanh m??
	*/
	float canh;
	cout << "Nhap canh: ";
	cin >> canh;
	cout << "\nChu ci: " << chuViHinhVuong(canh) << " \nDien tich: " << dienTichHinhVuong(canh);
	system("pause");
	return 0;
}
