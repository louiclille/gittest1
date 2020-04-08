#include <iostream>
using namespace std;
class A{
public:
    A(void){
        cout << "new" << endl;
        if("error"){
            cout << "delete" << endl;
            throw -1;
        }
        cout << "构造函数正常结束" << endl;
    }
    ~A(void){
        cout << "delete" << endl;
    }
};
int main(void){
    try{
        A a;
    }
    catch(int ex){
        cout << "捕获到异常:" << ex << endl;
    }
    return 0;
}








