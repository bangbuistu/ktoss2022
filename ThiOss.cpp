
#include <iostream>
using namespace std;
//Ham tinh chu vi hinh chu nhat
float chuViHinhChuNhat(float dai, float rong) {
	if (dai <= 0 || rong <= 0)
	{
		cout << "Canh hinh chu nhat phai lon hon 0";
		return 0;
	}
	return (dai+rong)*2;
}
float dienTichHinhChuNhat(float dai, float rong){
	return dai*rong;
}
int main()
{
	/*
	De thi:
	1/ Ham chuViHinhChuNhat tren co loi khong?
	Neu co thi hay tao ra 1 ban sao cua nhanh ban dang lam co ten la m??_moi de fix loi
	2/ Neu ham chuViTamGiac tren co loi thi hay tao ra nhanh moi co ten la m??_moi de xay dung them chuc nang tinh dien tich hinh chu nhat
	3/ Viet ham main de goi ham tren																																																																																																																																																																																								
	4/ Tron nhanh m??_moi vao nhanh m??
	*/

	//goi ham chu vi hinh chu nha
	float dai;
	float rong;
	cout<< "nhap chieu dai= ";
	cout >> dai;
	cout<< "nhap chieu rong= ";
	cout >> rong;
	float dientich = dienTichHinhChuNhat(dai,rong);
	float chuvi = chuViHinhChuNhat(dai,rong);
	cout << "Chu vi hinh chu nhat la: "<<chuvi;
	cout << "Dien tich hinh chu nhat la: "<<dientich;

	
	system("pause");
	return 0;
}
