#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main()
{
	ifstream fin;
	fin.open("task.txt");
	if (!fin.is_open())
	{
		cout << "Input file can not be opened!" << endl;
	}
	else
	{
		string s;


	}

	fin.close();
	system("pause");
}