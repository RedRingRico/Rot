#include <iostream>
#include <GitVersion.hpp>

int main( int p_Argc, char **p_ppArgv )
{
	std::cout << "Version: 0.0.0." << GIT_ROLLINGCOUNT << " [" <<
		GIT_COMMITHASH << "] " << GIT_COMMITTERDATE << std::endl;
	return 0;
}

