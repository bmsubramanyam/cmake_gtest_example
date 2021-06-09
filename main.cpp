#include<iostream>
#include"Adder.h"
#include"cmake_adderConfig.h"

using namespace std;

int main(int argc, char **argv)
{
	cout << "In main" << endl;
	cout << "Project Name :" << argv[0] << endl;
	cout <<	"Project Version :" << cmake_adder_VERSION_MAJOR << "." << cmake_adder_VERSION_MINOR << endl;
	Adder obj;
	cout << "Result = " << obj.add(10 , 20) << endl;
	return 0;
}
	