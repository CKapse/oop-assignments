#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

class Student {
public:
    int rollNumber;
    string name;
    double marks;

    Student(int roll, const string& n, double m)
        : rollNumber(roll), name(n), marks(m) {}

    void display() {
        cout << "  Roll: " << setw(3) << rollNumber
             << "  |  Name: " << setw(12) << left << name
             << "  |  Marks: " << fixed << setprecision(2)
             << right << marks << "\n";
    }
};

class Classroom {
private:
    vector<Student> students;

public:
    void addStudent(int roll, string name, double marks) {
        students.emplace_back(roll, name, marks);
    }

    void displayAll() {
        if (students.empty()) {
            cout << "  No students found.\n";
            return;
        }
        cout << string(55, '-') << "\n";
        for (auto it = students.begin(); it != students.end(); ++it) {
            it->display();
        }
        cout << string(55, '-') << "\n";
    }

    double averageMarks() {
        if (students.empty()) return 0.0;
        double total = 0.0;
        for (auto it = students.begin(); it != students.end(); ++it) {
            total += it->marks;
        }
        return total / static_cast<double>(students.size());
    }

    Student& maxMarks() {
        auto maxIt = students.begin();
        for (auto it = students.begin(); it != students.end(); ++it) {
            if (it->marks > maxIt->marks) {
                maxIt = it;
            }
        }
        return *maxIt;
    }

    Student& minMarks() {
        auto minIt = students.begin();
        for (auto it = students.begin(); it != students.end(); ++it) {
            if (it->marks < minIt->marks) {
                minIt = it;
            }
        }
        return *minIt;
    }

    bool empty() { return students.empty(); }
};

int main() {
    Classroom cls;

    cls.addStudent(101, "Alice",   88.5);
    cls.addStudent(102, "Bob",     73.0);
    cls.addStudent(103, "Charlie", 95.0);
    cls.addStudent(104, "Diana",   61.5);
    cls.addStudent(105, "Ethan",   82.0);
    cls.addStudent(106, "Fiona",   55.0);

    cout << "\n========== STUDENT RECORDS ==========\n";
    cls.displayAll();

    if (!cls.empty()) {
        cout << fixed << setprecision(2);

        cout << "\nAverage Marks : " << cls.averageMarks() << "\n";

        Student& top = cls.maxMarks();
        cout << "Highest Marks : " << top.marks
             << "  ->  " << top.name
             << " (Roll " << top.rollNumber << ")\n";

        Student& low = cls.minMarks();
        cout << "Lowest  Marks : " << low.marks
             << "  ->  " << low.name
             << " (Roll " << low.rollNumber << ")\n";
    }

    cout << "\n=====================================\n";
    return 0;
}
