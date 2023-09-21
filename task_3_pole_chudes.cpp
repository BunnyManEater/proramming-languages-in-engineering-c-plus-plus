#include <iostream>
#include <string>
#include <windows.h>


//функиця проверки слова на корректность 

//функция для зашифровки наверное 


int main()
{
    std::string word;

    //setlocale(LC_ALL, "Russian"); // russian language works
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    std::cout << "Введие слово!\n" << std::endl;
    std::cin >> word;
    std::cout << word;


    return 0;
}   
