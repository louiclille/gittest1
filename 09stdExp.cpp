#include <iostream>
using namespace std;
class FileError:public exception{
public:
    ~FileError(void) throw() {}
    const char* what(void) const throw() {
        cout << "针对文件错误处理" << endl;
        return "FileError";
    }
};
class MemoryError:public exception{
public:
    ~MemoryError(void) throw() {}
    const char* what(void) const throw() {
        cout << "针对内存错误处理" << endl;
        return "MemoryError";
    }
};
void func(void) throw(FileError,MemoryError){
    //throw FileError();
    throw MemoryError();
}
int main(void){
    try{
        //func();
        char* p = new char[0xffffffff];
    }
    catch(exception& ex){
        cout << ex.what() << endl;
    }
    return 0;
}


















