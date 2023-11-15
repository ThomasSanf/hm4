#include <iostream>

int addByOne(int &xRef);

int main()
{
    int x = 100;
    int y = addByOne(x);
    std::cout << "x=" << x << std::endl;
    system("pause");
    return 0;
}

int addByOne(int &xRef)
{
    ++xRef; // Increment the value of xRef
    std::cout << "xRef=" << xRef << std::endl;
    return xRef; // Return the incremented value
}
