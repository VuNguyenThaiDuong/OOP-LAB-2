#include <iostream>
#include <cmath> // Thêm thư viện cho hàm abs
using namespace std;

class Polygon {
private:
    int n; // Số đỉnh
    float* x; // Mảng lưu trữ tọa độ x
    float* y; // Mảng lưu trữ tọa độ y

public:
    Polygon(int n = 0) : n(n) {
        x = new float[n]; // Cấp phát bộ nhớ cho mảng tọa độ x
        y = new float[n]; // Cấp phát bộ nhớ cho mảng tọa độ y
    }

    ~Polygon() { // Destructor
        delete[] x; // Giải phóng bộ nhớ mảng x
        delete[] y; // Giải phóng bộ nhớ mảng y
    }

    void nhap() { // Nhập tọa độ
        cout << "Nhap so diem (n > 2): ";
        cin >> n;
        while (n <= 2) { // Kiểm tra số đỉnh
            cout << "So diem phai lon hon 2. Vui long nhap lai: ";
            cin >> n;
        }

        cout << "Nhap toa do cac diem:" << endl;
        for (int i = 0; i < n; i++) {
            cout << "Diem " << i + 1 << ": ";
            cin >> x[i] >> y[i]; // Nhập tọa độ cho mỗi đỉnh
        }
    }

    float tinhDienTich() { // Tính diện tích
        float area = 0;
        for (int i = 0; i < n; i++) {
            area += (x[i] * y[(i + 1) % n]) - (x[(i + 1) % n] * y[i]);
        }
        return abs(area) / 2.0; // Trả về diện tích
    }
};

int main() {
    Polygon poly; // Khởi tạo đối tượng đa giác
    poly.nhap(); // Nhập thông tin đa giác
    float area = poly.tinhDienTich(); // Tính diện tích
    cout << "Dien tich da giac: " << area << endl; // Xuất diện tích
    return 0; // Kết thúc chương trình
}
