#include <iostream>
#include <cmath>

int main() {
    // Координаты точек
    double N1 = 1275.43, E1 = 2649.72;
    double N2 = 2753.64, E2 = 3149.57;

    // Погрешности координат
    double mN1 = 0.12, mE1 = 0.17;
    double mN2 = 0.08, mE2 = 0.11;

    // Длина между точками
    double length = std::sqrt(std::pow(N2 - N1, 2) + std::pow(E2 - E1, 2));

    // Погрешность длины
    double mLength = std::sqrt(std::pow(mN1, 2) + std::pow(mE1, 2) + std::pow(mN2, 2) + std::pow(mE2, 2));

    // Знаменатель относительной погрешности
    double relativeErrorDenominator = mLength / length;

    std::cout << "Знаменатель относительной погрешности: " << relativeErrorDenominator << std::endl;

    return 0;
}