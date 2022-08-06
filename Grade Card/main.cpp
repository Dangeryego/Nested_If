#include <iostream>

using namespace std;

int main()
{
    int marks {};
    string letterGrade {};
    cout << "Enter your obtained marks  ";
    cin >> marks;

    if (marks >= 0 && marks <= 100) {
        if (marks >=90) {
            if (marks > 95) {
                    letterGrade = "A+"; }
            else letterGrade = "A";
        }
        else if (marks >= 80)
            letterGrade = "B";
        else if (marks >= 70)
            letterGrade = "C";
        else if (marks >= 60)
            letterGrade = "D";
        else if (marks >= 50)
            letterGrade = "E";
        else {
            letterGrade = "F";}
    cout << "Your Grade is: " << letterGrade << endl;
    if (letterGrade == "F") {
        cout << "Sorry!, You must repeat the class" << endl;
    }else {cout << "Congrats!!, You are promoted to the next class" << endl;}
    }else {cout << "You have entered an invalid mark\nPlease Enter marks between '0 to 100'" << endl;}


    return 0;
}
