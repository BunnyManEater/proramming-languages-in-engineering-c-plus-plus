#include <iostream>
#include <array>
#include <vector>

int main()
{
    // 1 - creating common []

    int a[5] = { 1,2,3,4,5 };
    std::cout << a[0];

    // 1.1 - slightly different [] 

    const int n = 5;
    int a_1[n]{};

    // 2 - creating with malloc 

    int *b;
    b = (int*)malloc(5 * sizeof(int));
    b[1] = 2;
    std::cout << b[1];

    // 3 - creating with new

    int *c{ new int[4] };
    c[2] = 3;
    std::cout << c[2];

    // 4 - creating with array
    std::array <int, 5>d;
    d[3] = 4;
    std::cout << d[3];

    //5- creating with vector 
    std::vector<int>v{ 0,0,0,0,5 };

    int *e = &v[0];
    std::cout << e[4];

    return 0;
}
