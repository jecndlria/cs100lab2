#include "../header/c-echo.h"
#include "../header/c-count.h"

int main(int argv, char** argc) {
    std::cout << "Count of output: " << count(echo(argv,argc)) << std::endl;
}

