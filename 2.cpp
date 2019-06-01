#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void printStringArray(string word[], int size)
{
	for (int i = 0; i < size; i++)
		cout << word[i] << endl;
}


int main()
{
	int i = 0;
	string text;
	getline(cin,text);
	stringstream ss(text);

	string word[10];

	while (!ss.eof())
	{
		ss >> word[i++];
	}
	printStringArray(word, i);
	cout << text.insert(text.length(),"!!") << endl;
	return 0;
}