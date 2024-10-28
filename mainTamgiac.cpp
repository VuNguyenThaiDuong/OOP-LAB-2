#include <iostream>
#include "functionTamgiac.cpp"

int main() {
    TamGiac t; // Khoi tao doi tuong tam giac
    t.Nhap(); // Nhap toa do cho tam giac
    std::cout << "Tam giac ban dau:\n";
    t.Xuat(); // Xuat toa do ban dau

    // Dich chuyen tam giac
    t.TinhTien();
    std::cout << "Tam giac sau khi tinh tien:\n";
    t.Xuat(); // Xuat toa do sau khi dich chuyen

    // Phong to tam giac
    t.PhongTo();
    std::cout << "Tam giac sau khi phong to:\n";
    t.Xuat(); // Xuat toa do sau khi phong to

    // Thu nho tam giac
    t.ThuNho();
    std::cout << "Tam giac sau khi thu nho:\n";
    t.Xuat(); // Xuat toa do sau khi thu nho

    // Quay tam giac
    t.Quay();
    std::cout << "Tam giac sau khi quay:\n";
    t.Xuat(); // Xuat toa do sau khi quay

    return 0; // Ket thuc chuong trinh
}
