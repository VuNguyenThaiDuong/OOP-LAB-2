#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.14;

class Triangle {
private:
    float x1, y1; // Tọa độ điểm 1
    float x2, y2; // Tọa độ điểm 2
    float x3, y3; // Tọa độ điểm 3

public:
    Triangle(float x1 = 0, float y1 = 0, float x2 = 0, float y2 = 0, float x3 = 0, float y3 = 0);
    void nhap(); // Nhập tọa độ các điểm
    void tinhTien(float angle, float distance); // Tịnh tiến tam giác
    void xuat(); // Xuất tọa độ các điểm
};

// Constructor khởi tạo tam giác
Triangle::Triangle(float a1, float b1, float a2, float b2, float a3, float b3)
    : x1(a1), y1(b1), x2(a2), y2(b2), x3(a3), y3(b3) {}

// Nhập tọa độ các điểm
void Triangle::nhap() {
    cout << "Nhap toa do 3 diem (x1 y1 x2 y2 x3 y3): ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
}

// Tịnh tiến tam giác
void Triangle::tinhTien(float angle, float distance) {
    // Chuyển độ sang radian
    float radian = angle * PI / 180.0;

    // Tính toán tịnh tiến
    float dx = distance * cos(radian);
    float dy = distance * sin(radian);

    // Cập nhật tọa độ các điểm
    x1 += dx;
    y1 += dy;
    x2 += dx;
    y2 += dy;
    x3 += dx;
    y3 += dy;
}

// Xuất tọa độ các điểm
void Triangle::xuat() {
    cout << "(" << x1 << "," << y1 << ")" << endl;
    cout << "(" << x2 << "," << y2 << ")" << endl;
    cout << "(" << x3 << "," << y3 << ")" << endl;
}

int main() {
    Triangle t; // Tạo đối tượng tam giác
    t.nhap(); // Nhập tọa độ các điểm

    float angle, distance;
    cout << "Nhap huong tinh tien (do) va do dai (d): ";
    cin >> angle >> distance; // Nhập hướng và độ dài tịnh tiến

    t.tinhTien(angle, distance); // Tịnh tiến tam giác
    t.xuat(); // Xuất tọa độ các điểm sau khi tịnh tiến

    return 0; // Kết thúc chương trình
}
