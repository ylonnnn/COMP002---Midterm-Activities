#include <iostream>

using namespace std;

int main()
{
    cout << "Welcome to SCHOLARSHIP ELIGIBILITY CHECKER" << endl;

    float gpa;
    int creditHrs, extraCurri;

    cout << "Enter GPA: " << endl;
    cin >> gpa;
    if (cin.fail())
    {
        cout << "Please enter a valid number!" << endl;
        cin.clear();

        return -1;
    }

    cout << "Enter completed credit hours: " << endl;
    cin >> creditHrs;
    if (cin.fail())
    {
        cout << "Please enter a valid number!" << endl;
        cin.clear();

        return -1;
    }

    cout << "Enter the number of extra curricular activities: " << endl;
    cin >> extraCurri;
    if (cin.fail())
    {
        cout << "Please enter a valid number!" << endl;
        cin.clear();

        return -1;
    }

    // If the GPA is lower than or equal to 1.25, OR the GPA is lower than or equal to 1.5 and the completed credit hours is greater than or equal to 40
    // Proceed
    if (gpa <= 1.25 || (gpa <= 1.5 && creditHrs >= 40))
    {
        cout << "The student is eligible for the University Scholarship!" << endl;

        return 0;
    }

    // Otherwise, if the GPA is lower than or equal to 2.0, AND the completed credit hours is greater than or equal to 30
    // AND the extracurricular activities completed is greater than or equal to 2, proceed
    else if (gpa <= 2.0 && creditHrs >= 30 && extraCurri >= 2)
    {
        cout << "The student is eligible for the College Scholarship!" << endl;

        return 0;
    }

    // Otherwise, if the GPA is lower than or equal to 2.5, AND the completed credit hours is greater than or equal to 20
    // AND the extracurricular activities completed is greater than or equal to 1, proceed
    else if (gpa <= 2.5 && creditHrs >= 20 && extraCurri >= 1)
    {
        cout << "The student is eligible for the Leadership Scholarship!" << endl;

        return 0;
    }

    // Otherwise, the student is not eligible for any scholarship program!
    else
    {
        cout << "The student is not eligible for any scholarship!" << endl;

        return 0;
    }

    return 0;
}