#include<iostream>
using namespace std;
int main(){
    int ga, cho;
    for(ga=1; ga<36; ga++)
        for(cho=1; cho<36; cho++)
        if(ga*2 + cho*4 == 100 && ga + cho ==36){
            cout<<"Dap an la: ga = "<<ga<<" , cho = "<<cho<<endl;
            system("pause");
        }

}