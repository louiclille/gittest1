#include <iostream>
using namespace std;
class FileError{};
class MemoryError{};
class Base{
public:
    virtual void func(void)
        throw(FileError,MemoryError){
        cout << "基类的func" << endl;    
    }
};
class Derived:public Base{
public:
    void func(void)
        throw(FileError){
        cout << "子类的func" << endl;
    }
};
int main(void){
    Base* pb = new Derived;
    pb->func();
    return 0;
}





