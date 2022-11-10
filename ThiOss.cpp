
#include <iostream>
using namespace std;
//Ham tinh dien tich tam giac khi biet 3 canh
float dienTichTamGiac(float a, float b, float c) {
	if (a <= 0 || b <= 0 || c <= 0)
	{
		cout << "Canh tam giac phai lon hon 0";
		return 0;
	}
	float p = (a + b + c) / 2;

	return sqrt(p*(p-a)*(p-b)*(p-c));
}
int main()
{
	/*
	De thi:
	1/ Ham dienTichTamGiac tren co loi khong?
	Neu co thi hay tao ra 1 ban sao cua nhanh ban dang lam co ten la m??_moi de fix loi
	2/ Neu ham dienTichTamGiac tren co loi thi hay tao ra nhanh moi co ten la m??_moi de xay dung them chuc nang tinh chu vi tam giac
	3/ Tron nhanh m??_moi vao nhanh m??
	*/
	system("pause");
	return 0;
}
