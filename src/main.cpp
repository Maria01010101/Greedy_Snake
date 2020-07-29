#include "test.hpp"

int main(int argc, char const *argv[])
{
    test a = test();
    std::cout << a.add(1, 2) << std::endl;
    return 0;
}
