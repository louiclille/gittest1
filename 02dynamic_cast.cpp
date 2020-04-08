#include <iostream>
using namespace std;
class A{ virtual void func(void){} };
class B:public A{ void func(void){} };
class C:public A{ void func(void){} };
int main(void){
    B b;
    A* pa = &b;
    //B* pb = static_cast<B*>(pa);//合理
    //C* pc = static_cast<C*>(pa);//不合理
    B* pb = dynamic_cast<B*>(pa);//ok
    C* pc = dynamic_cast<C*>(pa);//error
    cout << "pa=" << pa << endl;
    cout << "pb=" << pb << endl;
    cout << "pc=" << pc << endl;
    
    A& ra = b;
    C& rc = dynamic_cast<C&>(ra);//error 


    return 0;
}





