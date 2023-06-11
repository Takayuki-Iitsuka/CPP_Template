// main.cpp
// compile with: /EHsc

#define _COMMAND_LINE_

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string.h>

using namespace std;

constexpr double MY_PI = 3.141592653589793238462643; //C++11

/*
int main(int argc,      // Number of strings in array argv
		 char* argv[],   // Array of command-line argument strings
		 char* envp[])  // Array of environment variable strings
*/
int main(int argc, char* argv[], char* envp[])
{

	cout << "Hello World!" << endl;
	cout << "C++ Template..............!" << endl;
	cout << MY_PI << endl;

#ifdef _COMMAND_LINE_

	int count;

	cout << "\nCommand-line arguments:\n";
	for (count = 0; count < argc; count++)
	{
		cout << "  argv[" << count << "]   "
			<< argv[count] << "\n";
	}

#endif

#ifdef _ENVP_TEST
	bool numberLines = false; // Default is no line numbers.
	// If /n is passed to the .exe, display numbered listing
	// of environment variables.
	if ((argc == 2) && _stricmp(argv[1], "/n") == 0)
		numberLines = true;

	// Walk through list of strings until a NULL is encountered.
	for (int i = 0; envp[i] != NULL; ++i)
	{
		if (numberLines)
			cout << i << ": "; // Prefix with numbers if /n specified
		cout << envp[i] << "\n";
	}
#endif

#ifdef _DEBUG
	system("pause");
	//char hoge = getchar();
#endif

	return EXIT_SUCCESS;
}

// End
