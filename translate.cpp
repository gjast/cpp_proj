#include <iostream>

extern double celsius;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

static double fahrenheit;

int main() {
    auto humanInput = 0.0;

    std::cout << "Введите температуру в Цельсиях: ";
    std::cin >> humanInput;

    celsius = humanInput;

    register double tempCelsius = celsius;

    fahrenheit = celsiusToFahrenheit(tempCelsius);

    std::cout << tempCelsius << " °C = " << fahrenheit << " °F" << std::endl;

    return 0;
}

double celsius = 0.0;
