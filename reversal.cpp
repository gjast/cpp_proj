#include <algorithm>
#include <iostream>
#include <string>

using namespace std;
int main()
{
    std::string input_string;
    std::cout << "Enter a string only 5 symbols: ";
    std::cin >> input_string;
    (input_string.length() == 5) ? (std::reverse(input_string.begin(), input_string.end()), std::cout << input_string << std::endl) : std::cout << "string not a 5 synbol" << std::endl;
    return 0;
}
