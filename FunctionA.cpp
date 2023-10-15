#include <cmath>
#include <iostream>
module student_1bib21072.Lab2.Variant13.Task4:FunctionA;

double RBPO::Lab2::Variant13::Task4::FunctionA(int i) {
    double result = pow(-1, i) * (1 + 3 * i) / (pow(3, i));
    return result;
}