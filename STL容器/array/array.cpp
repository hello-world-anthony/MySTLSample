#include <array>
#include <algorithm>
#include <functional>
#include <numeric>
#include "print.h"
using namespace std;

int main()
{
	// ����10����С��array
	array<int, 10> a = { 11, 22, 33, 44 };

	PRINT_ELEMENTS(a);

	// �޸��������Ԫ��
	a.back() = 9999999;
	a[a.size() - 2] = 42;
	PRINT_ELEMENTS(a);

	// ��������Ԫ�صĺ�
	cout << "sum: "
		<< accumulate(a.begin(), a.end(), 0)
		<< endl;

	// ʹ����Ԫ����Ч
	transform(a.begin(), a.end(),    // �ߵ�
		a.begin(),            // �յ�
		negate<int>());       // ����
	PRINT_ELEMENTS(a);
}

