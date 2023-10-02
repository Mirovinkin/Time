// Time.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iostream>
#include <string>
#include <math.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
#include <typeinfo>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
//#include <cstdlib>
#include <ctype.h>
#include <time.h>

using namespace std;

class timeCounter
{
private:
    tm *_time;
    int _second;
    int _minute;
    int _hour;


public:
    timeCounter() {
        _second = _time->tm_sec;
        _minute = _time->tm_min;
        _hour = _time->tm_hour;
    }

    void currentTimePrint() {
        cout << _hour << ":" << _minute << ":" << _second;
    }

};

int main()
{
    setlocale(LC_ALL, "RUS");
    time_t ltime;
    tm* t;
    time(&ltime);
    t = localtime_s(&ltime);
}
