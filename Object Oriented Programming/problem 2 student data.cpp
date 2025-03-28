#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        string name, grade;
        int id;

        public:
        // student(string name, int id, string grade): id(id), grade(grade), name(name) {}   
        string getName() const {
            return name;
        }
        string getGrade() const {
            return grade;
        }
        int getId() const {
            return id;
        }

        void setName(string newName){
            name = newName;
        }
        void setGrade(string newGrade){
            grade = newGrade;
        }
        void setId(int newId){
            id = newId;
        };
};

int main(){
    Student siswa;
    cout << siswa.getId() << endl;
    siswa.setId(0001);
    cout << siswa.getId() << endl;

    cout << siswa.getName() << endl;
    siswa.setName("mulyono");
    cout << siswa.getName() << endl;

    cout << siswa.getGrade() << endl;
    siswa.setGrade("A");
    cout << siswa.getGrade() << endl;

    return 0;
}
