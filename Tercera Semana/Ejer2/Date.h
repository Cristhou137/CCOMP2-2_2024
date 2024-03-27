#include <string>
#include <iostream>

using namespace std;

class date {
public:
    explicit date (int d, int m, int y)
        : day {d}, year{y} {

        if ((month < 0) || (month > 12)) {
            month = 1;
        }
    }

    void setDay(int daySet) {
        day = daySet;
    }

    int getDay() const {
        return day;
    }

    void setMont(int monthSet) {
        month = monthSet;
    }

    int getMonth() const {
        return month;
    }

    void setYear(int yearSet) {
        year = yearSet;
    }

    int getYear() const {
        return year;
    }

    void print() const {
        cout << "The day is " << day << " in the month " << month << "of the year " << year;
    }

private:
    int day{1};
    int month{1};
    int year{0};

};