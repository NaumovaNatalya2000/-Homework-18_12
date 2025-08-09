#pragma once
#include <iostream>
#include <string>
#include <filesystem>
#include <fstream>

class Message{
private:
	std::string _text;
	std::string _sender;
	std::string _receiver;
public:
	//конструктор по умолчанию
	Message(){};
	//конструктор
	Message(std::string text, std::string sender, std::string receiver): _text(text), _sender(sender), _receiver(receiver){}
	friend std::fstream& operator >> (std::fstream& is, Message& obj);
	friend std::ostream& operator << (std::ostream& os, const Message& obj);
};

