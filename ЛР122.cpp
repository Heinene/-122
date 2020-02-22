#include <iostream> 
#include <tchar.h> 
#include <string.h> 
#include <stdlib.h> 
#include <algorithm>
#include <fstream>


using namespace std;

class MPk
{
public:
	MPk()
	{
		chast = nazv[0] = 0;
	}
	void set(char naz[], double c)
	{
		strcpy_s(nazv, naz);
		chast = c;
	}
	MPk(char naz[], double c)
	{
		strcpy_s(nazv, naz);
		chast = c;
	}
	void print() 
	{   
		cout << "\nnazv: " << nazv<< "  chact=" << chast;
	}
private:
	char nazv[64];
	double chast;
};

int main()
{
	char* file = ("C:\\Users\\User\\source\\repos\\ЛР122\\rt");
	std::ifstream fin(file);
	if (!fin.is_open()) {
		std::cerr << "Error: file " << file << "is not open\n";
		return 1;
	}
	else
	{
		int n;
		cout << "n="; cin >> n;
		char Na[64]; double ch;
		MPk** ma;
		ma = new MPk * [n];
		for (int i = 0; i < n; i++)
		{
			cout << "n=" << (i + 1) << ":\n" << "nazv";
			cin >> Na;
			cout << "cha="; cin >> ch;
			ma[i] = new MPk(Na, ch);
		}

	for (int i = 0; i < n; i++) ma[i]->print();
}

