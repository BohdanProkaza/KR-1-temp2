#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Numbers
{
public:
	string name;
	int *marks;
	int points;
	~Numbers()
	{};
};
int reading_the_file(ifstream &fin, string s)
{
	getline(fin, s);
	return stoi(s);
}
Numbers* creating_the_array_of_the_objects_numbers(int n)
{
	Numbers *arr = new Numbers[n];
	for (int i = 0; i < n; i++)
	{
		arr[i].marks = new int[n];
	}
	for (int i = 0; i < n; i++)
	{
		arr[i].points = 0;
		for (int j = 0; j < n; j++)
		{
			arr[i].marks[j] = 0;
		}
	}
	return arr;
}
void filling_the_objects_of_the_array(ifstream &fin, int n, string s, Numbers* arr)
{
	int count = 0;
	int qoutes = 0;
	for (int i = 0; i < n; i++)
	{
		getline(fin, s);
		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == '"')
			{
				
			}
			else
			{

			}
		}
		count = 0;
	}
}
void console_output_of_the_input_file(int n, Numbers *arr)
{
	cout << n << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i].name << " ";
		for (int j = 0; j < n; j++)
		{
			cout << arr[i].marks[j] << " ";
		}
		cout << endl;
	}
}