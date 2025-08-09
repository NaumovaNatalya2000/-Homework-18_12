#include "Functions.h"
//функция для открытия файла
std::fstream open_file(const fs::path& path, bool& file_is_new){
	//если файл не найден проставляем флаг нового файла
	file_is_new = !fs::exists(path);
	
	//если файл не найден, создаем новый файл
	if(file_is_new){
		//создаем файл
		std::ofstream temp(path);
		//закрываем файл
		temp.close();
		//устанавливаем права только для владельца
		fs::permissions(path, fs::perms::owner_all);
	}
	//открываем файл на чтение и запись
	std::fstream file(path, std::ios::in | std::ios::out);
	fs::permissions(path, fs::perms::owner_all);
	return file;
}
