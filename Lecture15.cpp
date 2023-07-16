#include<bits/stdc++.h>
using namespace std;

/*
class Animal{
    public:
    void speak(){
        cout<<"they made a sound.!"<<endl;
    }
};
class Dog:public Animal{
    public:
    void speak(){
        cout<<"woofff bhavv grrrrr"<<endl;
    }
};
class Cat:public Animal{
    public:
    void speak(){
        cout<<"Meowwwwwww"<<endl;
    }
};
int main(){
    Dog d;
    Animal a;
    Cat c;
    a.speak();
    d.speak();
    c.Animal::speak();
    return 0;
}

class A{
    int a;
    protected:
    int b;
    public:
    int c;
};
class B: public A{
    public:
};
int main(){
    B obj;
    return 0;
}

class A{};
class B: public A{};
// multiple
class A{};
class B{};
class C: public A,public B{};
// multilevel
class A{};
class B: public A{};
class C: public B{};
// heri.
class A{};
class B: public A{};
class C: public A{};
// hybrid
class A{};
class B{};
class C: public A,public B{};
class D: public C{};
class E: public C{};
int main(){
  return 0;
}
*/



class A{
    public:
    A(){
        cout<<"A's Const."<<endl;
    }
    ~A(){
        cout<<"A's dest."<<endl;
    }
};
class B: public A{
    public:
    B(){
        cout<<"B's const"<<endl;
    }
    ~B(){
        cout<<"B's dest"<<endl;
    }
};
int main(){
    B obj;
    return 0;
}
