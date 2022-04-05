// ConsoleApplication7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <random>
using namespace std;
double getRandomFloatingPointBetween_progressive(int min, int max) {
    random_device rd; // uniformly-distributed integer random number generator
    mt19937 gen(rd()); //инициализируем Вихрь Мерсенна случайным стартовым числом
    uniform_real_distribution<> dis(min, max);//uniform distribution between min and max
    return dis(gen);
}
int random_strike(int Strength) {
    return int(getRandomFloatingPointBetween_progressive(1, Strength));

}
class Hero {
public:
    Hero(string Name, int Health, int Strength) {
        name = Name;
        health = Health;
        strength = Strength;
    }
    ~Hero() {
    }
    void strike(Hero& otherHero) {
        int Strength = random_strike(strength);
        if (otherHero.health - Strength > 0) {
            otherHero.health -= Strength;
        }
        else {
            cout << "Hero " << otherHero.name << " dead" << endl;
        }
        cout << otherHero.name << ": " << otherHero.health << endl;
    }
private:
    string name;
    int health;
    int strength;
};

int main(){
    Hero Aragorn("Aragorn", 100, 10);
    Hero Sayron("Sayron", 2000, 50);
    Sayron.strike(Aragorn);
    Aragorn.strike(Sayron);
    Sayron.strike(Aragorn);

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
