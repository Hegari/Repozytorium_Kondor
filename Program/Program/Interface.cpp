#include "Interface.h"
#include <iostream>

void Interface::showClinicList()
{
    int sizeOfList = this->listOfClinics.size();
    for (int i = 0; i < sizeOfList; i++)
    {
        std::cout << "nazwa: " << this->listOfClinics[i].name << " lokalizacja: " << this->listOfClinics[i].location << std::endl;
    };
}

void Interface::addClinic(Clinic newClinic)
{
    this->listOfClinics.push_back(newClinic); 
};

void Interface::searchVisit() {};
void Interface::signUpForVisit() {};

void Interface::choseAction()
{
    int actionNumber = 1;

    while (actionNumber > 0)
    {
        this->showInterface();
        std::cin >> actionNumber;
        switch (actionNumber)
        {
        case 1:
            this->searchVisit();
            break;

        case 2:
            //tutaj sa wywalane jakies dzikie bledy
            //std::string newClinic = "poranna klinikia";
           // std::cin >> newClinic;
           // this->addClinic(newClinic);
            break;

        case 3:
            this->showClinicList();
            break;

        case 4:
            this->signUpForVisit();
            break;

        default:
            break;
        }
    }
}
void Interface::showInterface()
{
    std::cout << "wybierz akcje\n 1. znajdz klinike\n 2. dodaj klinike\n 3. wyswietl liste klinik\n 4. zapisz sie na wizyte\n";
};

void Interface::loadData() {};

void Interface::initialize()
{
    //this->loadData();
    this->choseAction();
};