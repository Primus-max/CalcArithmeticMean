// Найти среднее арифметическое всех целых чисел от 1 до 1000

#include <iostream>
#include<windows.h>
using namespace std;


int main()
{
    SetConsoleCP(12510);
    SetConsoleOutputCP(1251);

    int border = 1000,
    accum = 0 ,
    result;

    // Вычисление суммы целых чисел от a до 500
    for (int i = 1; i <= border; ++i) 
    {
        accum += i;        
    }

    result = accum / border;

    cout << "Среднее арифметическое от 1 до 1000" << " = " << result << endl;

}