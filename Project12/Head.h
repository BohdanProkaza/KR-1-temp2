#pragma once
using namespace std;
class Numbers;
int reading_the_file(ifstream &fin, string s);
Numbers* creating_the_array_of__numbers(int n);
void filling_the_objects_of_the_array(ifstream &fin, int n, string s, Numbers* arr);
void console_output_of_the_input_file(int n, Numbers *arr);