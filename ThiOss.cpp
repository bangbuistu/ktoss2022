
#include <iostream>
using namespace std;
//Tung Em lam lai
//Ham tinh chu vi hinh chu nhat
float chuViHinhChuNhat(float dai, float rong) {
	if (dai <= 0 || rong <= 0)
	{
		cout << "Canh hinh chu nhat phai lon hon 0";
		return 0;
	}else if(dai == rong){
		cout << "Day la hinh vuong";
	}
	return (dai+rong)*2;
}

//Ham tinh dien tich hinh chu nhat
float dienTichHinhChuNhat(float dai, float rong) {
	if (dai <= 0 || rong <= 0)
	{
		cout << "Canh hinh chu nhat phai lon hon 0";
		return 0;
	}else if(dai == rong){
		cout << "Day la hinh vuong";
	}
	return (dai*rong);
}
int main()
{
	int dai = 10;
	int rong = 20;
	cout << "Chu vi hinh chu nhat la: " + chuViHinhChuNhat(dai, rong);
	cout << "Dien tich hinh chu nhat la: " + dienTichHinhChuNhat(dai, rong);

	/*
	De thi:
	1/ Ham chuViHinhChuNhat tren co loi khong?
	--Hàm chuViHinhChuNhat trên có lỗi.
	Neu co thi hay tao ra 1 ban sao cua nhanh ban dang lam co ten la m??_moi de fix loi
	2/ Neu ham chuViHinhChuNhat tren co loi thi hay tao ra nhanh moi co ten la m??_moi de xay dung them chuc nang tinh dien tich hinh chu nhat
	3/ Viet ham main de goi ham tren																																																																																																																																																																																								
	4/ Tron nhanh m??_moi vao nhanh m??
	*/
	
	system("pause");
	return 0;
}
