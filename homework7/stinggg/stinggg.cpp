#include <iostream> 
#include<string>
#include <vector>
#include <fstream>

using namespace std;

vector <string> read_from_file(string filename, vector <string>& Base) {
    ifstream in(filename, ios::in); // окрываем файл для чтения
    if (in.is_open()) {
        string line;
        while (getline(in, line)) {
            Base.push_back(line);
        }
    }
    in.close();
    return Base;
}
string make_it_right(string A) {
    string H;
    H = A.substr(0, A.find("//"));
    auto start = H.find("/*");
    auto end = H.find("*/");
    if (end > H.size()) {
        H = H.substr(0, start);
    }
    else if(start > H.size()){
        end += 2;
        H =  H.substr(end);
    }
    else {
        end += 2;
        H = H.substr(0, start) + H.substr(end);
    }
    return H;
}

void write_to_file(const std::string& filename, vector <string> msg){
    ofstream out;          // поток для записи
    out.open(filename, ios::app);     // окрываем файл для записи и перезаписывает его

    if (out.is_open()){
        for (int i = 0; i < msg.size(); i++) {
            out << msg[i] << endl;
        }
    }
    out.close();
};
int main() {
    vector <string> base;
    read_from_file("for_homework.txt", base);
    for (int i = 0; i < base.size();i++) {
        if (i != 4) {
            base[i] = make_it_right(base[i]);
        }
    }
    auto h = base[4].find("<<");
    string H = base[4].substr(0,h+2);
    string H1 = base[4].substr(h+2);
    auto h1 = H1.find("<<");
    string H2 = H1.substr(h1-2);
    string H3 = H1.substr(0, h1);
    H2 = make_it_right(H2);
    H3 = make_it_right(H3);
    base[4] = H + H3 + H2;
    for (int i = 0; i < base.size();i++) {
        cout << base[i] << endl;
    }
    write_to_file("text.txt", base);
    return 0;
}
