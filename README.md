[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/C-hHzK4H)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=21612869&assignment_repo_type=AssignmentRepo)
# Programming III – Assignment 01: Zoo Management System
The German International University
Faculty of Informatics and Computer Science

Dr. Nada Sharaf

Programming III, Winter Semester 2025/26


## General Description:

In this project, you are tasked with implementing a simple **Zoo Management System** as a console application. The system simulates animals in a zoo, their enclosures, and visitor details. The purpose of this milestone is to practice some **Object-Oriented Programming (OOP)** concepts.
This assignment focuses on the **structure of the system**. Full functionality (feeding schedules, visitor-animal interactions, and ticketing system) will be implemented in **In-lab assignment 02**.

---

## Milestone 01: Required Classes and Methods

### a) **Animal Class**

Represents a generic animal in the zoo. This class will serve as the **base class** for specific animal types.

* **Attributes** (all private):

  * `string name`
  * `int age`
  * `bool isHungry`

* **Methods**:

  * `void display()`: Displays the animal’s name, age, and hunger status.
  * `void feed()`: Tests whether the animal is hungry or not. 

* **Subclasses**:

  * **Mammal**: Adds `string furColor`.
  * **Bird**: Adds `float wingSpan`.
  * **Reptile**: Adds `bool isVenomous`.
Note: “Venomous” means able to produce venom (poison) or not.
---

### b) **Enclosure Class**

Represents an enclosure that contains multiple animals.

* **Attributes** (all private):

  * Dynamic array of `Animal*`
  * `int capacity`
  * `int currentCount`

* **Methods**:

  * `void addAnimal(Animal* a)`: Adds an animal dynamically to the enclosure.
  * `void displayAnimals()`: Displays all animals inside the enclosure.

---

### c) **Visitor Class**

Represents a visitor to the zoo.

* **Attributes** (all private):

  * `string visitorName`
  * `int ticketsBought`

* **Methods**:

  * `void displayInfo()`: Displays visitor details.

---

## d) **Source File (main.cpp)**

Should consists of:  

  * Member methods implementation for every class. 
  * main() function that: 
  - Creates at least one Enclosure. 
  - Creates and adds 3 different types of animals (Mammal, Bird, and Reptile) to the Enclosure using **pointers**. 
  - Create a Visitor object with their name and number of tickets bought. 
  - Displays all enclosure information and visitor details in the same format **exactly** shown in the following console output below **(page 4)**

---

## Important Notes

* **Cheating = 0 in the assignment.**
* **AI-generated code = 0 in the project.**
* All attributes in classes must be **private** with **setters and getters** (if needed).
* Each class must have:

  * A **default constructor**
  * A **parameterized constructor**
  * A **destructor** (even if empty)
* Arrays and objects must be **dynamically allocated**.
---

## Console Output (for In-lab assignment 1 testing)

Enclosure 1 Animals:
- Lion (Age: 5, Hungry)
- Parrot (Age: 2, Not Hungry)
- Snake (Age: 3, Venomous, Hungry)

Visitor Info:  
Name: Sarah Ali  
Tickets Bought: 3

---

## Deliverables

* A **header file** for each of the above classes.

* A single **source file (.cpp)** containing all the implementations and the main() function.

* Include your name on a separate .txt file in the same format:
  **"TutorialNumber_StudentID_StudentName"**. e.g.: T02_16002222_Ahmed Mohamed

---
