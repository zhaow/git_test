#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <stdexcept>
//github test1
using namespace std;

int bar(vector<int>& vec);

typedef vector<int>::size_type vsz;

void
vecPrint(const vector<int>& vec)
{
	
	vsz i;
	for (i=0; i<vec.size(); i++){
		cout << vec[i];
	}
	cout << endl;
	return ;
}

int 
foo(vector<int>& vec)
{
	if (vec.size() == 0)
		throw domain_error("vector is empty");
	
	vecPrint(vec);
	vec.push_back(1);
	bar(vec);
	return vec[0];
}

int
bar(vector<int>& vec)
{
	if (vec.size() == 0)
		throw domain_error("vector is empty");
	
	vecPrint(vec);
	vec.push_back(2);
	return vec[0];
}

int 
main(int argc, char **argv)
{
	char str[5];
	char tag = 'a';
	double b=0.0;
	string tt;
	int prec;
	vector<int> abc;
	
	//abc.push_back(0);
	
	try 
	{
		foo(abc);
	} 
	catch(domain_error) 
	{
		cout << "wrong";
	}
	vecPrint(abc);
	cin >> b;
	prec = cout.precision(2);
	cout << b << " " << prec;
	cout.precision(prec);
	
	getline(std::cin, tt);
	cout << "lala" << tt;
	
	cin.get(str, 5);
	cout << "hehe" << str;
	cin.getline(str, 5);
	cout << "haha" << str;
	while (tag!='q') 
		cin.get(tag);
	system("pause");
	return 0;
}
