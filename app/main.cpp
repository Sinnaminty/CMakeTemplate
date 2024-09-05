#include <lib1/lib1-pub-header.h>

#include <iostream>

int main ( int, char ** ) {
    std::cout << "1 + 2 = " << lib1::sum ( 1, 2 ) << '\n';
    return 0;
}
