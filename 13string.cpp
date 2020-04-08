#include <iostream>
#include <sstream>//字符串流
using namespace std;
int main(void){
    istringstream iss;//字符串流输入
    //char buf[] = "123 4.56 hello"
    iss.str("123 4.56 hello");
    int i=0;
    double d=0.0;
    string s;
    //sscanf(buf,"%d %lf ...",&i,&d,...)
    iss >> i >> d >> s;
    cout << i << "," << d << "," << s << endl;
    
    ostringstream oss;//字符串流输出
    int i2 = 321;
    double d2 = 4.56;
    string s2 = "world";
    //sprintf(buf,"%d %lf ..",i2,d2..)
    oss << i2 << ' ' << d2 << ' ' << s2;
    cout << oss.str() << endl;

    return 0;
}





