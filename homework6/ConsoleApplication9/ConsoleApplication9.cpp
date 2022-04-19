

#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <unordered_set>
using namespace std;
void print(vector<int>& a) {
	for (int i = 0; i < a.size();i++) {
		cout << a[i] << " ";
	}
	cout << "\n";
}
double getRandomFloatingPointBetween_progressive(int min, int max) {
	random_device rd; 
	mt19937 gen(rd()); 
	uniform_real_distribution<> dis(min, max);
	return dis(gen);
}
void make_it_random(vector <int> & BASE) {
	vector<int>c = BASE;
	unordered_set <int> numbers;
	while ( numbers.size()< c.size()) {
		numbers.insert(int(getRandomFloatingPointBetween_progressive(0, c.size())));
	}
	auto it = numbers.begin();
	for (int i = 0; i < c.size();i++) {
		BASE[i] = c[*it];
		it++;
	}

}

int main(){
	vector <int> base = { 2,3,9,6,8,7,1,8 };
	int N = int(getRandomFloatingPointBetween_progressive(1, 10));
	cout << N << endl;
	for (int i = 0;i < N; i++) {
		int a;
		cin >> a;
		base.push_back(a);
	}
	//print(base);
	make_it_random(base);
	//print(base);
	unordered_set <int> AA;
	for (int i = 0; i < base.size();i++) {
		AA.insert(base[i]);
	}
	base.clear();
	for (auto it = AA.begin();it != AA.end();it++) {
		base.push_back(*it);
	}
	//print(base);
	int k = 0;
	for (int i = 0; i < base.size();i++) {
		if (base[i] % 2 == 1) {
			k++;
		}
	}
	cout << k << endl;
	cout << "min: " << *min_element(base.begin(), base.end()) << " max: " << *max_element(base.begin(), base.end()) << endl;
	/*cout << count(base.begin(), base.end(), [](int& a) {
		if (a % 2 == 1) return true;
		else return false;
		});*/
	for (int i = 0;i < base.size();i++) {
		if (base[i] == 1 or base[i] == 2 or base[i] == 3 or base[i] == 5 or base[i] == 7) {
			cout << "Yes, it is " << base[i] << endl;
			break;
		}
	}
	for (int i = 0; i < base.size();i++) {
		base[i] *= base[i];
	}
	//print(base);
	vector <int> base1;
	for (int i = 0; i < base.size();i++) {
		base1.push_back(int(getRandomFloatingPointBetween_progressive(0, 100)));
	}
	//print(base1);
	int sum = 0;
	for (int i = 0; i < base1.size();i++) {
		sum += base1[i];
	}
	cout << "sum = " << sum << endl;
	int num = int(getRandomFloatingPointBetween_progressive(1, base1.size() - 1));
	//cout << num << endl;
	for (int i = 0; i < num; i++) {
		base1[i] = 1;
	}
	//print(base1);
	vector <int> base2;
	for (int i = 0; i < base.size();i++) {
		base2.push_back(base[i] - base1[i]);
	}
	//print(base2);
	for (int i = 0; i < base2.size();i++) {
		if (base2[i] < 0) {
			base2[i] = 0;
		}
	}
	//print(base2);
	//cout << "----------------\n";
	auto it = base2.begin();
	base2.erase(find(base2.begin(), base2.end(), 0));
	//cout << "----------------\n";
	while (find(base2.begin(), base2.end(), 0) != base2.end()) {
		base2.erase(find(base2.begin(), base2.end(), 0));
	}
	//print(base2);
	reverse(base2.begin(), base2.end());
	//print(base2);
	vector <int> copy_base2 = base2;
	sort(copy_base2.begin(), copy_base2.end(), [](int& a, int& b) {
		return b < a;
		});
	//print(copy_base2);
	cout << copy_base2[0] << " " << copy_base2[1] << " " << copy_base2[2] << endl;
	sort(base.begin(), base.end());
	sort(base1.begin(), base1.end());
	vector<int> base3 = base;
	for (int i = 0; i < base1.size();i++) {
		base3.push_back(base1[i]);
	}
	sort(base3.begin(), base3.end());
	//print(base3);
	for (int i = 0; i < base3.size();i++) {
		if (base3[i] != 1) {
			cout << "i=" << i << endl;
			break;
		}
	}
	print(base);
	print(base1);
	print(base2);
	print(base3);
}

