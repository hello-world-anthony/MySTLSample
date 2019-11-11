#include <array>
#include <algorithm>
#include <functional>
#include <numeric>
#include "print.h"
using namespace std;

int main()
{
	// 创建10个大小的array
	array<int, 10> a = { 11, 22, 33, 44 };

	PRINT_ELEMENTS(a);

	// 修改最后两个元素
	a.back() = 9999999;
	a[a.size() - 2] = 42;
	PRINT_ELEMENTS(a);

	// 计算所有元素的和
	cout << "sum: "
		<< accumulate(a.begin(), a.end(), 0)
		<< endl;

	// 使所有元素无效
	transform(a.begin(), a.end(),    // 七点
		a.begin(),            // 终点
		negate<int>());       // 操作
	PRINT_ELEMENTS(a);
}

