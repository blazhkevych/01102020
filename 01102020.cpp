#include <iostream>
#include <stack>
#include <vector>
#include <list>
#include <queue>
#include <bitset>
using namespace std;

template <class T>
ostream& operator<<(ostream& stream, vector<T>& a) {
	for (auto it : a)
	{
		stream << it << ' ';
	}
	return stream;
}
int main()
{
	//stack<int>st;
	//for (size_t i = 0; i < 10; i++)
	// st.push(i);
	//while (!st.empty())
	//{
	// cout << st.top();
	// st.pop();
	//}
	//cout << endl;

	//stack<vector<int>> st2;
	//for (size_t i = 0; i < 10; i++)
	//{
	// vector<int >a;
	// a.push_back(i);
	// a.push_back(i + 1);
	// st2.push(a);
	//}
	//vector<int >b;
	//while (!(st2.empty()))
	//{
	// b = st2.top();
	// cout << "a->" << b << endl;
	// st2.pop();
	//}

	//queue<int> q;
	//for (size_t i = 0; i < 10; i++)
	// q.push(i);
	//while (!q.empty()) {
	// cout << q.front() << "\t";
	// q.pop();
	//}

	/*priority_queue<int, vector<int>> pq;
	for (size_t i = 0; i < 10; i++)
		pq.push(rand() % 50);
	while (!pq.empty()) {
		cout << pq.top() << "\t";
		pq.pop();
	}*/

	/*priority_queue<int, vector<int>, greater<int> > pq;
	for (size_t i = 0; i < 10; i++)
		pq.push(rand() % 50);
	while (!pq.empty()) {
		cout << pq.top() << "\t";
		pq.pop();
	}*/

	/*bitset <8>b(170);
	for (int i = b.size() - 1; i >= 0; i--)
		cout << b[i] << " ";*/

		/*bitset <8>b(0xff);
		for (int i = b.size() - 1; i >= 0; i--)
			cout << b[i] << " ";*/

	/*string str = "10110110";
		bitset <8>b(str);
	for (int i = b.size() - 1; i >= 0; i--)
		cout << b[i] << " ";*/

	/*string str = "10110110";
	bitset <8>b(str, 3);
	for (int i = b.size() - 1; i >= 0; i--)
		cout << b[i] << " ";*/

	/*string str = "10110110";
	bitset <8>b(str, 3, 2);
	for (int i = b.size() - 1; i >= 0; i--)
		cout << b[i] << " ";*/

	/*string str = "10110110";
	bitset <8>b(170);
	b[6] = 1;
	for (int i = b.size() - 1; i >= 0; i--)
		cout << b[i] << " ";
	b.set(6);
	cout << b;*/

	/*string str = "10110110";
	bitset <8>b(170);
	b.set(7, false);
	cout << b; */

	//string str = "10110110";
	/*bitset <8>b(170);
	b.reset();
	cout << b;*/

	//string str = "10110110";
	//bitset <8>b(170);
	//b.flip();
	//cout << b;

	/*string str = "10110110";
	bitset <8>b(170);
	b.flip();
	cout << b;*/

	/*string str = "10110110";
	bitset <8>b(170);
	cout << b.test(7);
	cout << b;*/

	/*string str = "10110110";
	bitset <8>b(170);
	b = b >> 1;
	cout << b;*/
	
	//string str = "10110110";
	//bitset <8>b(170);
	//b = ~b;
	//cout << b;

	/*string str = "10110110";
	bitset <8>b(170), a(150);
	b ^= a;
	cout << b;*/

	/*string str = "10110110";
	bitset <8>b(170), a(150);
	b |= a;
	cout << b;*/

	/*string str = "10110110";
	bitset <8>b(170), a(150);
	str = b.to_string('_');
	cout << str;*/
	
	/*string str = "10110110";
	bitset <8>b(170), a(150);
	str = b.to_string('-', '+');
	cout << str;*/

	string str = "10110110";
	bitset <8>b(170), a(150);
	str = b.to_string('-', '+');
	cout << str;

}