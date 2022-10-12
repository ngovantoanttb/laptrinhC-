#include <iostream>
#include <vector>
 
#define matrix std::vector<std::vector<int>>
 
matrix matrix_multiply(matrix a, matrix b) // Hàm nhân ma trận
{
    int m = a.size(); // Lấy chiều dài 1 cạnh của ma trận, do các ma trận mà ma trận vuông cùng kích thước nên ta chỉ cần 1 độ dài 1 cạnh là đủ
    matrix c(m, std::vector<int> (m)); // Khởi tạo ma trận kết quả
    for (int i = 0; i < m; i++) // Nhân ma trận
    {
        for (int j = 0; j < m; j++)
        {
            c[i][j] = 0; // Đưa phần tử của ma trận kết quả về 0
            for (int k = 0; k < m; k++) // Cộng đáp án vào kết quả
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return c;
}
matrix power(matrix a, int b) // Lũy thừa ma trận
{
    if (b == 1) return a;
    else return matrix_multiply(a, power(a, b - 1));
}
 
int main(){
    matrix a = {
        {1, 2},
        {2, 3}
    };
    int n = 2;
    matrix c = power(a, n);
    for (auto x : c) // In ra ma trận
    {
        for (auto y : x) std::cout << y << ' ';
        std::cout << '\n';
    }
    system("pause");
}