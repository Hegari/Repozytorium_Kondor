#include "Clinic.h"

Clinic::Clinic(std::string clinicName):name(clinicName)
{

};

Clinic::Clinic(std::string clinicName, std::string clinicLocation):name(clinicName), location(clinicLocation)
{

};

void Clinic::addDoctor(doctor newDoctor)
{
    doctors.push_back(newDoctor); 
};
void Clinic::showSchedule()
{
    //”nazwa lekarza” \t  “godziny np. 11:00 \t 12:00”
    //zbigniew stonoga	zofia syfylis \t zygmunt bajgel
}