#include <iostream>
#include <fstream>
using namespace std;

int main(void){
    //写文件流
    ofstream ofs("file.txt");
    ofs << 123 << ' ' << 4.56 << ' ' << "abc"
        << endl;
    ofs.close();//关闭文件

    //读文件流
    ifstream ifs("file.txt");
    int i=0;
    double d=0.0;
    string s;
    ifs >> i >> d >> s;
    cout << "读到数据:" << i << "," << d << ","
        << s << endl;
    ifs.close();

    return 0;
}





