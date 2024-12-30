// bai6_TinhChuVIDientichHT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

    double bankinh, chuvi, dientich;
    // Khai bao hang so 
    // const double PT = 3.14159265;

    cout << "TINH CHU VI VA DIEN TICH HINH TRON " << endl;
    cout << "Nhap ban kinh";
    cin >> bankinh;


    chuvi = 2 *bankinh* bankinh;
    //dientich = M_PI * bankinh * bankinh;
    dientich = 3.14 * bankinh * bankinh;
    cout << "Chu vi hinh tron" << chuvi << endl;

    cout << " dien tich hinh tron: " << dientich;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
