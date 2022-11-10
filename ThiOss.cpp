
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
int main()
{
	/*
	De thi:
	1/ Ham chuViTamGiac tren co loi khong?
	Neu co thi hay tao ra 1 ban sao cua nhanh ban dang lam co ten la m??_moi de fix loi
	2/ Neu ham chuViTamGiac tren co loi thi hay tao ra nhanh moi co ten la m??_moi de xay dung them chuc nang tinh dien tich tam giac
	3/ Tron nhanh m??_moi vao nhanh m??
	*/
	cout << chuViTamGiac(1, 2, 3);
	system("pause");
	return 0;
}
