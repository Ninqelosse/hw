#include <iostream>
#include <string>
#include <memory>

using namespace std;
class BankCell {
public:
	BankCell() {
		cout << "Cell opened\n";
	}
	~BankCell() {
		cell = 0;
		cout << "Cell closed\n";
	}
	void put_money(int m) {
		cell += m;
	}
	void get_money(int m){
		if (cell - m >= 0) {
			cell -= m;
		}
		else { cout << "not enough money\n"; }
	}
	int get_Cell() {
		return cell;
	}
private:
	int cell = 0;
};
class Human {
public:
	Human(string Name) {
		this->name = Name;
		cout << name << " exists\n";
	}
	~Human(){
		cout << name << " died\n";
	}
	string get_name() {
		return name;
	}
	void set_BankCell(shared_ptr<BankCell>p) {
		ptr1 = p;
	}
	void put_money(int money) {
		ptr1->put_money(money);
	}
	void get_money(int money) {
		ptr1->get_money(money);
	}
	shared_ptr<BankCell> share_Cell() {
		return ptr1;
	}
private:
	string name;
	shared_ptr<BankCell>ptr1;
};
int main() {
	Human Ivan = Human("Ivan");
	Human Sanya= Human("Sanya");
	cout << Ivan.get_name() << "\n";;
	BankCell* bc = new BankCell();
	shared_ptr<BankCell>ptr1(bc);
	Sanya.set_BankCell(ptr1);
	Ivan.set_BankCell(Sanya.share_Cell());
	Sanya.put_money(100);
	cout << ptr1->get_Cell() << "\n";;
	Ivan.put_money(200);
	cout << ptr1->get_Cell() << "\n";;
	Sanya.get_money(10);
	Ivan.get_money(2000);
	cout << ptr1->get_Cell() << "\n";
	return 0;

}