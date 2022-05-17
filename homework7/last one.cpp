#include <iostream>
#include <chrono>
#include <fstream>
#include <iomanip>
#include <filesystem>

using namespace std;
using namespace std::filesystem;
using namespace std::chrono_literals;



	
void view_directory(const path& path){
	if (exists(path) && is_directory(path)){
		for (const auto& entry : directory_iterator(path)){
			auto file_name = entry.path().filename().string();

			cout << file_name << endl;
			
			auto ftime = last_write_time(file_name);
			
			const auto systemTime = std::chrono::clock_cast<std::chrono::system_clock>(ftime);
			const auto time = std::chrono::system_clock::to_time_t(systemTime);
			cout << time << endl;
		}
	}
}
int main(){
	string A;
	cin >> A;
	path path = A;
	view_directory(path);
}
