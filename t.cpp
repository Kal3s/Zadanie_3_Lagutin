// t.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    int b[3][3] = {
        {123,76,34},
        {45,345,453},
        {124,75,4}
    };
    int min = b[0][0];
    int max = 0;
    int sum;

    for (int i = 0; i < 3; i++) {
        for (int I = 0; I < 3; I++) {
            if (b[i][I] < min) {
                min = b[i][I];
            }
            if (b[i][I] > max) {
                max = b[i][I];
            }
        }
    }
    sum = min + max;
    cout << "Min: \t" << min << endl;
    cout << "Max: \t" << max << endl;
    cout << "Sum: \t" << sum << endl;
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
