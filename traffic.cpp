/*
    Author: Steven Gobran
    Date: 02/12/2025
    Lab Purpose: Traffic Light Control System Simulation
*/

#include <iostream>
using namespace std;

// Function prototype
bool trafficLightControl(bool carDetected, bool timerCondition, bool pedestrianCrossing);

int main() {
    bool carDetected, timerCondition, pedestrianCrossing, greenLight;
    char choice;
    
    do {
        // User input
        cout << "Traffic Light Control System Simulation" << endl;
        cout << "-------------------------------------------------------------" << endl;
        cout << "Is a car detected? (1 for Yes, 0 for No): ";
        cin >> carDetected;
        cout << "Is the timer condition allowing? (1 for Yes, 0 for No): ";
        cin >> timerCondition;
        cout << "Is a pedestrian crossing? (1 for Yes, 0 for No): ";
        cin >> pedestrianCrossing;
        
        // Evaluate traffic light condition
        greenLight = trafficLightControl(carDetected, timerCondition, pedestrianCrossing);
        
        // Display result
        if (greenLight) {
            cout << "Result: The traffic light is GREEN (Cars can go)" << endl;
        } else {
            cout << "Result: The traffic light is RED (Cars must stop)" << endl;
        }
        
        // Ask if user wants to run again
        cout << "Do you want to try again? (y/n): ";
        cin >> choice;
        
        cout << "-------------------------------------------------------------" << endl;
    } while (choice == 'y' || choice == 'Y');
    
    cout << "Simulation ended. Thank you!" << endl;
    return 0;
}

// Function implementation
bool trafficLightControl(bool carDetected, bool timerCondition, bool pedestrianCrossing) {
    return (carDetected || timerCondition) && !pedestrianCrossing;
}
