#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    char searching = '\0';
    string name = " ";
    int counter = 0;
    cout << "Enter a name  : " << endl;
    getline(cin, name);
    cout << "Which letter would you like to count the number of times it appears: " << endl;
    cin >> searching;
    for (int i = 0; i < name.length(); i++) {
        if (name[i] == searching) {
            counter++;
        }
    }
    cout << "The letter " << searching << " appears " << counter << " times ";
    return 0;
}