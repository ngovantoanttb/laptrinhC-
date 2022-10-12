#include <iostream> // std::cin, std::cout
#include <vector> // std::vector
#define matrix std::vector<std::vector<int> > 
matrix matrix_multiply(matrix a, matrix b) // Hàm nhân ma trận
{
    int m = a.size(); // Lấy kích thước của 2 ma trận, ma trận a có kích thước m * n, ma trận b có kích thước n * k
    int n = a[0].size();
    int k = b[0].size();
    matrix c(m, std::vector<int> (k)); // Ma trận kết quả c có kích thước m * k
    for (int i = 0; i < m; i++) // Duyệt theo từng hàng của ma trận kết quả
    { 
        for (int j = 0; j < k; j++) // Duyệt theo phần tử của mỗi hàng
        {
            c[i][j] = 0; // Đưa giá trị ban đầu về 0
            for (int k = 0; k < n; k++) // Cộng kết quả mỗi lần nhân vào các phần tử
            { 
                c[i][j] += a[i][k] * b[k][j]; 
            } 
        } 
    } 
    return c; 
}
int main() // C++11 required
{
    matrix a = {
    {1, 2},
    {2, 3},
    {2, 5}
    };
    
    matrix b = {
    {1, 2, 3, 4},
    {1, 3, 5, 7}
    };
    
    matrix c = matrix_multiply(a, b);
    
    for (auto x : c) // In ra ma trận
    {
        for (auto y : x) std::cout << y << ' ';
        std::cout << '\n';
    }
    system("pause");
}
 