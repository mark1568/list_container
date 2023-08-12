#include <iostream>
#include <list>
using namespace std;

void printList(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << endl;
	}
}

void test01()
{
	list<int> l;
	l.push_back(10);
	l.push_back(40);
	l.push_back(30);
	printList(l);
}



int main()
{
	test01();
	system("pause");
	return 0;
}
