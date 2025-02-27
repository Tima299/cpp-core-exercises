//Temur Eshboyev
//U2210068
#include <iostream>
#include <stdexcept>
using namespace std;

void displayHouse();

void displayWay2();

void displayWay1();

void displayTable();

void displayFace();

void displayCube();

class InvalidTaskException : public runtime_error {
public:
    InvalidTaskException(const string &message) : runtime_error(message) {
    }
};

int main() {
    int task;
    char continueChoice;

    do {
        cout << "Select a task (from 1 to 5, to exit type 0): ";
        cin >> task;

        try {
            if (task < 0 || task > 5) {
                throw InvalidTaskException("Invalid task number! Please select a valid task (0-5).");
            }

            switch (task) {
                case 1:
                    displayHouse();
                    break;
                case 2:
                    cout << "There are 2 ways of displaying C++" << endl;
                    int cpp_displayMethod;
                    cout << "Select a method (1 or 2): ";
                    cin >> cpp_displayMethod;

                    if (cpp_displayMethod < 1 || cpp_displayMethod > 2) {
                        throw InvalidTaskException("Invalid method! Please select either 1 or 2.");
                    }

                    switch (cpp_displayMethod) {
                        case 1:
                            displayWay1();
                            break;
                        case 2:
                            displayWay2();
                            break;
                    }
                    break;
                case 3:
                    displayTable();
                    break;
                case 4:
                    displayFace();
                    break;
                case 5:
                    displayCube();
                    break;
                case 0:
                    cout << "Exiting the program..." << endl;
                    break;
            }
        } catch (const InvalidTaskException &e) {
            cout << e.what() << endl;
        }

        if (task != 0) {
            cout << "Do you want to run another task? (y/n): ";
            cin >> continueChoice;
        } else {
            continueChoice = 'n';
        }
    } while (continueChoice == 'y' || continueChoice == 'Y');

    return 0;
}

void displayHouse() {
    cout << "Task - 1" << endl;
    cout << endl;
    cout << "          House        " << endl;
    cout << "           /\\         " << endl;
    cout << "          /  \\            " << endl;
    cout << "         /    \\             " << endl;
    cout << "        /      \\           " << endl;
    cout << "       / ------ \\           " << endl;
    cout << "      /|        |\\        " << endl;
    cout << "       |        | " << endl;
    cout << "       |        | " << endl;
    cout << "       |        | " << endl;
    cout << "       |________| " << endl;
    cout << endl;
}

void displayWay1() {
    cout << "Task - 2 " << endl;
    cout << endl;
    cout << "Way-1 " << endl;
    cout << endl;
    cout << "  c  c" << endl;
    cout << "c      c" << endl;
    cout << "c              +           +" << endl;
    cout << "c              +           +" << endl;
    cout << "c          + + + + +   + + + + +" << endl;
    cout << "c              +           +" << endl;
    cout << "c      c       +           +" << endl;
    cout << "  c  c" << endl;
    cout << endl;
}

void displayWay2() {
    cout << "Way-2" << endl;
    cout << endl;
    cout << R"(
                       c  c
                     c      c
                     c              +            +
                     c              +            +
                     c          + + + + +    + + + + +
                     c              +            +
                     c      c       +            +
                       c  c)" << endl;
}

void displayTable() {
    cout << "Task - 3 " << endl;
    cout << " ----------------------------------------" << endl;
    cout << " |  COUNTRY |  NAME  | PROFESSION | AGE |" << endl;
    cout << " ----------------------------------------" << endl;
    cout << " |  Germany |  Tomas |    Actor   |  35 |" << endl;
    cout << " ----------------------------------------" << endl;
    cout << " |  England |  Jeny  |    Singer  |  27 |" << endl;
    cout << " ----------------------------------------" << endl;
    cout << " |  Spain   |  Xose  | Footballer |  30 |" << endl;
    cout << " ----------------------------------------" << endl;
    cout << " |  France  | John   |   Engineer |  39 |" << endl;
    cout << " ----------------------------------------" << endl;
    cout << endl;
}

void displayFace() {
    cout << "Task - 4" << endl;
    cout << endl;
    cout << "    \" \" \" \" \"   " << endl;
    cout << "  +           +  " << endl;
    cout << "[ |   O   O   | ]" << endl;
    cout << "  |     ^     |" << endl;
    cout << "  |   ' _ '   |" << endl;
    cout << "  + - - - - - +" << endl;
}

void displayCube() {
    cout << "Task - 5" << endl;
    cout << endl;
    cout << "          * * * * * * * * * * *" << endl;
    cout << "        * *                 * *" << endl;
    cout << "      *   *               *   *" << endl;
    cout << "    *     *             *     *" << endl;
    cout << "  *       *           *       *" << endl;
    cout << "* * * * * * * * * * *         *" << endl;
    cout << "*         *         *         *" << endl;
    cout << "*         *         *         *" << endl;
    cout << "*         *         *         *" << endl;
    cout << "*         *         *         *" << endl;
    cout << "*         * * * * * * * * * * *" << endl;
    cout << "*       *           *       *" << endl;
    cout << "*     *             *     *" << endl;
    cout << "*   *               *   *" << endl;
    cout << "* *                 * *" << endl;
    cout << "* * * * * * * * * * *" << endl;
}
