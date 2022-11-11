
#include <iostream>
using namespace std;
//Ham tinh dien tich  hinh vuong
float dienTichHinhVuong(float canh) {
	if (canh < 0)
	{
		cout << "Canh hinh vuong phai lon hon 0";
		return 0;
	}
	return canh * canh;
}
float chuViHinhVuong(float canh) {
	if (canh < 0)
	{
		cout << "Canh hinh vuong phai lon hon 0";
		return 0;
	}
	return canh * 4 ;
}
int main()
{
	/*
	De thi:
	1/ Ham dienTichHinhVuong tren co loi khong?
	Neu co thi hay tao ra 1 ban sao cua nhanh ban dang lam co ten la m??_moi de fix loi
	2/ Neu ham dienTichHinhVuong tren co loi thi hay tao ra nhanh moi co ten la m??_moi de xay dung them chuc nang tinh chu vi hinh vuong
	3/ Viet ham main de goi ham tren
	4/ Tron nhanh m??_moi vao nhanh m??
	*/
	int n;
	cout<<"Canh hinh vuong: ";
	cin>>n;
	dienTichHinhVuong(n);
	chuViHinhVuong(n);
	system("pause");
	return 0;
}
