#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    string grade;
    int id;
};

void setName(Student &s, const string &newName) {
    s.name = newName;
}

void setGrade(Student &s, const string &newGrade) {
    s.grade = newGrade;
}

void setId(Student &s, int newId) {
    s.id = newId;
}

string getName(const Student &s) {
    return s.name;
}

string getGrade(const Student &s) {
    return s.grade;
}

int getId(const Student &s) {
    return s.id;
}

int main() {
    Student siswa = {"", "", 0}; 

    cout << getId(siswa) << endl;
    setId(siswa, 1);
    cout << getId(siswa) << endl;

    cout << getName(siswa) << endl;
    setName(siswa, "mulyono");
    cout << getName(siswa) << endl;

    cout << getGrade(siswa) << endl;
    setGrade(siswa, "A");
    cout << getGrade(siswa) << endl;

    return 0;
}
