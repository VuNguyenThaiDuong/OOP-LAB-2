#include <iostream>
using namespace std;

class Diem {
private:
    float hoanhDo; // Hoanh do
    float tungDo;  // Tung do

public:
    Diem(float x = 0, float y = 0); // Constructor mac dinh
    void nhap(); // Nhap thong tin diem
    void xuat(); // Xuat thong tin diem
    void nhanDoble(); // Nhân đôi hoành độ và tung độ
    void ganVeGoc(); // Gán điểm về gốc tọa độ
    void tinhTien(int k, float d); // Tịnh tiến theo k và d
};

// Khoi tao diem
Diem::Diem(float x, float y) : hoanhDo(x), tungDo(y) {}

// Nhap thong tin diem
void Diem::nhap() {
    cout << "Nhap hoanh do: ";
    cin >> hoanhDo;
    cout << "Nhap tung do: ";
    cin >> tungDo;
}

// Xuat thong tin diem
void Diem::xuat() {
    cout << "(" << hoanhDo << "," << tungDo << ")" << endl; // Hien thi diem
}

// Nhân đôi hoành độ và tung độ
void Diem::nhanDoble() {
    hoanhDo *= 2;
    tungDo *= 2;
}

// Gán điểm về gốc tọa độ
void Diem::ganVeGoc() {
    hoanhDo = 0;
    tungDo = 0;
}

// Tịnh tiến theo k và d
void Diem::tinhTien(int k, float delta) { // Đổi tên biến d thành delta
    if (k == 0) {
        hoanhDo += delta; // Tinh tien theo truc x
    } else {
        tungDo += delta; // Tinh tien theo truc y
    }
}

int main() {
    Diem d; // Tao mot doi tuong diem
    d.nhap(); // Nhap thong tin diem

    int n;
    cout << "Nhap so luong chi thi: ";
    cin >> n; // Nhap so luong chi thi

    for (int i = 0; i < n; ++i) {
        int x;
        cout << "Nhap chi thi " << (i + 1) << ": ";
        cin >> x; // Nhap chi thi

        switch (x) {
            case 1:
                d.nhanDoble(); // Nhân đôi hoành độ và tung độ
                break;
            case 2:
                d.ganVeGoc(); // Gán điểm về gốc tọa độ
                break;
            case 3: {
                int k;
                float delta; // Đổi tên biến d thành delta
                cout << "Nhap k (0: truc x, khac 0: truc y): ";
                cin >> k;
                cout << "Nhap do tinh tien: ";
                cin >> delta;
                d.tinhTien(k, delta); // Tịnh tiến theo k và delta
                break;
            }
            default:
                // Khong lam gi
                break;
        }
    }

    // Xuat thong tin diem sau khi thuc hien cac chi thi
    d.xuat();

    return 0; // Ket thuc chuong trinh
}
