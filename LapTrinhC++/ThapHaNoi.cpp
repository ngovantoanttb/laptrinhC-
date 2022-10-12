#include<iostream>
using namespace std;
void hn(int n,char a,char b,char c){
 	 if(n==1){
    	cout<<"\nchuyen dia tu "<<a<<" sang "<<c;
    	cout<<"\n";
    }
  	else{
       hn(n-1,a,c,b);
       hn(1,a,b,c);
       hn(n-1,b,a,c);
    }
}
int main()
{
   int n;
   cout<<"nhap vao so dia: ";
   cin>>n;
   hn(n,'A','B','C');
   system("pause");
}
