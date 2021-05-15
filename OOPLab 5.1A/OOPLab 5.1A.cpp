#include <iostream>
#include "Goods.h"
#include "Windows.h"
#include <exception>;
#include <stdexcept>;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	try {
		Goods a(5.2, 4);
		cout << a;

		++a;
		cout << a;
		--a;
		cout << a;
		a++;
		cout << a;
		a--;
		cout << a;

		cout << a.operator string();
	}
	catch (exception* a) {
		cout << a->what();
	}


	return 0;
}