#include <iostream> 
#include <ctime>

int main()
{
    time_t t;
    time(&t);
    std::cout << ctime(&t) << std::endl;
    return 0;
}