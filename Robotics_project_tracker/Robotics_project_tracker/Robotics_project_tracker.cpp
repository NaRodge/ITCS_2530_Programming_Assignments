// Robotics_project_tracker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
    // Welcome message 
    cout << "=================================" << endl;
    cout << " Welcome to the Robotics Tracker!" << endl;
    cout << "=================================" << endl;
    cout << endl;

    // Variables for the robot
    string robotName;
    int totalParts;
    int finishedParts;
    int partsLeft;
	double hoursWorked;

    // Ask the user three questions
    cout << "What is your robot's name? ";
    getline(cin, robotName);

    cout << "How many parts does your robot have? ";
    cin >> totalParts;

    cout << "How many parts are finished? ";
    cin >> finishedParts;
    
	// added a new question to ask the user how many hours they have worked on their robot
	cout << "How many hours have you worked on your robot? ";
	cin >> hoursWorked;

	// check for invalid input
    if (cin.fail())
    {
		cout << "Invalid input. Please enter a number." << endl;
        return 1;
    }

    // Calculate how many parts are left 
     partsLeft = totalParts - finishedParts;

	 // calculate percentage of parts completed
	 double percentageCompleted = finishedParts * 100.0 / totalParts;

    // Display the robot's progress
    cout << endl;
    cout << "Robotics Build Tracker" << endl;
    cout << "Your robot " << robotName << " has "
        << totalParts << " parts." << endl;
    cout << finishedParts << " parts are finished and "
        << partsLeft << " parts still need to be completed."
        << endl;
	cout << "Completion percentage: " << percentageCompleted << "%" << endl;


    // robots progress table 
	cout << endl;
	cout << "Robot Progress Table" << endl;
	cout << "----------------------------------" << endl;
	cout << left << setw(24) << "Robot Name" << robotName << endl;
	cout << left << setw(24) << "Total Parts" << totalParts << endl;
	cout << left << setw(24) << "Finished Parts" << finishedParts << endl;
	cout << left << setw(24) << "Parts Left" << partsLeft << endl;
	cout << left << setw(24) << "Hours Worked" << hoursWorked << endl;

	cout << fixed << setprecision(1);
	cout << left << setw(24) << "Completion Percentage" << percentageCompleted << "%" << endl;

    // Robotics report file
	ofstream report("report.txt");

	// save robot information to the file
	report << "Robotics Build Tracker" << endl;
    report << "Robot name: " << robotName << endl;
	report << "Total Parts: " << totalParts << endl;
	report << "Finished Parts: " << finishedParts << endl;
	report << "Parts Left: " << partsLeft << endl;
	report << "Hours Worked: " << hoursWorked << endl;
	report << fixed << setprecision(1);
	report << "Completion Percentage: " << percentageCompleted << "%" << endl;

	report.close();
	cout << "Your robot's progress has been saved." << endl;
    return 0;
}