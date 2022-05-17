#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void write(const string & filename, int N){
    ofstream out;          
    string song = "Marigolds were sown by my mother in my Dawn land.";
    out.open(filename, ios::app);
    if (out.is_open()){
        for (int i = 0;i < N; i++) {
            out << to_string(i + 1)+song+ to_string(i + 1) << endl;
        }
       
    }
    out.close();
}
void read(string filename, int Number){
    ifstream in(filename, ios::in);
    if (in.is_open()){
        string line, l;
        getline(in, line);
        int n = line.length();
        in.seekg(n * (Number-1) +2*(Number-1), ios::beg);
        getline(in,l);
        cout << l << endl;
    }
  
    in.close();
}
int main(){
    string filname;
    int N, Number;
    cin >> filname >> N >> Number;
    write (filname, N);
    read(filname, Number);
        
}


