#include <iostream>

using namespace std;

class ClassA; // Forward declaration

class ClassB {
private:
    int bValue;
public:
    ClassB(int value) : bValue(value) {}
    friend void swapValues(ClassA& objA, ClassB& objB); // Friend function declaration
    void display() { cout << "ClassB value: " << bValue << endl; }
};

class ClassA {
private:
    int aValue;
public:
    ClassA(int value) : aValue(value) {}
    friend void swapValues(ClassA& objA, ClassB& objB); // Friend function declaration
    void display() { cout << "ClassA value: " << aValue << endl; }
};

// Friend function definition
void swapValues(ClassA& objA, ClassB& objB) {
    int temp = objA.aValue;
    objA.aValue = objB.bValue;
    objB.bValue = temp;
}

int main() {
    ClassA objA(10);
    ClassB objB(20);

    cout << "Before swapping:" << endl;
    objA.display();
    objB.display();

    // Swap the values of objA and objB
    swapValues(objA, objB);

    cout << "After swapping:" << endl;
    objA.display();
    objB.display();

    return 0;
}

