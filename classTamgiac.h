#include <iostream>
#include <cmath>

// Cau truc dai dien cho mot diem trong khong gian 2D
struct Point {
    float x, y; // Toa do x va y
};

// Lop dai dien cho mot tam giac
class TamGiac {
private:
    Point A, B, C; // Ba dinh cua tam giac

public:
    void Nhap();          // Nhap toa do cho ba dinh
    void Xuat();         // Xuat toa do cua ba dinh
    void TinhTien(); // Dich chuyen tam giac
    void PhongTo();          // Phong to tam giac
    void ThuNho();           // Thu nho tam giac
    void Quay();              // Quay tam giac
};
