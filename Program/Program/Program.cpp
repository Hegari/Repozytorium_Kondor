// Program.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
#include <vector>

struct personalData {
    std::string forename;
    std::string surname;
    int pesel;
};

struct calendar {
    int day=0, month=0, year=0;
    std::string hour[96];
};

class doctor
{
public:
    personalData docData;
    calendar docCalendar;
};

class clinic
{
public:
    clinic(std::string clinicName) :name(clinicName) {}
    clinic(std::string clinicName, std::string clinicLocation) :name(clinicName), location(clinicLocation) {}
    std::string name, location;
    float distance;

    std::vector<doctor> doctors;

    calendar realCalendar;

    void addDoctor(doctor newDoctor) { doctors.push_back(newDoctor); };
    void showSchedule()
    {
        //”nazwa lekarza” \t  “godziny np. 11:00 \t 12:00”
        //zbigniew stonoga	zofia syfylis \t zygmunt bajgel
    }
};



class interface
{
public:
    void showClinicList()
    {
        int sizeOfList = listOfClinics.size();
        for (int i = 0; i < sizeOfList; i++)
        {
            std::cout << "nazwa: " << listOfClinics[i].name << " lokalizacja: " << listOfClinics[i].location << std::endl;
        };

    };
    void addClinic(clinic newClinic) { listOfClinics.push_back(newClinic); };
    void listOfAvalibleDoctors();
    void searchVisit() {};
    void signUpForVisit() {};
    void showDeadlines();
    void locate();

    void choseAction()
    {
        int actionNumber = 1;

       while(actionNumber>0)
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
    void showInterface()
    {
        std::cout << "wybierz akcje\n 1. znajdz klinike\n 2. dodaj klinike\n 3. wyswietl liste klinik\n 4. zapisz sie na wizyte\n";
    };
    void loadData();
    void initialize()
    {
        //this->loadData();
        this->choseAction();
    };
    float findBestClinic();

private:
    std::vector<clinic> listOfClinics;

};


int main()
{
    interface interfejs;
    clinic klinika1("klinika slonca", "sloneczna 3");
    clinic klinika2("klinika smierci i rozpaczy", "cmentarna 666");

    //interfejs.initialize();
    interfejs.addClinic(klinika1);
    interfejs.addClinic(klinika2);
    interfejs.showClinicList();
    interfejs.initialize();
    return 0;
}
// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
