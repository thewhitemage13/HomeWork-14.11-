#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	int length;
	length = 50;
	char symbol = ' ';
	int spaces = 0;
	int wordcount = 0;
	int nospaces = 0;
	int sr = 0;
	char* name = new char[length] {};
	cout << name << "\n";
	cout << "Please, enter text: ";
	gets_s(name, length)
		;
	for (int i = 0; i < strlen(name); i++)
	{
		cout << name[i] << "";
		if (name[i] == symbol)
		{
			spaces++;
		}
	}
	cout << "\n";
	cout << "Spaces: " << spaces << "\n";
	wordcount = spaces + 1;
	cout << "Word count: " << wordcount << "\n";
	nospaces = strlen(name) - spaces;
	cout << "No spaces: " << nospaces << "\n";
	sr = nospaces / wordcount;
	cout << "Average length: " << sr << "\n";

	delete[] name;
}