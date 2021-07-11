#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter your marks: " << endl;
    cin >> marks;
    if (marks <= 100 && marks > 90)
    {
        cout << "Your grade is Grade Ex. Thank-you!" << endl;
    }
    else if (marks <= 90 && marks > 80)
    {
        cout << "Your grade is Grade A. Thank-you!" << endl;
    }
    else if (marks <= 80 && marks > 70)
    {
        cout << "Your grade is Grade B. Thank-you!" << endl;
    }
    else if (marks <= 70 && marks > 60)
    {
        cout << "Your grade is Grade C. Thank-you!" << endl;
    }
    else if (marks <= 60 && marks > 50)
    {
        cout << "Your grade is Grade D. Thank-you!" << endl;
    }
    else if (marks <= 50 && marks > 40)
    {
        cout << "Your grade is Grade P. Thank-you!" << endl;
    }
    else
    {
        cout << "Your grade is Grade F. Thank-you!" << endl;
    }
}
