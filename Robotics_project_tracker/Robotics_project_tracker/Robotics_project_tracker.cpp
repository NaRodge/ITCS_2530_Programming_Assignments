// Robotics_project_tracker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Variables for the robot
    string robotName;
    int totalParts;
    int finishedParts;
    int partsLeft;

    // Ask the user three questions
    cout << "What is your robot's name? ";
    cin >> robotName;

    cout << "How many parts does your robot have? ";
    cin >> totalParts;

    cout << "How many parts are finished? ";
    cin >> finishedParts;

    // Calculate how many parts are left
    partsLeft = totalParts - finishedParts;

    // Display the robot's progress
    cout << endl;
    cout << "Robotics Build Tracker" << endl;
    cout << "Your robot " << robotName << " has "
        << totalParts << " parts." << endl;
    cout << finishedParts << " parts are finished and "
        << partsLeft << " parts still need to be completed."
        << endl;

    return 0;
}