#include <iostream>
using namespace std;
int fact(int num);
int main()
{
      int n, r, npr_var;
  
    cout<<"Nhập vào bắt đầu r: ";
    cin>>r;
    cout<<"Nhập vào số kết thúc n: ";
    cin>>n;
     
    npr_var = fact(n) / fact(n - r);
    cout<<"Giá trị của P("<<n<<","<<r<<") là: "<<npr_var;
    cout<<"-----------------------------------";
}
int fact(int num)
{
    int k = 1, i;
    // factorial of 0 is 1
    if (num == 0)
    {
        return(k);
    }
    else
    {
        for (i = 1; i <= num; i++)
    {
            k = k * i;
    }
    }
    system("pause");
    return(k);
}