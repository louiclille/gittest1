#include <iostream>
#include <iomanip>//带参数的流控制符
using namespace std;
int main(void){
    cout << 20/3.0 << endl;
    /*格式化函数
    cout.precision(10);//设置精度保留10位有效数据
    cout << 20/3.0 << endl;
    cout << "[";
    cout.width(8);//设置域宽,8个字符宽度
    cout.setf(ios::showpos);//显示正号
    cout.fill('$');//空白位置用'$'填充
    cout << 12345 << "]" << endl;
    */
    //流控制符
    cout << setprecision(10) << 20/3.0 << endl;
    cout << "[" << setw(8) << showpos << 
        setfill('$') << 12345 << "]" << endl;
    
    //10个字符宽度,十六制,左对齐,显示"0x"
    cout << "[" << setw(10) << hex << left << 
        showbase << 100 << "]" << endl;

    
    return 0;
}







