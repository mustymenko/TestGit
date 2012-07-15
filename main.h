using namespace std;

class MainClass {
    public:
	void printProgNameWithArgs( char**, int );
    private:
	char* programName;
	int argc;
        void setArgs( char**, int );

};

void MainClass::setArgs( char** args, int argCounter ) {
    programName = args[0];
    argc = argCounter;
}

void MainClass::printProgNameWithArgs( char** argStrArr, int argCounter ) {
    setArgs( argStrArr, argCounter - 1 );
    std::cout << "Here we have: " << programName << " with " << argc << " argument(s)." <<  endl;
    for( int i = 0; i < argc; ++i ) {
	std::cout << argStrArr[i+1] << endl;
    }
}
