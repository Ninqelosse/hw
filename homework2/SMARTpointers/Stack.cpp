#include <iostream>
#include <string>
#include <stack>
using namespace std;
void printStack(stack<int>& a) {
	stack <int> b = a;
	stack <int> c;
	for (int i = 0; i < a.size(); i++) {
		c.push(b.top());
		//cout << c.top() << "\n";
		b.pop();
	}
	cout << c.size() << "---\n";
	for (int i = 0; i < c.size();i++) {
		cout << c.top() << "--" << i << "\n";
		c.pop();
	}
}
using namespace std;

int main() {
	stack <int> v;
	for (int i = 0; i < 18;i++) {
		v.push(i);
	}
	printStack(v);

	return 0;

}