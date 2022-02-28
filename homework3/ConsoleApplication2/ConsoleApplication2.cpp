// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> a;
    vector <int> our_vector_size;
    vector <int> our_vector_cap;
    our_vector_size.push_back(a.size());
    our_vector_cap.push_back(a.capacity());
    for (int i = 0; i < 500; i++) {
        a.push_back(1);
        our_vector_size.push_back(a.size());
        our_vector_cap.push_back(a.capacity());
    }
    for (int i = 0;i < our_vector_size.size(); i++) {
        cout << our_vector_size[i] << " ";
    }
    cout <<"-----" << endl;
    for (int i = 0;i < our_vector_cap.size(); i++) {
        cout << our_vector_cap[i] << " "; // капасити растет неравномерно и что странно, не по степеням двойки
    }
    vector <int> b;
    vector <int> our_vector_size1;
    vector <int> our_vector_cap1;
    b.reserve(500);
    for (int i = 0; i < 500; i++) {
        b.push_back(1);
        our_vector_size1.push_back(b.size());
        our_vector_cap1.push_back(b.capacity());
    }
    for (int i = 0;i < our_vector_size1.size(); i++) {
        cout << our_vector_size1[i] << " ";
    }
    cout << "-----" << endl;
    for (int i = 0;i < our_vector_cap1.size(); i++) {
        cout << our_vector_cap1[i] << " "; // размер всегда 500
    }
    vector <int> c;
    //c.reserve(10000000000); // возникает ошибка, что логично

}

