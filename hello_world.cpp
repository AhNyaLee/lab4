#include <iostream>
// Удаляем строку: using namespace std;

int main() {
    std::string name; // Переменная для хранения имени пользователя

    // Запрашиваем имя пользователя
    std::cout << "Введите ваше имя: "; // Выводим запрос на ввод имени
    std::cin >> name; // Считываем имя пользователя из ввода

    // Выводим приветственное сообщение с именем пользователя
    std::cout << "Hello world from " << name << std::endl; // Используем endl для перехода на новую строку

    return 0; // Завершаем программу
}