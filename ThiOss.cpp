
#include <iostream>
using namespace std;
//Ham tinh chu vi tam giac khi biet 3 canh
float chuViTamGiac(float a, float b, float c) {
	if (a <= 0 || b <= 0 || c <= 0)
	{
		cout << "Canh tam giac phai lon hon 0";
		return 0;
	}
	return a + b + c;
}

float dienTichTamGiac(float a, float b, float c, float h) {
	if (a <= 0 || b <= 0 || c <= 0 || h <= 0)
	{
		cout << "Canh tam giac và duong cao phai lon hon 0";
		return 0;
	}
	return (c * h)/2;
}

int main()
{
	/*
	De thi:
	1/ Ham chuViTamGiac tren co loi khong?
	->  Hàm tính chu vi vi tam giác trên là đúng và tất nhiên không có lỗi.
	Neu co thi hay tao ra 1 ban sao cua nhanh ban dang lam co ten la m??_moi de fix loi
	2/ Neu ham chuViTamGiac tren co loi thi hay tao ra nhanh moi co ten la m??_moi de xay dung them chuc nang tinh dien tich tam giac
	
	3/ Tron nhanh m??_moi vao nhanh m??
	*/
	
	
	system("pause");
	return 0;
}
