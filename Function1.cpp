#include <cmath>
#include <iostream>
module student_1bib21072.Lab2.Variant13.Task4:Function1;

void RBPO::Lab2::Variant13::Task4::Function1() {
    double x, y;
    std::cout << "Enter x, y >> ";
    std::cin >> x >> y;
    if (cos(x) - sin(2 * y - x) == 0)
        std::cout << "Error: denominator equals 0";
    else
    {
        double result = (sin(x) + cos(2 * y - x)) / (cos(x) - sin(2 * y - x));
        std::cout << "Result equals " << result << std::endl;
    }
}