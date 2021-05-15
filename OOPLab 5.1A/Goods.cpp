#include "Goods.h"
#include <sstream>
#include <Windows.h>

Goods::Goods()
{
	first = 0;
	second = 0;
}
Goods::Goods(double f, int s)
{
	first = f;
	second = s;
}
Goods::Goods(const Goods& R)
{
	first = R.first;
	second = R.second;
}
void Goods::Setfirst(double f)
{
	first = f;
}
void Goods::Setsecond(int s)
{
	second = s;
}
double Goods::Getfirst() const
{
	return first;
}
int Goods::Getsecond() const
{
	return second;
}

Goods& Goods::operator = (const Goods& R)
{
	first = R.first;
	second = R.second;

	return *this;
}
Goods::operator string() const
{
	stringstream sout;
	sout << "\nПеретворення в літерний рядок:";
	sout << "\nfirst" << first;
	sout << "\nsecond" << second;

	return sout.str();
}
ostream& operator <<(ostream& out, const Goods& R)
{
	out << "\n\nВведені вами значення:";
	out << "\nfirst = " << R.first;
	out << "\nsecond = " << R.second;

	return out;
}
istream& operator >>(istream& in, Goods& R)
{
	cout << "\nВведіть значення аргументів:";
	cout << "\nfirst = "; in >> R.first;
	cout << "\nsecond = ";in >> R.second;

	return in;

}
Goods& Goods::operator ++()
{
	++first;
	return *this;
}
Goods& Goods::operator --()
{
	--first;
	return *this;
}
Goods Goods::operator++(int)
{
	Goods a(*this);
	second++;
	return a;
}
Goods Goods::operator --(int)
{
	Goods a(*this);
	second--;;
	return a;
}
double Goods::Cost()
{
	double F = first * second;
	cout << "Ціна загалом = " << F << endl;
	return F;
}

