Traffic Light Control System Simulation 🚦
Overview
This C++ program simulates a traffic light control system using propositional logic to determine whether the traffic light should turn green or remain red. The decision-making process is based on three input conditions:

C (Car Detected) – Whether a vehicle is present.
T (Timer Condition) – Whether the timer allows the light to turn green.
P (Pedestrian Crossing) – Whether a pedestrian is crossing.
Using the logical expression (C ∨ T) ∧ ¬P, the system evaluates these inputs and provides the correct traffic light signal.

Features
✅ User-friendly console interface for inputting traffic conditions
✅ Implements propositional logic for real-world decision-making
✅ Uses a do-while loop to allow repeated simulations
✅ Modular design with a separate function for traffic light evaluation
✅ Clear and formatted output for readability

How It Works
The program prompts the user to enter values (1 for Yes, 0 for No) for car detection, timer status, and pedestrian crossing.
It applies the logical formula (C ∨ T) ∧ ¬P to determine if the light should turn GREEN or RED.
The result is displayed with a message indicating whether cars can proceed.
The user is asked if they want to run the simulation again.
Example Input/Output
pgsql
Copy
Edit
Traffic Light Control System Simulation
-------------------------------------------------------------
Is a car detected? (1 for Yes, 0 for No): 1
Is the timer condition allowing? (1 for Yes, 0 for No): 1
Is a pedestrian crossing? (1 for Yes, 0 for No): 0
Result: The traffic light is GREEN (Cars can go)
Do you want to try again? (y/n): y
Installation & Compilation
To run the program, compile it using a C++ compiler such as g++:

bash
Copy
Edit
g++ lab1.cpp -o traffic_light
./traffic_light
Potential Enhancements
🔹 Add input validation to prevent incorrect entries.
🔹 Expand to support multiple intersections with adaptive control.
🔹 Implement a graphical interface for better visualization.

Author
👤 Steven Gobran
📧 stevengobran@gmail.com
