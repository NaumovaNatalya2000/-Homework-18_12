## Класс User:
##### Переменные:
- `std::string _login` - логин
- `std::string _name` - имя
- `std::string _pass` - пароль
##### Методы класса:
- конструктор по умолчанию
  `User(){};`
- конструктор с параметрами для создания нового пользователя:
  `User(std::string name, std::string login, std::string pass): _name(name), _login(login), _pass(pass){}`
Дружественные функции:
- `friend std::fstream& operator >> (std::fstream& is, User& obj);`
- `friend std::ostream& operator << (std::ostream& os, const User& obj);`
## Класс Message:
##### Переменные:
- `std::string _text;` - текст сообщения
- `std::string _sender;` - отправитель
- `std::string _receiver;` - получатель
##### Методы класса:
- конструктор по умолчанию
  `Message(){};`
- конструктор с параметрами
  `Message(std::string text, std::string sender, std::string receiver): _text(text), _sender(sender), _receiver(receiver){}`
Дружественные функции:
- `friend std::fstream& operator >> (std::fstream& is, Message& obj);`
- `friend std::ostream& operator << (std::ostream& os, const Message& obj);`
## Функции Functions:
В данном файле находится две функции:
- `std::fstream open_file(const fs::path& path, bool& file_is_new);` - функция открытия файла
