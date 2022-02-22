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
	while(!c.empty()) {
		cout << c.top() << "--" << "\n";
		c.pop();
	}
}
void printStack1(stack<int>& a) {
	stack <int> b = a;
	stack <int> c;
	for (int i = 0; i < a.size(); i++) {
		c.push(b.top());
		//cout << c.top() << "\n";
		b.pop();
	}
	cout << c.size() << "---\n";
	int n = c.size();
	for (int i = 0;i < n;i++) {
		//cout << c.size() << "smth \n";
		cout << c.top() << "--" << "\n";
		c.pop();
	}
}
using namespace std;

int main() {
	stack <int> v;
	for (int i = 0; i < 18;i++) {
		v.push(i);
	}
	printStack1(v);
	printStack1(v);
	return 0;

}