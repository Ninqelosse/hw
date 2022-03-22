// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <random>
#include <map>
#include <string>
double getRandomFloatingPointBetween_progressive(int min, int max) {
	std::random_device rd; // uniformly-distributed integer random number generator
	std::mt19937 gen(rd()); //инициализируем Вихрь Мерсенна случайным стартовым числом
	std::uniform_real_distribution<> dis(min, max);//uniform distribution between min and max
	return dis(gen);
}

void test_cases6(std::vector <int> &a) {
	for (int count = 0; count < 4; ++count){
		a.push_back(int(getRandomFloatingPointBetween_progressive(1, 4)));
	}

}
int main(){
	std::map <int, std::string> combinations;
	combinations[1] = "banana";
	combinations[2] = "cherry";
	combinations[3] = "monkey";
	combinations[4] = "seven";
	std::vector <int> A;
	test_cases6(A);
	std::cout << "\n";
	std::cout << "Choose 1 2 3 4";
	int a , b , c;
	std::cin >> a >> b >> c;
	/*for (int i = 0; i < 4; i++) {
		std::cout << A[i] << " ";
	}*/
	std::cout << std::endl;
	for (int i = 0; i < 4; i++) {
		std::cout << combinations[A[i]+1] << " ";
	}
	std:: cout << "\n";
	if (combinations[A[a - 1]] == combinations[A[b - 1]] && combinations[A[c - 1]] == combinations[A[b - 1]]) {
		std::cout << "You win!";
	}
	else {
		std::cout << "You lose!";
	}
	
}



