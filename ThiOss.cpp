
#include <iostream>
using namespace std;

bool kiemTra(int a, int b, int c){
    if((a+b > c) &&  (a + c > b) && (c + b > a)){
        return true;
    }
    return false;
}

//Hàm tính chu vi
int tinhChuVi(int a, int b, int c)
{
  return a+b+c;
}

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
	- Ham dienTichTamGiac tren khong co loi
	Neu co thi hay tao ra 1 ban sao cua nhanh ban dang lam co ten la m??_moi de fix loi
	2/ Neu ham dienTichTamGiac tren co loi thi hay tao ra nhanh moi co ten la m??_moi de xay dung them chuc nang tinh chu vi tam giac
	3/ Tron nhanh m??_moi vao nhanh m??
	*/
	float a, b, c;
    cout << "Nhap canh a: ";
    cin >> a;
    cout << "Nhap canh b: ";
    cin >> b;
    cout << "Nhap canh c: ";
    cin >> c;
	cout<< "Chu vi cua tam giac la: " << tinhChuVi(a,b,c)<<endl;
    cout << "Dien tich cua tam giac la: " << dienTichTamGiac(a, b, c)<<endl;
	system("pause");
	return 0;
}
