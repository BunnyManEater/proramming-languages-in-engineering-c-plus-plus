#include <iostream>
#include <string>

int fib(int i)
{
    if (i == 1) return 0;
    if (i == 2) return 1;
    else return fib(i - 1) + fib(i - 2);
}

bool isUint(const std::string& s) {
    return s.find_first_not_of("0123456789") == std::string::npos;
}

int large_number(int num) {
    if (num <= 100 and num !=0) { return 1; }

    else { return 0; };
}


int main()
{
    std::string number_string;
    int int_number = 0;

    std::cout << "type an integer number between 1 and 100!\n";
    std::cin >> number_string;

    if (isUint(number_string) == 0) {
        std::cout << "did u actually type an integer positive number? I dont think so! try again\n";
        exit(0);
    }
    if (isUint(number_string) == 1) { int_number = stoi(number_string); }

    if (large_number(int_number) == 0) {
        std::cout << "Ur number must be between 1 and 100! ;)\n";
        exit(0);
    }
    if (large_number(int_number) == 1) {
        std::cout << "there is Fibonacci sequence!\n";
        
        for (int k = 1; k <= int_number; k++) {
            std::cout << fib(k) << " ";
        }
    }

    return 0;
}
