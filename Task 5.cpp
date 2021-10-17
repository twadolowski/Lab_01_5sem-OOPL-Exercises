#include <iostream>

using namespace std;

class Student
{
    string name;
    unsigned int id;
    float grade;

public:
    Student(string name_ = "Unknown", unsigned int id_ = 0, float grade_ = 0)
        :name(name_), id(id_), grade(grade_)
    {

    }

    string get_name() {return name;}
    unsigned int get_id() {return id;}
    float get_grade() {return grade;}

    string set_name(string name_) {name = name_;}
    unsigned int set_id(unsigned int id_) {id = id_;}
    float set_grade(float grade_) {grade = grade_;}

    void print()
    {
        cout << "Students name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main()
{
    Student Jan("Jan", 1, 4.5);
    Student Ilona("Ilona", 2, 5);
    Student Adam("Adam", 3, 4);

    cout << (Adam.get_grade()+Ilona.get_grade()+Jan.get_grade())/3;
    return 0;
}
