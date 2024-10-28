#include <iostream>
#include <cmath>
using namespace std;

class Diem {
public:
    float x;
    float y;

    Diem(float x = 0, float y = 0) : x(x), y(y) {}
};

class DaGiac {
private:
    int n;           // Số đỉnh
    Diem* Dinh;     // Mảng các điểm

public:
    DaGiac(int soDinh = 3) : n(soDinh) {
        Dinh = new Diem[n];
    }

    ~DaGiac() {
        delete[] Dinh;
    }

    void Nhap() {
        cout << "Nhap so dinh: ";
        cin >> n;

        // Đảm bảo n lớn hơn hoặc bằng 3
        while (n < 3) {
            cout << "Da giac phai co it nhat 3 dinh. Vui long nhap lai so dinh: ";
            cin >> n;
        }

        Dinh = new Diem[n];
        for (int i = 0; i < n; ++i) {
            cout << "Nhap dinh " << i + 1 << " (x y): ";
            cin >> Dinh[i].x >> Dinh[i].y;
        }
    }

    void Xuat() {
        cout << "Da giac co " << n << " dinh:\n";
        for (int i = 0; i < n; ++i) {
            cout << "Dinh " << i + 1 << ": (" << Dinh[i].x << ", " << Dinh[i].y << ")\n";
        }
    }

    void TinhTien(float dx, float dy) {
        for (int i = 0; i < n; ++i) {
            Dinh[i].x += dx;
            Dinh[i].y += dy;
        }
    }

    void PhongTo(float t) {
        for (int i = 0; i < n; ++i) {
            Dinh[i].x *= t;
            Dinh[i].y *= t;
        }
    }

    void ThuNho(float t) {
        for (int i = 0; i < n; ++i) {
            Dinh[i].x /= t;
            Dinh[i].y /= t;
        }
    }

    void Quay(float goc) {
        float radian = goc * M_PI / 180; // Chuyển đổi độ sang radian
        float cosGoc = cos(radian);
        float sinGoc = sin(radian);

        for (int i = 0; i < n; ++i) {
            float xMoi = Dinh[i].x * cosGoc - Dinh[i].y * sinGoc;
            float yMoi = Dinh[i].x * sinGoc + Dinh[i].y * cosGoc;
            Dinh[i].x = xMoi;
            Dinh[i].y = yMoi;
        }
    }
};

int main() {
    DaGiac dg;
    dg.Nhap();
    dg.Xuat();

    float dx, dy, goc;

    // Nhập tịnh tiến
    cout << "Nhap tinh tien (dx dy): ";
    cin >> dx >> dy;
    dg.TinhTien(dx, dy);
    cout << "Da giac sau khi tinh tien:\n";
    dg.Xuat();

    // Nhập góc quay
    cout << "Nhap goc quay (do): ";
    cin >> goc;
    dg.Quay(goc);
    cout << "Da giac sau khi quay " << goc << " do:\n";
    dg.Xuat();

    return 0;
}
