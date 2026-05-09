/*#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int prn;
    int rollNo;

    void getData() {
        cout << "Enter Name   : ";
        cin >> name;
        cout << "Enter PRN    : ";
        cin >> prn;
        cout << "Enter Roll No: ";
        cin >> rollNo;
    }

    void writeToFile(ofstream &file) {
        file << "Name   : " << name << endl;
        file << "PRN    : " << prn << endl;
        file << "Roll No: " << rollNo << endl;
        file << "--------------------------" << endl;
    }

    void display() {
        cout << "Name   : " << name << endl;
        cout << "PRN    : " << prn << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
    int n;
    cout << "How many students? ";
    cin >> n;

    Student students[n];  

    ofstream writeFile("student.txt");

    if (!writeFile.is_open()) {
        cout << "Error: Could not open student.txt" << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "\n--- Enter details for Student " << i + 1 << " ---" << endl;
        students[i].getData();
        students[i].writeToFile(writeFile);
    }

    writeFile.close();
    cout << "\nData saved to student.txt successfully!" << endl;

    cout << "\nReading from student.txt" << endl;

    ifstream readFile("student.txt");

    if (!readFile.is_open()) {
        cout << "Error: Could not read student.txt" << endl;
        return 1;
    }

    string line;
    while (getline(readFile, line)) {
        cout << line << endl;
    }

    readFile.close();

    return 0;
}
*/
/*
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    string prn;
    string rollNo;

    void readFromFile(ifstream &file) {
        getline(file, name);
        getline(file, prn);
        getline(file, rollNo);
    }

    
    void display() {
        cout << "Name   : " << name << endl;
        cout << "PRN    : " << prn << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {

    ifstream readFile("student.txt");

    if (!readFile.is_open()) {
        cout << "Error: Could not open student.txt" << endl;
        return 1;
    }

    cout << "--- Student Data ---" << endl;

    Student s;
    string blank;

    while (!readFile.eof()) {
        s.readFromFile(readFile);
        if (s.name.empty()) break;   
        s.display();
        getline(readFile, blank);    
    }

    readFile.close();

    return 0;
}

*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    string prn;
    string rollNo;

    void readFromFile(ifstream &file) {
        getline(file, name);
        getline(file, prn);
        getline(file, rollNo);
    }

    void display() {
        cout << "Name   : " << name << endl;
        cout << "PRN    : " << prn << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "--------------------------" << endl;
    }

    void writeToFile(ofstream &file) {
        file << "Name   : " << name << endl;
        file << "PRN    : " << prn << endl;
        file << "Roll No: " << rollNo << endl;
        file << "--------------------------" << endl;
    }
};

int main() {

    ifstream readFile("student.txt");

    if (!readFile.is_open()) {
        cout << "Error: Could not open student.txt" << endl;
        return 1;
    }

    ofstream writeFile("output.txt");

    if (!writeFile.is_open()) {
        cout << "Error: Could not create output.txt" << endl;
        return 1;
    }

    cout << "--- Student Data ---" << endl;

    Student s;
    string blank;

    while (!readFile.eof()) {
        s.readFromFile(readFile);
        if (s.name.empty()) break;     
        s.display();                   
        s.writeToFile(writeFile);      
        getline(readFile, blank);     
    }

    readFile.close();
    writeFile.close();

    cout << "\nData also saved to output.txt successfully!" << endl;

    return 0;
}