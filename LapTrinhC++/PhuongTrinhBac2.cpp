#include <iostream>
#include <cmath>
using namespace std;
class PhuongTrinhBac2{
	private:
		float a,b,c;
	public:
		void get()
		{
			cout<<" a.X"<<(char)253<<" + b.X + c = 0";
			cout<<"\n\nNhap he so a: "; cin>>a;
			cout<<"Nhap he so b: "; cin>>b;
			cout<<"Nhap he so c: "; cin>>c;
		}
		void put()
		{
			cout<<"\n\nPhuong trinh: "<<a<<".X"<<(char)253<<" + "<<b<<".C + "<<c<<" = 0\n\n";
		}
		void Nghiem()
		{
			if(a<0) cout<<"Phuong trinh co 1 nghiem: "<<-c/b;
			else{
				float del = (b*b)-(4*a*c);
				if(del>0) del=sqrt(del);
				if(del<0) cout<<"Phuong trinh vo nghiem";
				else if(del==0) cout<<"Phuong trinh co ngiem duy nhat: "<<-b/(2*a);
				else if(del>0)
				{
					cout<<"Phuong trinh co 2 nghiem phan biet X1 = "<<(-b+del)/(2*a)<<endl;
					cout<<"                                   X2 = "<<(-b-del)/(2*a);
				}
			}
		}
};
int main()
{
	PhuongTrinhBac2 A;
	A.get();
	A.put();
	A.Nghiem();
	system("pause");
}