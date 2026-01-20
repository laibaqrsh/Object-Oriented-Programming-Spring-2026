/*input: roll no. ,marks obtained in 5 subs, output: total marks, percentage */
#include <iostream>
using namespace std;

int main()
{
    int roll_no, m1,m2,m3,m4,m5,total,percentage;
    cout << "Enter your roll number: ";
    cin >> roll_no;
    cout << "Enter marks for Calculus: ";
    cin >> m1;
    cout << "Enter marks for Pakistan Studies: ";
    cin >> m2;
    cout << "Enter marks for Discrete Structures: ";
    cin >> m3;
    cout << "Enter marks for Logic Design: ";
    cin >> m4;
    cout << "Enter marks for OOP: ";
    cin >> m5; 

    total = m1+m2+m3+m4+m5;
    cout << "Total marks: " << total;
    percentage = total*100/500;
    cout << "\nPercentage: " << percentage;
}