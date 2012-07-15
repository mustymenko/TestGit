using namespace std;

class MainClass {
    public:
	void printProgNameWithArgs( char**, int );
    private:
	char* programName;
	int argc;
        void setArgs( char**, int );

};

void MainClass::setArgs( char** args, int argc ) {
    programName = args[0];
    argc = argc;
}

void MainClass::printProgNameWithArgs( char** args, int argc ) {
    setArgs( args, argc );
    std::cout << "Here we have: " << programName << " with " << ( argc - 1 ) << " argument(s)." <<  endl;
    for( int i = 1; i < argc; ++i ) {
	std::cout << args[i] << endl;
    }
}
