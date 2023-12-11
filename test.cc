#include <iostream>
#include "main.cc"

int main()
{
    Vector<double> a;
    a.input_from_keyboard();

    Vector<double> b = find_pu_vector(a);
    std::cout << "Perpendicular unit vector: " << b << std::endl;

    return 0;
}
