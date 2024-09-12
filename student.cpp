#include <iostream>
#include <string>

using namespace std;

class Student {
    string name;
    int rollNumber;
    string className;
    char division;
    string dateofbirth;
    string bloodGroup;
    string contactaddress;
    string telephonenumber;
    string drivinglicensenumber;

public:
    // Default constructor
    Student() : rollNumber(0), division('A') {}

    // Parameterized constructor
    Student(string name, int roll, string classn, char div, string dob, string bg, string address, string number, string license) {
        this->name = name;
        rollNumber = roll;
        className = classn;
        division = div;
        this->dateofbirth = dob;  // Corrected assignment
        bloodGroup = bg;
        contactaddress = address;
        telephonenumber = number;
        drivinglicensenumber = license;
    }

    // Copy constructor
    Student(const Student &s) {  // Added const to avoid modifying the original object
        this->name = s.name;
        rollNumber = s.rollNumber;
        className = s.className;
        division = s.division;
        dateofbirth = s.dateofbirth;
        bloodGroup = s.bloodGroup;
        contactaddress = s.contactaddress;
        telephonenumber = s.telephonenumber;
        drivinglicensenumber = s.drivinglicensenumber;
    }

    // Destructor
    ~Student() {}

    // Inline display function
    inline void display() const {
        cout << "\nName: " << name;
        cout << "\nRoll Number: " << rollNumber;
        cout << "\nClass Name: " << className;
        cout << "\nDivision: " << division;
        cout << "\nDate of Birth: " << dateofbirth;
        cout << "\nBlood Group: " << bloodGroup;
        cout << "\nContact Address: " << contactaddress;
        cout << "\nTelephone Number: " << telephonenumber;
        cout << "\nDriving License Number: " << drivinglicensenumber << endl;
    }

    friend class StudentdataBase;
};

class StudentdataBase {
    Student std[100];  // Array to hold student objects
    int count;  // Number of students currently in the database

public:
    // Constructor to initialize count
    StudentdataBase() : count(0) {}

    // Function to add a student
    void addstd(const Student &S) {  // Use const to prevent modifying the input object
        if (count < 100) {
            std[count] = S;
            count++;
        } else {
            cout << "\nThe database is full. No memory is remaining." << endl;
        }
    }

    // Function to display all students
    void display() const {
        if (count == 0) {
            cout << "\nThere is no data in the database." << endl;
        } else {
            for (int i = 0; i < count; i++) {
                std[i].display();
                cout << "--------------------------------------------------" << endl;
            }
        }
    }
};

int main() {
    StudentdataBase db;
    int choice, roll;
    string name, className, dob, blood, address, phone, license;
    char division;

    while (true) {
        cout << "\n1. Add Student \n2. Display All Students \n3. Exit ";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                // Use block braces to ensure control flow is properly managed
                cout << "\nEnter name: ";
                cin.ignore(); // To clear the input buffer
                getline(cin, name);
                cout << "Enter roll number: ";
                cin >> roll;
                cout << "Enter class name: ";
                cin.ignore(); // To clear the input buffer
                getline(cin, className);
                cout << "Enter division: ";
                cin >> division;
                cout << "Enter date of birth: ";
                cin.ignore();// To clear the input buffer
                getline(cin, dob);
                
                cout << "Enter contact address: ";
                cin.ignore(); // To clear the input buffer
                getline(cin, address);
                cout << "Enter contact number: ";
                cin >> phone;
                cout << "Enter driving license: ";
                cin >> license;

                // Create a student object and add it to the database
                Student s(name, roll, className, division, dob, blood, address, phone, license);
                db.addstd(s);
                break;
            }

            case 2:
                db.display();
                break;

            case 3:
                return 0;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}


