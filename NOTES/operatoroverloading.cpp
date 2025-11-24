// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class test{
    public:
    int a;
    test(){}
    test(int x){
        this->a=x;
    }
    test operator+(test obj){
    test obj3;
    obj3.a=obj.a+a;
    return obj3;
    }
    test &operator++(){   // for prefix
    a++;
    return *this;
    }
    test &operator++(int){ // for postfix
    a++;
    return *this;
    }
    void display(){
        cout<<a<<'\n';
    }
    /*
    test operator++(int){
    test obj=*this;
    a++;
    return obj;
    }*/
};
// if using friend function pass parameters of all objects

int main() {
    //a=10;
    test obj1(10);
    test obj2(20);
    (obj1+obj2).display();
    (obj1.operator+(obj2)).display();
    ++obj1;            //a=11;
    obj1.display();
    ++(++obj1);    // a=12;    if passed by reference else a=11;
    obj1++;
    obj1.display();
    test obj3=obj1++;
    obj3.display();
    obj1.display();
    
    return 0;
}