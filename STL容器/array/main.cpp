#include "print.h"

int main()
{
	array a = { 11,22,33,44 };

	print(a);
	a.back() = 999999;
	a[a.size() - 2] = 42;
	print(a);

	cout << "sum: " << accumulate(a.begin(), a.end(), 0);

	transform(a.begin(), a.end(), a.begin(), negate());
	print(a);
}