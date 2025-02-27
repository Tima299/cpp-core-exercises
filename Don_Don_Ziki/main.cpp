#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    int myScore = 0, enemyScore = 0;
    int myChoice = 0, enemyChoice = 0;
    int count = 0;
    cout << "________________________________________________________________________________" << endl;

    cout << "\t\t Tosh - Qaychi - Qog'oz o'yini" << endl;
    cout << "1 - tosh\n"
            "2 - qaychi\n"
            "3 - qog'oz" << endl;
    cout << "________________________________________________________________________________" << endl;

    while (true) {
        count++;
        cout << "ROUND : " << count << endl;
        cin >> myChoice;
        enemyChoice = rand() % 3 + 1;
        cout << "Siz " << myChoice << " ni tanladingiz, va raqib " << enemyChoice << " ni tanladi" << endl;
        if (myChoice == 1 && enemyChoice == 2 || myChoice == 2 && enemyChoice == 3 || myChoice == 3 && enemyChoice ==
            1) {
            myScore++;
            cout << "Siz to'plagan : " << myScore << endl;
            cout << "Robot to'plagan : " << enemyScore << endl;
        } else if (myChoice == 2 && enemyChoice == 1 || myChoice == 3 && enemyChoice == 2 || myChoice == 1 &&
                   enemyChoice == 3) {
            enemyScore++;
            cout << "Siz to'plagan : " << myScore << endl;
            cout << "Robot to'plagan : " << enemyScore << endl;
        } else if (enemyChoice == myChoice) {
            cout << "Siz to'plagan : " << myScore << endl;
            cout << "Robot to'plagan: " << enemyScore << endl;
        }
        if (enemyScore == 3 || myScore == 3) {
            break;
        }
        cout << "________________________________________________________________________________" << endl;
    }
    cout << "________________________________________________________________________________" << endl;
    cout << "NATIJA : " << endl;

    if (myScore == 3) {
        cout << "Siz yutdingiz : " << myScore << " ochko to'pladingiz!" << endl;
    } else if (enemyScore == 3) {
        cout << "Siz yutqazdingiz, robot " << enemyScore << " ochko to'pladi!" << endl;
    }
    cout << "________________________________________________________________________________" << endl;

    return 0;
}
