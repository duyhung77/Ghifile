#include <fstream>
#include <iostream>
using namespace std;

int main()
{

    char data[100];

    // mo mot file trong che do write.
    ofstream outfile;
    outfile.open("savefile.txt");

    cout << "Ghi du lieu vao trong file!" << endl;
    // ghi them du lieu can nhap vao trong file vao duoi





    // ghi du lieu da nhap vao trong file.
    outfile << data << endl;

    // dong file da mo.
    outfile.close();

    // mo mot file trong che do read.
    ifstream infile;
    infile.open(".txt");

    cout << "\n===========================\n";
    cout << "Doc du lieu co trong file!" << endl;
    infile >> data;

    // ghi du lieu tren man hinh.
    cout << data << endl;

    // tiep tuc doc va hien thi du lieu.
    infile >> data;
    cout << data << endl;

    // dong file da mo.
    infile.close();

    return 0;
}