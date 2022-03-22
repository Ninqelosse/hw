

#include <iostream>
#include <random>
using namespace std;
double getRandomFloatingPointBetween_progressive(int min, int max) {
	random_device rd; // uniformly-distributed integer random number generator
	mt19937 gen(rd()); //инициализируем Вихрь Мерсенна случайным стартовым числом
	uniform_real_distribution<> dis(min, max);//uniform distribution between min and max
	return dis(gen);
}
void testing(vector <float> &a, int N) {
	for (int count = 0; count < N; ++count){
		a.push_back(getRandomFloatingPointBetween_progressive(-2, 2));
	}
}
int main(){
	int N;
	cin >> N;
	vector <float> test;
	testing(test, N);
	for (int i = 0; i < N; i++) {
		cout << test[i] << " ";
	}
	cout << endl;
	sort(test.begin(), test.end(), [](double a, double b) {
		return abs(a) < abs(b);
		});
	for (int i=0; i<N; i++){
		cout << test[i] << " ";
	}
	cout << endl;
}

