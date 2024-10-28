#include <iostream>
#include "functionDiem.cpp"

using namespace std;

int main() {


    Diem d2; // Tao doi tuong Diem bang constructor mac dinh
    d2.Nhap();
    d2.Xuat(); // Xuat toa do cua d1
    d2.TinhTien();
    d2.GetHoanhDo();
    d2.GetTungDo();
    d2.SetTungDo();
    d2.SetHoanhDo();
    d2.Xuat();

    return 0;
}
