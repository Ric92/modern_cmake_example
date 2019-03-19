/* Example of executable */

#include <iostream>
#include <Foo.h>

int main(int argc, char const *argv[])
{
    Foo myObj(3);

    std::cout << "Foo = " << myObj.getVal() << "\n";
    myObj.sum(3);
    std::cout << "Foo = " << myObj.getVal() << "\n";

    return 0;
}


