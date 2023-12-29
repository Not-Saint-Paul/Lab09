/************************************
 * Автор: Станковский П.А.          *
 * Дата: 29.12.2023                 *
 * Название: Shitcode Lab9 v1       *
 * На эту прогу ушло около 15 минут *
 * https://onlinegdb.com/8Y32B4xAV  *
*************************************/
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
    
    int usersYear;
    
    cout << "Введите год: ";
    cin >> usersYear;
    
    for (int numberOfMonth = 1; numberOfMonth < 14; ++numberOfMonth) {
        cout << numberOfMonth << " месяц" << endl
        << "Воскресенье 1  8  15 22" << endl
        << "Понедельник 2  9  16 23" << endl
        << "Вторник     3  10 17 24" << endl
        << "Среда       4  11 18 25" << endl
        << "Четверг	    5  12 19 26" << endl
        << "Пятница	    6  13 20 27" << endl
        << "Суббота	    7  14 21 28" << endl;
        if (numberOfMonth == 6 and (usersYear % 4 == 0 or usersYear % 100 == 0)) {
            cout << "Високосный день" << endl;
        }
        if (numberOfMonth == 13) {
            cout << "Вненедельный день";
        }
    }
    
    return 0;
}
