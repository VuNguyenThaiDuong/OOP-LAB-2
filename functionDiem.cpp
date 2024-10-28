#include <iostream>
#include "classDiem.h"

using namespace std;

Diem::Diem() : iHoanh(0), iTung(0) {} // Constructor mac dinh

Diem::Diem(int Hoanh, int Tung) : iHoanh(Hoanh), iTung(Tung) {} // Constructor voi tham so

Diem::Diem(const Diem &x) : iHoanh(x.iHoanh), iTung(x.iTung) {} // Constructor sao chep

void Diem::Nhap(){
    cout << "Nhap diem hoanh do: ";
    cin >> iHoanh;
    cout << "Nhap diem tung do: ";
    cin >> iTung ;
}


void Diem::Xuat(){
    cout <<"Toa do diem hien tai: " <<'(' <<iHoanh << ',' << iTung <<')'<<"\n";
}

int Diem::GetTungDo(){
    cout << "Tung do diem hien tai: " << iTung<<"\n";

}

int Diem::GetHoanhDo(){
    cout << "Hoanh do diem hien tai: " << iHoanh<<"\n";
}

void Diem::SetTungDo(){

    cout <<"Tung do moi: ";
    cin >> iTung ;

}

void Diem::SetHoanhDo(){

    cout <<"Hoanh do moi: " ;
    cin  >> iHoanh ;


}

void Diem::TinhTien(){
    int dx, dy;
    cout <<"Tinh tien x 1 doan la: " ;
    cin  >> dx ;
    iHoanh = iHoanh + dx;
    cout <<"Tinh tien y 1 doan la: " ;
    cin  >> dy ;
    iTung  = iTung + dy;
}
