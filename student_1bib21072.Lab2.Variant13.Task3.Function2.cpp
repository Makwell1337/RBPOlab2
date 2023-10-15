#include <cmath>
#include <iostream>
module student_1bib21072.Lab2.Variant13.Task3;
void RBPO::Lab2::Variant13::Task3::Function2() {
    double x;
    std::cout << "Enter x >> ";
    std::cin >> x;
    double result = 0;
    if (x < 0)
        result = cos(2 * x);
    else
        result = 1 / (x * x + 1);
    std::cout << "Result equals " << result << std::endl;
}