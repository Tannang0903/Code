#include "Sinhvien.h"
#include <iostream>
using namespace std;
Sinhvien::Sinhvien(string mssv, string name, double dtb){
    this->_MSSV = mssv;
    this->_Name = name;
    this->_DTB = dtb;
}
Sinhvien::~Sinhvien(){

}
void Sinhvien::Show(){
    cout << "MSSV: " << this->_MSSV << ", Name: " << this->_Name <<", DTB: " << this->_DTB << endl;
}