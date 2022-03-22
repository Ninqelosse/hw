// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <set>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <chrono>
using namespace std;


int main() {
	int N;
	cin >> N;
	vector <int> a;
	vector <int> test_1;
	set <int> test_2;
	for (int i = 0; i < N; i++) {
		a.push_back(rand());
	}
	//cout << "a = {";
	/*for (int i = 0; i < N; i++) {
		cout << a[i] << ", ";
	}
	cout << "}\n";*/
	auto begin = chrono::steady_clock::now();
	test_1 = a;
	sort(test_1.begin(), test_1.end());
	auto end = chrono::steady_clock::now();
	auto ms = chrono::duration_cast<chrono::milliseconds>(end - begin);

	//cout << "test_1 = {";
	/*for (int i = 0; i < N; i++) {
		cout << test_1[i] << ", ";
	}
	cout << "}\n";*/
	cout << "The time of test_1 is: " << ms.count() << " ms\n";
	auto begin1 = chrono::steady_clock::now();
	for (int i = 0; i < N; i++) {
		test_2.insert(a[i]);
	}
	auto end1 = chrono::steady_clock::now();
	auto ms1 = chrono::duration_cast<chrono::milliseconds>(end1 - begin1);
	//cout << "test_2 = {";
	/*for (auto i = test_2.begin(); i != test_2.end(); i++) {
		cout << *i << ", ";
	}
	cout << "}\n";*/
	cout << "The time of test_2 is: " << ms1.count() << " ms\n";
}
