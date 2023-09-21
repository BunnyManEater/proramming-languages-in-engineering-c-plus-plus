#include <iostream>
#include <string>

int factorial(int i)
{
    if (i == 1) return 0;
    if (i == 2) return 1;
    else return i * factorial(i - 1);
}

bool isUint(const std::string& s) {
    return s.find_first_not_of("0123456789") == std::string::npos;
}

int large_number(int num) {
    if (num <= 100000) { return 1; }
    else { return 0; };
}


int main()
{
    std::string number_string;
    int int_number = 0;

    std::cout << "type an integer number (less than 100 000, positive, !\n";
    std::cin >> number_string;

    if (isUint(number_string) == 0) {
        std::cout << "did u actually type an integer positive number? I dont think so! try again\n";
        exit(0);
    }
    if (isUint(number_string) == 1) { int_number = stoi(number_string); }

    if (large_number(int_number) == 0) {
        std::cout << "Oi, this number is too big, type a smaller one ;)\n";
        exit(0);
    }
    if (large_number(int_number) == 1){
        std::cout << "there is ur factorial!\n" << factorial(int_number);
    }

    return 0;
}

