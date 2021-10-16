#pragma once
#include <string>
struct personalData {
    std::string forename;
    std::string surname;
    int pesel;
};

struct calendar {
    int day = 0, month = 0, year = 0;
    std::string hour[96];
};

class doctor
{
public:
    personalData docData;
    calendar docCalendar;
};

