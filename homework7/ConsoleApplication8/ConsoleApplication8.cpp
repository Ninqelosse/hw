// ConsoleApplication8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <filesystem>
#include <iostream>
#include <fstream>
#include <istream>
#include <vector>
#include<string>
#include <ostream>
#include "json.hpp"

using nlohmann::json;

int main(){
	system("chcp 65001");
	std::filesystem::path path_input = "person.json";
	std::fstream fin(path_input.string(), std::ios::out);

	
	json map;
	std::string a, b, c;
	std::cin >> a >> b >> c;
	map["Name"] = a;
	map["Surname"] = b;
	map["Age"] = c;
    
	fin << map;

	fin.close();

}

 
