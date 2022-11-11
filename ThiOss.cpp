
#include <iostream>
using namespace std;
//Nguyen Dai Duong
//Ham cho biet la tam giac gi
void tamGiac(float a, float b, float c)
{
	if (a == b && b == c)
		cout << "tam giac deu";
	else if (a == b || b == c || c == a)
		cout << "tam giac can";
	else if ((c*c == (a*a + b*b)) || (b*b == (a*a + c*c)) || (a*a == (c*c + b*b)))
		cout << "Tam giac vuong";
	else
		cout << "tam giac thuong";
}
int main()
{
	/*
	De thi:
	1/ Ham tamGiac tren co loi khong?
	Neu co thi hay tao ra 1 ban sao cua nhanh ban dang lam co ten la m??_moi de fix loi
	2/ Neu ham tamGiac khong co loi thi hay tao ra nhanh moi co ten la m??_moi de xay dung them chuc nang tinh dien tich tam giac
	3/ Viet ham main de goi ham cac tren
	4/ Tron nhanh m??_moi vao nhanh m??
	*/
	return 0;
}
