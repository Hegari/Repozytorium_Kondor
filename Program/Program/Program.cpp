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
    int day;
    int hour[];
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
    void searchVisit();
    void signUpForVisit();
    void showDeadlines();
    void locate();
    void showInterface()
    {
        std::cout << "wybierz akcje\n 1. znajdz klinike\n 2. dodaj klinike\n 3. wyswietl liste klinik\n 4. zapisz sie na wizyte";
    };
    void loadData();
    void initialize()
    {
        this->loadData();
        this->showInterface();
    };
    float findBestClinic();

private:
    std::vector<clinic> listOfClinics;

};


int main()
{
    interface interfejs;
    clinic klinika1("klinika slonca");
    clinic klinika2("klinika smierci i rozpaczy");

    //interfejs.initialize();
    interfejs.addClinic(klinika1);
    interfejs.addClinic(klinika2);
    interfejs.showClinicList();
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
