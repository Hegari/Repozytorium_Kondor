#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "structures.h"
class Clinic
{
public:
    Clinic(std::string clinicName);
    Clinic(std::string clinicName, std::string clinicLocation);
    std::string name, location;
    float distance;

    std::vector<doctor> doctors;

    calendar realCalendar;

    void addDoctor(doctor newDoctor);
    void showSchedule();
};

