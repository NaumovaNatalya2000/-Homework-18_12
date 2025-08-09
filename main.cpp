#include <iostream>
#include <fstream>
#include <filesystem>
#include "User.h"
#include "Message.h"
#include "Functions.h"

namespace fs = std::filesystem;
int main(){
	//переменная путь файла user и message
	fs::path user_path = "user.txt";
	fs::path message_path = "message.txt";
	
	bool is_new_user, is_new_message;
	std::fstream user_file = open_file(user_path, is_new_user);
	std::fstream message_file = open_file(message_path, is_new_message);

	//если файл только что создан записываем тестовые данные
	if(is_new_user){
		User test_user("Natalya", "vfjv323", "hbcn32hb");
		user_file << test_user;
		user_file.flush();
		std::cout << "New data user: " << test_user << std::endl;
	}
	//иначе читаем существующего пользователя
	else{
		User user_basic;
		user_file.seekg(0, std::ios::beg);
		user_file >> user_basic;
		std::cout << "Existing data user: " << user_basic << std::endl;
	}
	
	if(is_new_message){
		Message test_message("Hello", "Sergey", "Natalya");
		message_file << test_message;
		message_file.flush();
		std::cout << "New data message: " << test_message << std::endl;
	}
	else{
		Message message_basic;
		message_file.seekg(0, std::ios::beg);
		message_file >> message_basic;
		std::cout << "Existing data message: " << message_basic << std::endl;
	}

	//закрытие файлов
	message_file.close();
	user_file.close();
}
