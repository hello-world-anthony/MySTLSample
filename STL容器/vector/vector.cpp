#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
	//�����յ�vector
	vector<string> sentence;

	//Ϊ5��Ԫ�ر����ڴ棬�Ա������·���
	sentence.reserve(5);

	//�����ϼ���Ԫ��
	sentence.push_back("hello,");
	sentence.insert(sentence.end(), { "how ","are ","you ","?" });

	//�������Ԫ��
	copy(sentence.cbegin(), sentence.cend(), ostream_iterator<string>(cout, ""));

	cout << endl;

	//��ӡһЩ����
	cout << "max_size():" << sentence.max_size() << endl;
	cout << "size():" << sentence.size() << endl;
	cout << "capacity():" << sentence.capacity() << endl;

	//������2���͵�4��Ԫ��
	swap(sentence[1], sentence[3]);

	//����Ԫ��
	sentence.insert(find(sentence.begin(), sentence.end(), "?"), "always");

	//���ģ���Ϊ��
	sentence.back() = "!";

	//���Ԫ��
	copy(sentence.cbegin(), sentence.cend(), ostream_iterator<string>(cout, ""));
	cout << endl;

	//����ڸ��ĺ��һЩ����
	cout << "size():" << sentence.size() << endl;
	cout << "capacity():" << sentence.capacity() << endl;

	//ɾ���������Ԫ��
	sentence.pop_back();
	sentence.pop_back();

	//��С����,c11
	sentence.shrink_to_fit();

	//�ٴδ�ӡһЩ�ı��˵�����
	cout << "size():" << sentence.size() << endl;
	cout << "capacity():" << sentence.capacity() << endl;

	return 0;
}