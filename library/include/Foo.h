#ifndef FOO_H
#define FOO_H

class Foo
{
private:
    int val = -1;
public:
    Foo(int _val);
    void sum(int _val);
    int getVal(){ return val;}
};

#endif