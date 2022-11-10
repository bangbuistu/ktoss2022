
#include <iostream>
using namespace std;
//Ham tinh dien tich hinh chu nhat
float dienTichHinhChuNhat(float dai, float rong) {
	if (dai <= 0 || rong <= 0)
	{
		cout << "Canh hinh chu nhat phai lon hon 0";
		return 0;
	}
	return (dai * rong) ;
}
int main()
{
	/*
	De thi:
	1/ Ham dienTichHinhChuNhat tren co loi khong?
	Neu co thi hay tao ra 1 ban sao cua nhanh ban dang lam co ten la m??_moi de fix loi
	2/ Neu ham dienTichHinhChuNhat khong co loi thi hay tao ra nhanh moi co ten la m??_moi de xay dung them chuc nang tinh chu vi hinh chu nhat
	3/ Viet ham main de goi ham tren
	4/ Tron nhanh m??_moi vao nhanh m??
	*/

	system("pause");
	return 0;
}
