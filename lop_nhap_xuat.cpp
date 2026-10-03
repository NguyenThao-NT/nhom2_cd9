#include <iostream>
#include <string>
using namespace std;


//==================================================
// BAN 1
// XAY DUNG LOP TAI KHOAN
//==================================================

class TaiKhoan {
private:
    string soTK;
    string hoTen;
    string loaiTK;
    double soDu;
    double laiSuat;

public:
    TaiKhoan();

    void nhap();
    void xuat();

    string getSoTK();
    double getSoDu();

    // Phan cua Ban 2
    void napTien(double tien);
    void rutTien(double tien);
    double tinhLai();
};


// Ham tao
TaiKhoan::TaiKhoan() {
    soTK = "";
    hoTen = "";
    loaiTK = "";
    soDu = 0;
    laiSuat = 0;
}


// Nhap tai khoan
void TaiKhoan::nhap() {
    cin.ignore();

    cout << "So tai khoan: ";
    getline(cin, soTK);

    cout << "Ho ten chu tai khoan: ";
    getline(cin, hoTen);

    cout << "Loai tai khoan: ";
    getline(cin, loaiTK);

    cout << "So du: ";
    cin >> soDu;

    cout << "Lai suat (%): ";
    cin >> laiSuat;
}


// Xuat tai khoan
void TaiKhoan::xuat() {
    cout << "So TK: " << soTK << endl;
    cout << "Ho ten: " << hoTen << endl;
    cout << "Loai TK: " << loaiTK << endl;
    cout << "So du: " << soDu << endl;
    cout << "Lai suat: " << laiSuat << "%" << endl;
}


// Lay so tai khoan
string TaiKhoan::getSoTK() {
    return soTK;
}
// Lay so du
double TaiKhoan::getSoDu() {
    return soDu;
}


