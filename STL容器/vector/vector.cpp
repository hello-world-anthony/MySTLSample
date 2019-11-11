#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
	//创建空的vector
	vector<string> sentence;

	//为5个元素保留内存，以避免重新分配
	sentence.reserve(5);

	//附加上几个元素
	sentence.push_back("hello,");
	sentence.insert(sentence.end(), { "how ","are ","you ","?" });

	//输出所有元素
	copy(sentence.cbegin(), sentence.cend(), ostream_iterator<string>(cout, ""));

	cout << endl;

	//打印一些数据
	cout << "max_size():" << sentence.max_size() << endl;
	cout << "size():" << sentence.size() << endl;
	cout << "capacity():" << sentence.capacity() << endl;

	//交换第2个和第4个元素
	swap(sentence[1], sentence[3]);

	//插入元素
	sentence.insert(find(sentence.begin(), sentence.end(), "?"), "always");

	//最后的？改为！
	sentence.back() = "!";

	//输出元素
	copy(sentence.cbegin(), sentence.cend(), ostream_iterator<string>(cout, ""));
	cout << endl;

	//输出在更改后的一些数据
	cout << "size():" << sentence.size() << endl;
	cout << "capacity():" << sentence.capacity() << endl;

	//删除最后两个元素
	sentence.pop_back();
	sentence.pop_back();

	//减小容量,c11
	sentence.shrink_to_fit();

	//再次打印一些改变了的属性
	cout << "size():" << sentence.size() << endl;
	cout << "capacity():" << sentence.capacity() << endl;

	return 0;
}