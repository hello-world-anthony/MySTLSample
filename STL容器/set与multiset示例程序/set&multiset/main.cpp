#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
	set<int, greater<int>> coll1;

	//插入元素以随机的顺序，使用不同的成员函数
	coll1.insert({ 4,3,5,1,6,2 });
	coll1.insert(5);

	//打印所有元素
	for (int elem : coll1)
	{
		cout << elem << ' ';
	}
	cout << endl;

	//再次插入4并且处理返回值
	auto status = coll1.insert(4);
	cout << "尝试插入4" << endl;
	if (status.second)
	{
		cout << "插入4"
			<< distance(coll1.begin(), status.first) + 1
			<< endl;
	}
	else
	{
		cout << "4已经存在了" << endl;
	}

	//所有元素升序给另一个set
	set<int> coll2(coll1.cbegin(), coll1.cend());

	//输出所有元素
	copy(coll2.cbegin(), coll2.cend(), ostream_iterator<int>(cout, " "));
	cout << endl;

	//删除3前的所有元素
	coll2.erase(coll2.begin(), coll2.find(3));
	cout << "删除3之前" << endl;
	copy(coll2.cbegin(), coll2.cend(), ostream_iterator<int>(cout, " "));
	cout << endl;

	//移除所有值为5的元素
	int num;
	num = coll2.erase(5);
	cout << "移除5" << endl;

	//输出所有元素
	copy(coll2.cbegin(), coll2.cend(), ostream_iterator<int>(cout, " "));
	cout << endl;
}