#include <iostream>
#include <set>

int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "Введите число элементов: ";
    int num, elem;
    std::cin >> num;

    std::set<int> m;

    for (int i = 0; i < num; i++) {
        std::cout << "Введите " << i + 1 << "-й элемент: ";
        std::cin >> elem;
        m.insert(elem);
    }

    std::cout << std::endl;

    std::set<int>::reverse_iterator itr;

    for (auto itr = m.rbegin(); itr != m.rend(); itr++) {
        std::cout << *itr << std::endl;
    }

    return 0;
}