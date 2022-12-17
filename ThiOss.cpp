
#include <iostream>
using namespace std;
//Nguyen Huu Tai
//Ham giai phuong trinh bac 1
bool pt1(float a, float b, float &nghiem)
{
	if (a == 0)
		return false;
	nghiem = -b / a;
	return true;
}
//Cau 2: Giai phuong trinh bac 2
int giaiPTBac2(float a, float b, float c,float &x1, float &x2){
 float delta = b*b - 4*a*c;
 if(delta<0){
 x1=x2=0.0;
 return 0;
 }
 else if(delta==0){
 x1 = x2 = -b/(2*a);
 return 1;
 }
 else{
 delta = sqrt(delta);
 x1 = (-b + delta) / (2*a);
 x2 = (-b - delta) / (2*a);
 return 2;
 }
}
int main()
{
	/*
	De thi:
	1/ Ham pt1 tren co loi khong?
	Neu co thi hay tao ra 1 ban sao cua nhanh ban dang lam co ten la m??_moi de fix loi
	=>Ham pt1 tren khong co loi

	2/ Neu ham pt1 khong co loi thi hay tao ra nhanh moi co ten la m??_moi de xay dung them chuc nang giai phuong trinh bac 2
	3/ Viet ham main de goi ham cac tren 
	4/ Tron nhanh m??_moi vao nhanh m??
	*/
//Cau 3: 
 float a,b,c;
 float x1,x2;
 do{
 cout<<"Nhap a (a!=0): ";
 cin>>a;
 cout<<"Nhap b: ";
 cin>>b;
 cout<<"Nhap c: ";
 cin>>c;
 }
 while(!a);
        int numNo = giaiPTBac2(a,b,c,x1,x2);
 if(numNo ==0 ) {
 cout<<"Phuong trinh da cho vo nghiem";
 }
 else if(numNo==1){
 cout<<"Phuong trinh da cho co nghiem kep x=%.4f" << x1;
 }
 else{
 cout<<"Phuong trinh da cho co hai nghiem phan biet"<<endl;
 cout<< "x1=" << x1<<endl;
 cout<< "x2=" << x2<<endl;
 }

 system("pause");
 return 0;
}
