#include <iostream> // std::cin, std::cout, std::endl
#include <vector> // std:: vector
#define matrix std::vector<std::vector<int>> 
matrix matrix_multiply(matrix a, matrix b) // Hàm nhân ma trận
{ 
    int m = a.size(); // Chiều dài 1 cạnh của ma trận
    matrix c(m, std::vector<int> (m)); // Khởi tạo ma trận kết quả
    for (int i = 0; i < m; i++) // Nhân ma trận
    { 
        for (int j = 0; j < m; j++) 
        { 
            c[i][j] = 0; // Đưa phần tử ma trận kết quả về 0 trước khi tính toán
            for (int k = 0; k < m; k++) // Cộng vào kết quả
            { 
                c[i][j] += a[i][k] * b[k][j]; 
            } 
        } 
    } 
    return c; 
} 
matrix power(matrix a, int b) // Lũy thừa ma trận
{ 
    if (b == 1) return a; // Nếu số mũ bằng 1 thì trả về a
    else return matrix_multiply(a, power(a, b - 1)); // Nếu không thì trả về a * a ^ (b - 1)
}
int main() // C++11 required
{
    matrix fibonacci = { // Ma trận gốc để tìm số fibonacci
    {1, 1},
    {1, 0}
    };
    
    std::cout << "Nhap so Fibonacci ma ban muon tim kiem: ";
    
    int n; // Số mũ lũy thừa
    std::cin >> n;
    
    matrix answer = power(fibonacci, n); // Tiến hành tìm đáp án
    
    std::cout << "So Fibonacci thu " << n << " la: " << answer[1][0] << std::endl; // In ra kết quả
    system("pause");
}
 