#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;  
    int age;          

public:
    Person(string n, int a) : name(n), age(a) {}
    
    string GetName() {
        return name;
    }

    int GetAge() {
        return age;
    }
};

int main() {
 
    Person person1("Ali", 21);

    string n = person1.GetName();
    int a = person1.GetAge();
 
    cout << "Name: " << n << endl;
    cout << "Age: " << a << endl;

    return 0;
}
