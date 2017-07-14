#include <iostream>

int main()
{
    int i{2};
    i = static_cast<int>(1.112);
    i = -1;
    std::cout << "Int: " << i << std::endl;

    double d{3.149};
    std::cout << "Float: " << d << std::endl;
    i = static_cast<int>(d);
    d = i;

    unsigned int u{1};
    u = -2;

    bool flag{ true };
    flag = false;
    flag = static_cast<bool>(7);
    std::cout << "Bool: " << flag << std::endl;

    return 0;
}
