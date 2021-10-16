#pragma once
#include "Clinic.h"
#include <string>
#include <vector>
#include <iostream>
#include "structures.h"
class Interface
{
public:
    void showClinicList();
    void addClinic(Clinic newClinic);
    void listOfAvalibleDoctors();
    void searchVisit();
    void signUpForVisit();
    void showDeadlines();
    void locate();
    void choseAction();
    void showInterface();
    void loadData();
    void initialize();
    float findBestClinic();

private:
    std::vector<Clinic> listOfClinics;
};

