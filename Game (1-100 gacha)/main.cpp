#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    int myChoice = 0, enemyChoice = 0;
    int count = 0;
    cout << "________________________________________________________________________________" << endl;

    cout << "\t\t 1 - 100 gacha top o'yini" << endl;
    cout << "________________________________________________________________________________" << endl;

    enemyChoice = rand() % 100 + 1;
    while (true) {
        count++;
        cout << "ROUND : " << count << endl;
        cin >> myChoice;
        if (myChoice > enemyChoice) {
            cout << "Ozgina kamroq" << endl;
        } else if (myChoice < enemyChoice) {
            cout << "Ozgina ko'proq" << endl;
        }
        if (enemyChoice == myChoice) {
            break;
        }
        cout << "________________________________________________________________________________" << endl;
    }
    cout << "________________________________________________________________________________" << endl;
    cout << "Siz topdingiz!" << endl;
    return 0;
}
