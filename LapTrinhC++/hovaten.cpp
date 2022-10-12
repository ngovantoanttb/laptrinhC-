#include<bits/stdc++.h>
using namespace std;
int main(){
char maHS[10], ngaySinh[10], lop[10];
char tenHS[25];
int soBuoiAn;
float soTienBT;
fflush(stdin);//Xoa bo du lieu thua
cout<<"nhap ma hoc sinh: "; gets(maHS);
cout<<"nhap ten hoc sinh: "; gets(tenHS);
cout<<"nhap ngay sinh: "; gets(ngaySinh);
cout<<"nhap lop: "; gets(lop);
cout<<"nhap so buoi an: "; cin>>soBuoiAn;
soTienBT=soBuoiAn*25000;
cout<<"-----------------------------"<<endl;
cout<<"Ma hoc sinh:"<<maHS<<endl;
cout<<"Ho va ten: "<<tenHS<<endl;
cout<<"Ngay sinh: "<<ngaySinh<<endl;
cout<<"Lop: "<<lop<<endl;
cout<<"So buoi an: "<<soBuoiAn<<endl;
cout<<"So tien ban tru "<<soTienBT<<endl;
system("pause");
}