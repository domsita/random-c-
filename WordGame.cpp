#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string name, city, college, profession, animal, petName;
    int age;

    cout << "Please enter your name: ";
    cin >> name;
    cout << "Your age: ";
    cin >> age;
    cout << "A city: ";
    getline(cin, city);
    cout << "A college: ";
    cin >> college;
    cout << "A profession: ";
    cin >> profession;
    cout << "An animal: ";
    cin >> animal;
    cout << "A pet name: ";
    cin >> petName;

    cout << "There once was a person named " << name << " who lived in " << city << ". ";
    cout << "At the age of " << age << ", " << name << " went to " << college << ". ";
    cout << name << " graduated and went to work as a " << profession << ". ";
    cout << "Then, " << name << " adopted a(n) " << animal << " named " << petName << ". ";
    cout << "They both lived happily ever after!";

    return 0;
}
