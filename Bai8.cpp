
#include <iostream>
using namespace std;

class List {
private:
    double* arr; // Con tro quan ly mang
    unsigned int size; // Kich thuoc mang

public:
    List() { // Constructor
        arr = nullptr; // Khoi tao con tro
        size = 0; // Kich thuoc ban dau
    }

    ~List() { // Destructor
        delete[] arr; // Giai phong bo nho
    }

    void add(double x) { // Them phan tu
        double* newArr = new double[size + 1]; // Tao mang moi
        for (unsigned int i = 0; i < size; i++) {
            newArr[i] = arr[i]; // Sao chep du lieu
        }
        newArr[size] = x; // Them phan tu moi
        delete[] arr; // Giai phong mang cu
        arr = newArr; // Cap nhat con tro
        size++; // Tang kich thuoc
    }

    void removeFirst(double x) { // Xoa phan tu dau tien co gia tri x
        for (unsigned int i = 0; i < size; i++) {
            if (arr[i] == x) {
                for (unsigned int j = i; j < size - 1; j++) {
                    arr[j] = arr[j + 1]; // Dich chuyen phan tu
                }
                size--; // Giam kich thuoc
                return;
            }
        }
    }

    void removeAll(double x) { // Xoa tat ca phan tu co gia tri x
        unsigned int newSize = 0;
        for (unsigned int i = 0; i < size; i++) {
            if (arr[i] != x) {
                newSize++;
            }
        }
        double* newArr = new double[newSize]; // Tao mang moi
        for (unsigned int i = 0, j = 0; i < size; i++) {
            if (arr[i] != x) {
                newArr[j++] = arr[i]; // Sao chep phan tu khong phai x
            }
        }
        delete[] arr; // Giai phong mang cu
        arr = newArr; // Cap nhat con tro
        size = newSize; // Cap nhat kich thuoc
    }

    void update(int index, double value) { // Cap nhat phan tu
        if (index >= 0 && index < size) {
            arr[index] = value; // Cap nhat gia tri
        }
    }

    void display() { // Hien thi danh sach
        cout << "[";
        for (unsigned int i = 0; i < size; i++) {
            cout << arr[i];
            if (i < size - 1) {
                cout << ",";
            }
        }
        cout << "]" << endl; // Xuat danh sach
    }
};

int main() {
    List list; // Tao list
    int n;
    do {
        cout << "Nhap chi thi (-1 de ket thuc): ";
        cin >> n;
        if (n == 0) {
            double x;
            cout << "Nhap gia tri x: ";
            cin >> x;
            list.add(x); // Them gia tri
        } else if (n == 1) {
            double x;
            cout << "Nhap gia tri x: ";
            cin >> x;
            list.removeFirst(x); // Xoa phan tu
        } else if (n == 2) {
            double x;
            cout << "Nhap gia tri x: ";
            cin >> x;
            list.removeAll(x); // Xoa tat ca
        } else if (n == 3) {
            int index;
            double value;
            cout << "Nhap chi so x va gia tri y: ";
            cin >> index >> value;
            list.update(index, value); // Cap nhat phan tu
        }
    } while (n != -1);

    list.display(); // Hien thi danh sach
    return 0; // Ket thuc chuong trinh
}
