#include <iostream>

using namespace std;

int main() {
    
    char diag{};
    string name{};

    cout << "Hello welcome to 'Help' please enter your first name: ";
    cin >> name;



    cout << "\nWhat seems to be the trouble today " << name << "?"<< endl;
    cout << "A: I honestly don't know myself." << endl;
    cout << "B: I haven't been feeling good lately." << endl;
    cin >> diag;

    switch (diag) {
    case 'A':
    case 'a':
    {
        char choice{};

        cout << "\nWell hopefully we can figure out what the problem is." << endl;
        cout << "Have you been feeling any mental or physical pain?" << endl;
        cout << "A: Been having headaches while learning C++." << endl;
        cout << "B: My fingers cramp up when I type out code." << endl;

        cin >> choice;

        if (choice == 'a' || choice == 'A')
            cout << "\nTry taking a nice break from learning and you should feel better in no time, you've been working hard " << name << "." << endl;
        else if (choice == 'b' || choice == 'B')
            cout << "\nMake sure to take a stretch break from sitting and typing for long periods of time." << endl;
        break;
    }
    case 'B': 
    case 'b':
        cout << "\nSadly I am only a hard coded program and cannot give any helpful human words to rememdy your emotions. Have a nice day " << name << "!" << endl;
        break;

    default: cout << "\nI cannot help you. Have a nice day "<< name <<"!" << endl;
    }
    system("pause");
    return 0;
}