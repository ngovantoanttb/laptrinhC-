#include <iostream>
 
using namespace std;
 
void nhapTheTichXYVaLuongNuoc( int& Vx, int& Vy, int& luong_nuoc )
{
    do {
        cout << "Nhap the tich ( Vx, Vy ) dieu kien : vX < Vy and vX, Vy > 0 :\n";
        cin >> Vx >> Vy;
    }
    while( ( Vx < 0 ) || ( Vy < 0 ) || Vx >= Vy );
 
    cout << "Nhap luong nuoc can dong : ";
    cin >> luong_nuoc;
}
 
bool tonTaiLoiGiai( int ucln_cua_VxVy, int luong_nuoc_can_dong )
{
    if( ( luong_nuoc_can_dong % ucln_cua_VxVy ) == 0 )
    {
        return true;
    }
    return false;
}
 
int uocChungLonNhat( int x, int y )
{
    if( y == 0 )
        return x;
    else
        return uocChungLonNhat( y, x % y );
}
 
void inLuongNcTrongThung( int Vx, int Vy )
{
    cout << "\n + Binh X hien tai chua : " << Vx;
    cout << "\n + Binh Y hien tai chua : " << Vy;
    cout << "\n";
}
 
int thucHienDongNuoc( int Vx, int Vy, int luong_nuoc_can_dong )
{
    int binh_x = 0;
    int binh_y = 0;
    int buoc   = 1;
 
    do {
        if( binh_x == Vx )
        {
            cout << "\n -> Buoc thu " << buoc << "\n";
            cout << "( L1 ) : Neu binh X day, thi do het nc binh X di ";
            binh_x = 0;
            buoc++;
            inLuongNcTrongThung( binh_x, binh_y );
        }
        else if( binh_y == 0 )
        {
            cout << "\n -> Buoc thu " << buoc << "\n";
            cout << "( L2 ) : Neu binh Y rong thi do day nc vao binh Y ";
            binh_y = Vy;
            buoc++;
            inLuongNcTrongThung( binh_x, binh_y );
        }
        else if( binh_x != Vx && binh_y != 0 )
        {
            cout << "( L3 ) Neu binh X khong day va binh Y khong rong thi trut nc \n"
                 << "tu binh Y sang binh X cho den khi binh X day hoac binh Y het nuoc";
            while( binh_x < Vx && binh_y != 0 )
            {
                cout << "\n -> Buoc thu " << buoc << "\n";
                buoc++;
                if( binh_y >= Vx )
                {
                    int tam = binh_x;
                    binh_x  = Vx;
                    binh_y -= Vx - tam;;
                }
                else // else if( binh_y < Vx )
                {
                    binh_x += binh_y;
                    binh_y  = 0;
                }
                inLuongNcTrongThung( binh_x, binh_y );
            }
            cin.get();
        }
    }
    while( binh_x != luong_nuoc_can_dong && binh_y != luong_nuoc_can_dong );
 
    if( binh_x == luong_nuoc_can_dong )
        return Vx;
    else
        return Vy;
}
 
int main()
{
    int the_tich_binh_x;
    int the_tich_binh_y;
    int luong_nuoc;
 
    nhapTheTichXYVaLuongNuoc( the_tich_binh_x, the_tich_binh_y, luong_nuoc );
 
    int ucln_cuaXY = uocChungLonNhat( the_tich_binh_x, the_tich_binh_y );
 
    cout << "ucln_cuaXy = " << ucln_cuaXY << "\n";
 
    if( tonTaiLoiGiai( ucln_cuaXY,luong_nuoc ) == true )
    {
        int thung_chua_luong_nuoc = thucHienDongNuoc( the_tich_binh_x, the_tich_binh_y, luong_nuoc );
        cout << "\n Thung chua luong nuoc can dong la thung co the tich = "
             << thung_chua_luong_nuoc << "\n";
    }
    else
    {
        cout << "\n Khong ton tai loi giai. Chuong trinh ket thuc \n";
    }
    system("pause");
}