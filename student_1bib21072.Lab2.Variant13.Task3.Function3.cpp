#include <cmath>
#include <iostream>
module student_1bib21072.Lab2.Variant13.Task3;
void RBPO::Lab2::Variant13::Task3::Function3() {
    std::cout << "Enter the number of iterations(n) >> ";
    int n;
    std::cin >> n;
    double sum = 0.0;
    int i = 0;
    while (i <= n) {
        sum += FunctionA(i);
        i++;
    }
    std::cout << "Result of f3(" << n << ") equals" << sum << std::endl;
}