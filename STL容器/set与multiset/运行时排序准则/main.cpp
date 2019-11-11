#include <iostream>
#include <set>
#include "print.h"

using namespace std;

//运行时排序准则类型


int main()
{
	IntSet coll1 = { 4,7,5,1,6,2,5 };
	PRINTS_ELEMENTS(coll1, "coll1:");

	RuntimeCmp reverse_order(RuntimeCmp::reverse);

	IntSet coll2(reverse_order);
	coll2 = { 4,7,5,1,6,2,5 };
	PRINTS_ELEMENTS(coll2, "coll2:");

	coll1 = coll2;
	coll1.insert(3);
	PRINTS_ELEMENTS(coll1, "coll1:");

	if (coll1.value_comp() == coll2.value_comp())
	{
		cout << "coll1 and coll2 have the same sorting criterion"
			<< endl;
	}
	else
	{
		cout << "coll1 and coll2 have a different sorting criterion"
			<< endl;
	}
}