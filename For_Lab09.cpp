/*******************************************
 * Автор: Станковский П.А.                 *
 * Дата: 29.12.2023                        *
 * Название: Shitcode Lab9 v1 Real Version *
 * https://onlinegdb.com/lbsokiTIW         *
********************************************/
#include <iostream>
using namespace std;

int main() { 
    
    int defaultYear = 2024;
    int usersYear, differenceBetweenYears;
    int lastDayOfMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int gap[12] = {0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5};
    string month[12] = {"Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь"};
    string daysOfTheWeek = {"Пн Вт Ср Чт Пт Сб Вс"};
    bool usersYearIsLeap = false;
    
    differenceBetweenYears = abs(usersYear - defaultYear);
    
    cout << "Введите год: ";
    cin >> usersYear;
    
    if (((usersYear % 4 == 0) or (usersYear % 100 == 0)) and (usersYear % 400 != 0)) {
        usersYearIsLeap = true;
        lastDayOfMonth[1] = 29;
        gap[2] = 4;
        ++differenceBetweenYears;
    }
    
    for (int IDKHTCTV = 0; IDKHTCTV < 12; ++IDKHTCTV) {
        gap[IDKHTCTV] += differenceBetweenYears % 7;
        if (gap[IDKHTCTV] >= 7) {
            gap[IDKHTCTV] -= 7;
        }
    }
    
    for (int numberOfMonth = 0; numberOfMonth < 12; ++numberOfMonth) {
        cout << month[numberOfMonth] << endl
        << daysOfTheWeek << endl;
        for (int numberOfGaps = 0; numberOfGaps < gap[numberOfMonth]; ++numberOfGaps) {
            cout << "   ";
        }
        for (int day = 1; day <= lastDayOfMonth[numberOfMonth]; ++day) {
            cout << day << " ";
            if (day < 10) {
                cout << " ";
            }
            if ((gap[numberOfMonth] + day) % 7 == 0) {
                cout << endl;
            }
        }
        cout << endl;
    }

    return 0;
}
