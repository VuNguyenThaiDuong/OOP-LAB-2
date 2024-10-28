class Diem {
private:
    int iHoanh;
    int iTung;

public:
    Diem(); // Constructor mac dinh
    Diem(int Hoanh, int Tung); // Constructor voi tham so
    Diem(const Diem &x); // Constructor sao chep
    void Xuat(); // Phuong thuc xuat toa do
    void Nhap(); // Phuong thuc nhap toa do
    int GetTungDo(); // Getter cho iTung
    int GetHoanhDo(); // Getter cho iHoanh
    void SetTungDo(); // Setter cho iTung
    void SetHoanhDo(); // Setter cho iHoanh
    void TinhTien(); // Phuong thuc dich chuyen diem
};


