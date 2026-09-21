include <iostream>

using namespace std;

int main()

{

    int rollNo[5];

    float marks[5];

    cout << "Enter roll number and marks of 5 students:\n";

    for (int i = 0; i < 5; i++)

    {

        cout << "\nStudent " << i + 1 << endl;

        cout << "Enter Roll No: ";

        cin >> rollNo[i];

        cout << "Enter Marks: ";

        cin >> marks[i];

    }

    cout << "\n--- Student Performance ---\n";

    for (int i = 0; i < 5; i++)

    {

        cout << "Roll No: " << rollNo[i]

             << "  Marks: " << marks[i] << endl;
    }
return 0;
}
