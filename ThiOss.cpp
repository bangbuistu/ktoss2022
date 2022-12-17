
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
float dienTichHinhVuong(float canh){
	if (canh <=0 )
	{
		cout<<"Canh hinh vuong phai lon hon 0";
		return 0;
	}
	return canh*canh;
}
int main()
{
	/*
	De thi:
	1/ Ham chuViHinhVuong tren co loi khong?
	TL: Ham chu vi hinh vuong khong co loi
	Neu co thi hay tao ra 1 ban sao cua nhanh ban dang lam co ten la m??_moi de fix loi
	2/ Neu ham chuViHinhVuong tren co loi thi hay tao ra nhanh moi co ten la m??_moi de xay dung them chuc nang tinh dien tich hinh vuong
	TL: Ham khong co loi
		Bonus luon ham tinh dien tich =]]
	3/ Viet ham main de goi ham tren
	4/ Tron nhanh m??_moi vao nhanh m??
	*/
	float a;
	cout<<"Nhap canh hinh vuong:"<<endl;
	cin>> a;
	cout<<"Chu vi hinh vuonng :"<<chuViHinhVuong(a)<<endl;
	cout<<"Dien tich hinh vuonng :"<<dienTichHinhVuong(a)<<endl;
	system("pause");
	return 0;
}
