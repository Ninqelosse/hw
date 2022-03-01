// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <deque>
#include <array>
#include <list>
#include <forward_list>
#include <chrono>
#include <algorithm>
using namespace std;

int main()
{
    vector <int> vect = { 2,3,5,1,0,8,6,8,7,11, 90, 87, 67, 56, 45, 33, 44,99, 33,4, 100,200,900,300,500,600,700,1000,1200,800 };
    array <int, 30> arr = { 2,3,5,1,0,8,6,8,7,11,90, 87, 67, 56, 45, 33, 44,99, 33,4, 100,200,900,300,500,600,700,1000,1200,800 };
    deque <int> deq = { 2,3,5,1,0,8,6,8,7,11,90, 87, 67, 56, 45, 33, 44,99, 33,4,100,200,900,300,500,600,700,1000,1200,800 };
    list <int> listt = { 2,3,5,1,0,8,6,8,7,11, 90, 87, 67, 56, 45, 33, 44,99, 33,4,100,200,900,300,500,600,700,1000,1200,800 };
    forward_list <int> for_list = { 2,3,5,1,0,8,6,8,7,11, 90, 87, 67, 56, 45, 33, 44,99, 33,4,100,200,900,300,500,600,700,1000,1200,800 };
    
    auto begin = chrono::steady_clock::now();
    sort(vect.begin(), vect.end());
    getchar();
    auto end = chrono::steady_clock::now();
    auto elapsed_ms = chrono::duration_cast<chrono::milliseconds>(end - begin);
    cout << "The time: " << elapsed_ms.count() << " ms\n";
    //
    auto begin1 = chrono::steady_clock::now();
    sort(arr.begin(), arr.end());
    getchar();
    auto end1 = chrono::steady_clock::now();
    auto elapsed_ms1 = chrono::duration_cast<chrono::milliseconds>(end1 - begin1);
    cout << "The time: " << elapsed_ms1.count() << " ms\n";
    //
    auto begin2 = chrono::steady_clock::now();
    sort(deq.begin(), deq.end());
    getchar();
    auto end2 = chrono::steady_clock::now();
    auto elapsed_ms2 = chrono::duration_cast<chrono::milliseconds>(end2 - begin2);
    cout << "The time: " << elapsed_ms2.count() << " ms\n";
    //
    auto begin3 = chrono::steady_clock::now();
    //sort(listt.begin(), listt.end());
    listt.sort();
    getchar();
    auto end3 = chrono::steady_clock::now();
    auto elapsed_ms3 = chrono::duration_cast<chrono::milliseconds>(end3 - begin3);
    cout << "The time: " << elapsed_ms3.count() << " ms\n";
    //
    auto begin4 = chrono::steady_clock::now();
    //sort(for_list.begin(), for_list.end());
    for_list.sort();
    getchar();
    auto end4 = chrono::steady_clock::now();
    auto elapsed_ms4 = chrono::duration_cast<chrono::milliseconds>(end4 - begin4);
    cout << "The time: " << elapsed_ms4.count() << " ms\n";
   
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
