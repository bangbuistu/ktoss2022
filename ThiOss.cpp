
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
//Cau 2 :
float dienTichHinhChuNhat(float dai, float rong) {
	if (dai <= 0 || rong <= 0)
	{
		cout << "Canh hinh chu nhat phai lon hon 0";
		return 0;
	}
	return dai * rong;
}
int main()
{
	/*
	De thi:
	1/ Ham chuViHinhChuNhat tren co loi khong?
	Neu co thi hay tao ra 1 ban sao cua nhanh ban dang lam co ten la m??_moi de fix loi
	
	//Trả Lời : Ham chuViHinhChuNhat tren khong co loi 
	
	
	
	2/ Neu ham chuViHinhChuNhat  tren  co loi thi hay tao ra nhanh moi co ten la m??_moi de xay dung them chuc nang tinh dien tich hinh chu nhat
	
	
	3/ Viet ham main de goi ham tren																																																																																																																																																																																								
	4/ Tron nhanh m??_moi vao nhanh m?? 
	*/
	int dai,rong;
	cout << "Nhap chieu dai:";
	cin >> dai;
	cout << "Nhap chieu rong:";
	cin >> rong;
	
	cout<< "Chu Vi HCN la :" <<chuViHinhChuNhat(dai,rong);
	cout<< "Dien Tich HCN la :" <<dienTichHinhChuNhat(dai,rong);

	system("pause");
	return 0;
}
