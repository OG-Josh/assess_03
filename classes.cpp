/************************************
Written by Joshua Yang
Professor Rene German
CPSC Interm Semester C++
Date: 1/28/20

Assignment:
Create a class called Petwith all the necessary files
(.h , .cpp, etc.)This class should have membervariables
name(string), age(int), type([‘dog’, ‘cat’])(string)and weight(double).
Make sure to include the appropriate accessor(getters), mutator(setters).
Once the Pet class has been implemented, create twoinstances of Pet
and print their details to console output.

************************************/

#include <iostream>
#include <string>


using namespace std;

class Pet {
public:
    void SetName(string petName);
    void SetAge(int petAge);
    void SetType(string petType);
    void SetWeight(double petWeight);

    void Print();

private:
    string name;
    int age;
    string type;
    double weight;
};


void Pet::SetName(string petName) {
    name = petName;
}


void Pet::SetAge(int petAge) {
    age = petAge;
}

void Pet::SetType(string petType) {
    type = petType;
}

void Pet::SetWeight(double petWeight) {
    weight = petWeight;
}



void Pet::Print() 
{
    cout << "Pet Information: " << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Type: " << type << endl;
    cout << "Weight: " << weight << endl;
}

int main() {
    Pet Dog;
    Pet Cat;

    Dog.SetName("German Rene");
    Dog.SetAge(12);
    Dog.SetType("Dog");
    Dog.SetWeight(128.32);

    Cat.SetName("Jessica");
    Cat.SetAge(18);
    Cat.SetType("Cat");
    Cat.SetWeight(124.78);

    Dog.Print();
    Cat.Print();

    return 0;
}