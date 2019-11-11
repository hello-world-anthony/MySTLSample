#pragma once
#include <set>
#include <iostream>
#include <string>
#include "RuntimeCmp.h"
using namespace std;

typedef set<int, RuntimeCmp> IntSet;

void PRINTS_ELEMENTS(IntSet coll,string str)
{
	cout << str << endl;
	for (auto& x : coll)
	{
		cout << x << " ";
	}
	cout << endl;
}



