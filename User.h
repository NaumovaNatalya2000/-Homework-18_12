#pragma once
#include <iostream>
#include <string>
#include <fstream>

class User{
private:
	//переменные
	std::string _name;
	std::string _login;
	std::string _pass;
public:
	//методы
	//конструктор по умолчанию
	User(){};
	//конструктор с параметрами
	User(std::string name, std::string login, std::string pass): _name(name), _login(login), _pass(pass){}
	//дружественные функции
	friend std::fstream& operator >> (std::fstream& is, User& obj);
	friend std::ostream& operator << (std::ostream& os, const User& obj);
};
