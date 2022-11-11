
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
	 có lỗi
	Neu co thi hay tao ra 1 ban sao cua nhanh ban dang lam co ten la m??_moi de fix loi
	
	float chuViTamGiac(float a, float b, float c) {
	if (a >= 0 || b >= 0 || c >= 0)
	{
		cout << "Canh tam giac phai lon hon 0";
		return 0;
	}
	return a + b + c;
}
	2/ Neu ham chuViTamGiac tren co loi thi hay tao ra nhanh moi co ten la m??_moi de xay dung them chuc nang tinh dien tich tam giac
	float dientich(int a, int b, int c) {
    float p = chuvi(a, b, c) / 2.0;
    return sqrt(p*(p - a)*(p - b)*(p - c));
}
int main(){
    float a, b, c;
    cout << "Nhap canh a: ";
    cin >> a;
    cout << "Nhap canh b: ";
    cin >> b;
    cout << "Nhap canh c: ";
    cin >> c;
    if (a >= b + c || b >= a + c || c >= a + b)
        cout << "Ba canh vua nhap khong phai la canh cua tam giac";
    else {
        cout << "Chu vi cua tam giac la: "<<chuvi(a,b,c)<<endl;
        cout << "Dien tich cua tam giac la: " << dientich(a, b, c)<<endl;
    }
    system("pause");
    return 0;
	
}
	
	3/ Tron nhanh m??_moi vao nhanh m??
	
	*/
	cout << chuViTamGiac(1, 2, 3);
	system("pause");
	return 0;
}
