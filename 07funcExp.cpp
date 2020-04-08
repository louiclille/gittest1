#include <iostream>
using namespace std;
class FileError{};
class MemoryError{};

//声明
void func(void) throw(MemoryError,FileError);
    
//throw(..):函数异常说明,用于告知函数调用者,执行
//期间可能会抛出FileError或MemoryError类型异常
//定义
void func(void) throw(FileError,MemoryError){
    //throw FileError();
    throw MemoryError();
}
int main(void){
    try{
        func();
    }
    catch(FileError& ex){
        cout << "针对文件错误处理" << endl;
    }
    catch(MemoryError& ex){
        cout << "针对内存错误处理" << endl;
    }
    return 0;
}



