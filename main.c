#include <iostream>
#include "main.h"

int main( int argc, char * argv[] ) {
    // Call class from main.h header file
    MainClass mC;
    mC.printProgNameWithArgs( argv, argc );
    return true;
}
