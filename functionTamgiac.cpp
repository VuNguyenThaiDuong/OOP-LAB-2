
#include "classTamGiac.h"

// Nhap toa do cho ba dinh A, B, C
void TamGiac::Nhap() {
    std::cout << "Nhap toa do dinh A: ";
    std::cin >> A.x >> A.y;
    std::cout << "Nhap toa do dinh B: ";
    std::cin >> B.x >> B.y;
    std::cout << "Nhap toa do dinh C: ";
    std::cin >> C.x >> C.y;
}

// Xuat toa do cua ba dinh A, B, C
void TamGiac::Xuat() {
    std::cout << "Dinh A: (" << A.x << ", " << A.y << ")\n";
    std::cout << "Dinh B: (" << B.x << ", " << B.y << ")\n";
    std::cout << "Dinh C: (" << C.x << ", " << C.y << ")\n";
}

// Dich chuyen tam giac theo vector (dx, dy)
void TamGiac::TinhTien() {
    float dx , dy;
    std::cout <<" Nhap khoang cach tinh tien (dx dy):";
    std::cin >> dx >> dy;
    A.x += dx; A.y += dy;
    B.x += dx; B.y += dy;
    C.x += dx; C.y += dy;
}

// Phong to tam giac voi he so scale
void TamGiac::PhongTo() {
    float scale;
    std::cout <<" Nhap do phong to: ";
    std::cin >> scale;
    A.x *= scale; A.y *= scale;
    B.x *= scale; B.y *= scale;
    C.x *= scale; C.y *= scale;
}

// Thu nho tam giac voi he so scale
void TamGiac::ThuNho() {
    float scale;
    std::cout <<" Nhap do thu nho: ";
    std::cin >> scale;
    A.x /= scale; A.y /= scale;
    B.x /= scale; B.y /= scale;
    C.x /= scale; C.y /= scale;
}

// Quay tam giac mot goc nhat dinh (don vi do)
void TamGiac::Quay() {
    float angle;
    std::cout <<" Nhap goc quay tam giac: ";
    std::cin >> angle;
    float radians = angle * (M_PI / 180.0); // Chuyen doi do sang radian
    auto rotate = [radians](Point &p) {
        float x_new = p.x * cos(radians) - p.y * sin(radians);
        float y_new = p.x * sin(radians) + p.y * cos(radians);
        p.x = x_new; // Cap nhat toa do x moi
        p.y = y_new; // Cap nhat toa do y moi
    };
    rotate(A); // Quay dinh A
    rotate(B); // Quay dinh B
    rotate(C); // Quay dinh C
}
