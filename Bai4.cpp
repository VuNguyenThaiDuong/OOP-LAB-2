#include <iostream>
#include <string>
using namespace std;

class ThiSinh {
private:
    string Ten; // Ten thi sinh
    string MSSV; // Ma so sinh vien
    int iNgay; // Ngay sinh
    int iThang; // Thang sinh
    int iNam; // Nam sinh
    float fToan; // Diem Toan
    float fVan; // Diem Van
    float fAnh; // Diem Anh

public:
    ThiSinh(); // Constructor mac dinh
    void Nhap(); // Phuong thuc nhap thong tin
    void Xuat(); // Phuong thuc xuat thong tin
    float Tong(); // Phuong thuc tinh tong diem
};

// Khoi tao mac dinh cho thi sinh
ThiSinh::ThiSinh() : Ten(""), MSSV(""), iNgay(0), iThang(0), iNam(0), fToan(0), fVan(0), fAnh(0) {}

// Nhap thong tin cho thi sinh
void ThiSinh::Nhap() {
    cout << "Nhap ten thi sinh: ";
    cin.ignore(); // Bo qua bo dem
    getline(cin, Ten); // Nhap ten thi sinh
    cout << "Nhap MSSV: ";
    cin >> MSSV; // Nhap ma so sinh vien
    cout << "Nhap ngay sinh (ngay thang nam): ";
    cin >> iNgay >> iThang >> iNam; // Nhap ngay, thang, nam sinh
    cout << "Nhap diem Toan: ";
    cin >> fToan; // Nhap diem Toan
    cout << "Nhap diem Van: ";
    cin >> fVan; // Nhap diem Van
    cout << "Nhap diem Anh: ";
    cin >> fAnh; // Nhap diem Anh
}

// Xuat thong tin thi sinh
void ThiSinh::Xuat() {
    cout << "Ten: " << Ten << ", MSSV: " << MSSV << ", Ngay sinh: " << iNgay << "/" << iThang << "/" << iNam
         << ", Diem Toan: " << fToan << ", Diem Van: " << fVan << ", Diem Anh: " << fAnh
         << ", Tong diem: " << Tong() << endl; // Hien thi thong tin thi sinh
}

// Tinh tong diem
float ThiSinh::Tong() {
    return fToan + fVan + fAnh; // Tinh tong diem
}

int main() {
    int n;
    cout << "Nhap so luong thi sinh: ";
    cin >> n;

    ThiSinh* danhSach = new ThiSinh[n]; // Cap phat bo nho cho mang thi sinh

    // Nhap thong tin cho tung thi sinh
    for (int i = 0; i < n; ++i) {
        cout << "Nhap thong tin thi sinh " << i + 1 << ":\n";
        danhSach[i].Nhap(); // Nhap thong tin thi sinh
    }

    cout << "\nThong tin thi sinh co tong diem lon hon 15:\n";
    for (int i = 0; i < n; ++i) {
        if (danhSach[i].Tong() > 15) { // Kiem tra tong diem
            danhSach[i].Xuat(); // Xuat thong tin thi sinh
        }
    }

    delete[] danhSach; // Giai phong bo nho
    return 0; // Ket thuc chuong trinh
}

