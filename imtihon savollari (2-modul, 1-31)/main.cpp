// Temur Eshboyev
// 01/11/2024
// 00:19:05
#include <algorithm>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void t1(), t2(), t3(), t4(), t5(), t6(), t7(), t8(), t9(), t10();
void t11(), t12(), t13(), t14(), t15(), t16(), t17(), t18(), t19(), t20();
void t21(), t22(), t23(), t24(), t25(), t26(), t27(), t28(), t29(), t30();
void t31(), t32(), t33(), t34(), t35(), t36(), t37(), t38(), t39(), t40();
void t41(), t42(), t43(), t44(), t45(), t46(), t47(), t48(), t49(), t50();
void t51(), t52(), t53(), t54(), t55(), t56(), t57(), t58(), t59(), t60();
void t61(), t62(), t63(), t64();

void hypotenuseAndPerimeter(double a, double b);

void squareRoots(int n);

string doubleVowels(string str);

bool equalOccurrences(string str);

int countCpp(string str);

string charType(char ch);

string mergeStrings(string a, string b);

string repeatLastTwo(string str);

string addStrings(string str1, string str2);

string pdpEnd(string str);

bool validatePassword(string password);

string trimEdges(string str);

string removeExtraSpaces(string str);

string swapEdges(string str);

string reverseString(string str);

string replaceUppercaseWithAsterisk(string str);

pair<int, int> countAandA(string str);

void printRightTriangle(int n);

void print4DigitNumbers();


int main() {
    int task;
    char toContinue;
    do {
        cout << "Nechanchi mashqni ishlatib ko'rmoqchisiz?(1 - 64, 0-chiqish)" << endl;
        cout << "_____________________________________" << endl;
        cin >> task;
        switch (task) {
            case 1: t1();
                break;
            case 2: t2();
                break;
            case 3: t3();
                break;
            case 4: t4();
                break;
            case 5: t5();
                break;
            case 6: t6();
                break;
            case 7: t7();
                break;
            case 8: t8();
                break;
            case 9: t9();
                break;
            case 10: t10();
                break;
            case 11: t11();
                break;
            case 12: t12();
                break;
            case 13: t13();
                break;
            case 14: t14();
                break;
            case 15: t15();
                break;
            case 16: t16();
                break;
            case 17: t17();
                break;
            case 18: t18();
                break;
            case 19: t19();
                break;
            case 20: t20();
                break;
            case 21: t21();
                break;
            case 22: t22();
                break;
            case 23: t23();
                break;
            case 24: t24();
                break;
            case 25: t25();
                break;
            case 26: t26();
                break;
            case 27: t27();
                break;
            case 28: t28();
                break;
            case 29: t29();
                break;
            case 30: t30();
                break;
            case 31: t31();
                break;
            case 32: t32();
                break;
            case 33: t33();
                break;
            case 34: t34();
                break;
            case 35: t35();
                break;
            case 36: t36();
                break;
            case 37: t37();
                break;
            case 38: t38();
                break;
            case 39: t39();
                break;
            case 40: t40();
                break;
            case 41: t41();
                break;
            case 42: t42();
                break;
            case 43: t43();
                break;
            case 44: t44();
                break;
            case 45: t45();
                break;
            case 46: t46();
                break;
            case 47: t47();
                break;
            case 48: t48();
                break;
            case 49: t49();
                break;
            case 50: t50();
                break;
            case 51: t51();
                break;
            case 52: t52();
                break;
            case 53: t53();
                break;
            case 54: t54();
                break;
            case 55: t55();
                break;
            case 56: t56();
                break;
            case 57: t57();
                break;
            case 58: t58();
                break;
            case 59: t59();
                break;
            case 60: t60();
                break;
            case 61: t61();
                break;
            case 62: t62();
                break;
            case 63: t63();
                break;
            case 64: t64();
                break;
            case 65: {
                double a, b;
                cout << "Enter the two sides of the triangle: ";
                cin >> a >> b;
                hypotenuseAndPerimeter(a, b);
                break;
            }
            case 66: {
                int n;
                cout << "Enter a number to calculate square roots up to: ";
                cin >> n;
                squareRoots(n);
                break;
            }
            case 67: {
                string input;
                cout << "Enter a string to double its vowels: ";
                cin >> input;
                cout << "Modified string: " << doubleVowels(input) << endl;
                break;
            }
            case 68: {
                string input;
                cout << "Enter a string to check if 'pdp' and 'c++' occur equally: ";
                cin >> input;
                cout << (equalOccurrences(input) ? "Equal occurrences" : "Not equal occurrences") << endl;
                break;
            }
            case 69: {
                string input;
                cout << "Enter a string to count 'c++': ";
                cin >> input;
                cout << "Occurrences of 'c++': " << countCpp(input) << endl;
                break;
            }
            case 70: {
                char ch;
                cout << "Enter a character to determine its type: ";
                cin >> ch;
                cout << "Character type: " << charType(ch) << endl;
                break;
            }
            case 71: {
                string str1, str2;
                cout << "Enter two strings to merge: ";
                cin >> str1 >> str2;
                cout << "Merged string: " << mergeStrings(str1, str2) << endl;
                break;
            }
            case 72: {
                string input;
                cout << "Enter a string to repeat its last two characters three times: ";
                cin >> input;
                cout << "Modified string: " << repeatLastTwo(input) << endl;
                break;
            }
            case 73: {
                string str1, str2;
                cout << "Enter two numeric strings to add: ";
                cin >> str1 >> str2;
                cout << "Sum: " << addStrings(str1, str2) << endl;
                break;
            }
            case 74: {
                string input;
                cout << "Enter a string ending with 'PDP' to see the response: ";
                cin >> input;
                cout << pdpEnd(input) << endl;
                break;
            }
            case 75: {
                string password;
                cout << "Enter a password to validate: ";
                cin >> password;
                cout << (validatePassword(password) ? "Valid password" : "Invalid password") << endl;
                break;
            }
            case 76: {
                string input;
                cout << "Enter a string to trim its edges: ";
                cin >> input;
                cout << "Trimmed string: " << trimEdges(input) << endl;
                break;
            }
            case 77: {
                string input;
                cout << "Enter a string to remove extra spaces: ";
                cin.ignore(); // To handle whitespace inputs
                getline(cin, input);
                cout << "Cleaned string: " << removeExtraSpaces(input) << endl;
                break;
            }
            case 78: {
                string input;
                cout << "Enter a string to swap its first and last characters: ";
                cin >> input;
                cout << "Modified string: " << swapEdges(input) << endl;
                break;
            }
            case 79: {
                string input;
                cout << "Enter a string to reverse: ";
                cin >> input;
                cout << "Reversed string: " << reverseString(input) << endl;
                break;
            }
            case 80: {
                string input;
                cout << "Enter a string to replace uppercase letters with '*': ";
                cin >> input;
                cout << "Modified string: " << replaceUppercaseWithAsterisk(input) << endl;
                break;
            }
            case 81: {
                string input;
                cout << "Enter a string to count 'A' and 'a': ";
                cin >> input;
                auto counts = countAandA(input);
                cout << "'A': " << counts.first << ", 'a': " << counts.second << endl;
                break;
            }
            case 82: {
                int n;
                cout << "Enter the size of the triangle: ";
                cin >> n;
                printRightTriangle(n);
                break;
            }
            case 83: {
                cout << "Four-digit numbers with repeated digits: ";
                print4DigitNumbers();
                break;
            }


            default:
                cout << "Invalid option!" << endl;
        }

        if (task != 0) {
            cout << "Do you want to run another program? y/n" << endl;
            cin >> toContinue;
        } else {
            toContinue = 'n';
        }
    } while ((toContinue == 'Y') || (toContinue == 'y'));

    return 0;
}

void t1() {
    int num;
    cout << "1 dan 100 orasidagi sonni kiriting: ";
    cin >> num;
    if (num < 1 || num > 100) {
        cout << "Kiritilgan son 1 va 100 oralig'ida emas!" << endl;
        return;
    }
    string ones[] = {"", "bir", "ikki", "uch", "to'rt", "besh", "olti", "yetti", "sakkiz", "to'qqiz"};
    string teens[] = {
        "o'n", "o'n bir", "o'n ikki", "o'n uch", "o'n to'rt", "o'n besh", "o'n olti", "o'n yetti", "o'n sakkiz",
        "o'n to'qqiz"
    };
    string tens[] = {"", "", "yigirma", "o'ttiz", "qirq", "ellik", "oltmis", "yetmis", "sakson", "to'qson"};

    if (num < 10) {
        cout << ones[num] << endl;
    } else if (num < 20) {
        cout << teens[num - 10] << endl;
    } else if (num % 10 == 0) {
        cout << tens[num / 10] << endl;
    } else {
        cout << tens[num / 10] << " " << ones[num % 10] << endl;
    }
}

void t2() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 != 0) {
            sum += i;
        }
    }
    cout << "Yig'indisi: " << sum << endl;
}

void t3() {
    for (int i = 100; i >= -100; i--) {
        if (i % 5 == 0 || i % 3 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t4() {
    for (int i = 201; i <= 799; i += 2) {
        int yuzlik = i / 100, onlik = (i / 10) % 10, birlik = i % 10;
        if (yuzlik % 2 != 0 && onlik % 2 != 0 && birlik % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t5() {
    for (int i = 10; i < 100; i++) {
        int birlik = i % 10, onlik = i / 10;
        if (abs(birlik - onlik) == 1) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t6() {
    int N;
    cout << "N sonini kiriting: ";
    cin >> N;
    bool isPerfectSquare = false;
    for (int i = 1; i * i <= N; i++) {
        if (i * i == N) {
            isPerfectSquare = true;
            break;
        }
    }
    cout << (isPerfectSquare ? "Bu son biror sonning kvadrati" : "Bu son biror sonning kvadrati emas") << endl;
}

void t7() {
    int S, N, result = 1;
    cout << "S va N ni kiriting: ";
    cin >> S >> N;
    for (int i = 0; i < N; i++) {
        result *= S;
    }
    cout << "Natija: " << result << endl;
}

void t8() {
    for (int i = 10; i < 100; i++) {
        if ((i / 10 + i % 10) == 5) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t9() {
    int N;
    cout << "N sonini kiriting: ";
    cin >> N;
    bool isPrime = (N > 1);
    for (int i = 2; i <= sqrt(N); i++) {
        if (N % i == 0) {
            isPrime = false;
            break;
        }
    }
    cout << (isPrime ? "Tub son" : "Tub son emas") << endl;
}

void t10() {
    for (int i = 100; i <= 900; i++) {
        if (i % 3 == 0 && i % 6 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t11() {
    int num, count = 0;
    cout << "Sonni kiriting: ";
    cin >> num;
    int temp = abs(num);
    while (temp > 0) {
        temp /= 10;
        count++;
    }
    cout << "Xonalar soni: " << (count == 0 ? 1 : count) << endl;
}

void t12() {
    int a, b;
    cout << "a va b sonlarini kiriting: ";
    cin >> a >> b;
    for (int i = 0; i < b; i++) {
        cout << a << " ";
    }
    cout << endl;
}

void t13() {
    int a, b;
    cout << "a va b sonlarini kiriting:";
    cin >> a >> b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout << "EKUB:" << a << endl;
}

void t14() {
    int sum = 0;
    for (int i = 100; i <= 900; i++) {
        if (i % 3 == 0 && i % 6 != 0) {
            sum += i;
        }
    }
    cout << "Yig'indi:" << sum << endl;
}

void t15() {
    for (int i = 100; i < 1000; i++) {
        int onlar = (i / 10) % 10;
        if (onlar == 7 || onlar == 9) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t16() {
    int a, n, result = 1;
    cout << "a va n sonlarini kiriting:";
    cin >> a >> n;
    for (int i = 0; i < n; i++) {
        result *= a;
    }
    cout << "Natija:" << result << endl;
}

void t17() {
    for (int i = 100; i < 1000; i++) {
        int birlik = i % 10;
        int yuzlik = i / 100;
        int sum = birlik + yuzlik;
        if (sum == 8 || sum == 12) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t18() {
    int num;
    long long product = 1;
    cout << "Sonlarni kiriting (0 kiritilganda to'xtaydi):";
    while (true) {
        cin >> num;
        if (num == 0) break;
        product *= num;
    }
    cout << "Ko'paytma: " << product << endl;
}

void t19() {
    int a, b;
    cout << "a va b sonlarini kiriting:";
    cin >> a >> b;
    int maxVal = max(a, b);
    while (true) {
        if (maxVal % a == 0 && maxVal % b == 0) {
            cout << "EKUK: " << maxVal << endl;
            break;
        }
        maxVal++;
    }
}

void t20() {
    cout << "Toq sonlar:";
    for (int i = 1; i <= 100; i += 2) cout << i << " ";
    cout << "\nJuft sonlar:";
    for (int i = 2; i <= 100; i += 2) cout << i << " ";
    cout << endl;
}

void t21() {
    const int kurs = 11300;
    for (int i = 10; i <= 40; i++) {
        cout << i << "$ = " << i * kurs << " so'm" << endl;
    }
}

void t22() {
    for (int i = 2; i <= 9; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << i << " * " << j << " = " << i * j << "\t";
        }
        cout << endl;
    }
}

void t23() {
    int n;
    cout << "n sonini kiriting:";
    cin >> n;
    for (int i = 2; i <= n; i++) {
        bool isPrime = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) cout << i << " ";
    }
    cout << endl;
}

void t24() {
    int N;
    cout << "N ni kiriting:";
    cin >> N;
    for (int i = N; i < N + 5; i++) {
        for (int j = N; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
}

void t25() {
    int N;
    cout << "N ni kiriting:";
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) cout << " ";
        cout << "1" << endl;
    }
}

void t26() {
    int N;
    cout << "N (toqlik va 3dan katta) ni kiriting: ";
    cin >> N;
    for (int i = 0; i < N; i++) {
        if (i == N / 2) {
            for (int j = 0; j < N; j++) cout << "+ ";
        } else {
            for (int j = 0; j < N; j++) cout << (j == N / 2 ? "+" : "  ");
        }
        cout << endl;
    }
}

void t27() {
    int N;
    cout << "N ni kiriting:";
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == 0 || i == N - 1 || j == 0 || j == N - 1)
                cout << "%";
            else
                cout << " ";
        }
        cout << endl;
    }
}

void t28() {
    int N;
    cout << "N ni kiriting:";
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < i; j++) cout << i;
        cout << endl;
    }
}

void t29() {
    int N;
    cout << "N ni kiriting:";
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < i; j++) cout << " + ";
        cout << endl;
    }
    for (int i = N - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) cout << " + ";
        cout << endl;
    }
}

void t30() {
    int N;
    cout << "N ni kiriting:";
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

void t31() {
    int N;
    cout << "N ni kiriting :";
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < i; j++)
            cout << i << " ";
        cout << endl;
    }
}

void t32() {
    int n;
    srand(time(0));
    cout << "n ta butun sonli massiv berilgan. Massivdagi eng katta "
            "son nechanchi indexda turganligini aniqlaydigan dastur tuzilsin." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 9 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;
    int max = INT_MIN;
    int index = -1;
    for (int i = 0; i < n; ++i) {
        if (max < arr[i]) {
            max = arr[i];
            index = i;
        }
    }
    cout << "Eng katta element indeksi: " << index << endl;
}

void t33() {
    int n, mul = 1, sum = 0;
    srand(time(0));
    cout << "N ta butun sondan tashlik topgan array1[] butun sonlar massivi berilgan. "
            "Massivdagi toq sonlar ko’paytmasidan juft sonlar yig’indisini ayirib natijani chiqaruvchi dastur tuzing."
            << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 9 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 != 0) {
            mul *= arr[i];
        }
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    cout << "Ayirmasi : " << mul - sum << endl;
}

void t34() {
    int n;
    cout << "Massivga hajm bering: ";
    cin >> n;
    int arr[n];
    srand(time(0));
    cout << "Massiv: ";
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 20 - 10;
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            arr[i] += 2;
        }
    }
    cout << "O'zgargan massiv: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void t35() {
    int n, count = 0;
    cout << "Massivga hajm bering: ";
    cin >> n;
    int arr[n];
    srand(time(0));
    cout << "Massiv: ";
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 20 - 10; // Random numbers from -10 to 9
        cout << arr[i] << " ";
        if (arr[i] < 0 && arr[i] % 2 != 0) {
            count++;
        }
    }
    cout << endl;
    cout << "Manfiy toq sonlar soni: " << count << endl;
}

void t36() {
    int n, even = 0, odd = 0;
    cout << "Massivga hajm bering: ";
    cin >> n;
    int arr[n];
    srand(time(0));
    cout << "Massiv: ";
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 20;
        cout << arr[i] << " ";
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << endl;
    cout << "Juft sonlar: " << even << endl;
    cout << "Toq sonlar: " << odd << endl;
}

void t37() {
    int n, k;
    cout << "Massivga hajm bering: ";
    cin >> n;
    cout << "k ni kiriting (0 <= k < " << n << "): ";
    cin >> k;
    int arr[n];
    srand(time(0));
    cout << "Massiv: ";
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 20;
        cout << arr[i] << " ";
    }
    cout << endl;
    if (k > 0 && k < n - 1) {
        cout << "Yig'indisi: " << arr[k - 1] + arr[k + 1] << endl;
    } else {
        cout << "Yaroqsiz k qiymati!" << endl;
    }
}

void t38() {
    int n, k1, k2, product = 1;
    cout << "Massivga hajm bering: ";
    cin >> n;
    cout << "k1 va k2 ni kiriting (0 <= k1 < k2 < " << n << "): ";
    cin >> k1 >> k2;
    int arr[n];
    srand(time(0));
    cout << "Massiv: ";
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 10 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = k1; i <= k2; ++i) {
        product *= arr[i];
    }
    cout << "Ko'paytma: " << product << endl;
}

void t39() {
    int n, sum = 0;
    cout << "Massivga hajm bering: ";
    cin >> n;
    int arr[n];
    srand(time(0));
    cout << "Massiv: ";
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 20;
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[0]) {
            sum += arr[i];
        }
    }
    cout << "Yig'indisi: " << sum << endl;
}

void t40() {
    int n;
    bool isValid = true;
    cout << "Massivga hajm bering: ";
    cin >> n;
    int arr[n];
    srand(time(0));
    cout << "Massiv: ";
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 5 + 1;
        cout << arr[i] << " ";
        if (arr[i] != 1 && arr[i] != 4) {
            isValid = false;
        }
    }
    cout << endl;
    cout << (isValid ? "true" : "false") << endl;
}

void t41() {
    int n;
    cout << "Massivga hajm bering: ";
    cin >> n;
    int arr1[n], arr2[n], arr3[n];
    srand(time(0));
    cout << "array1: ";
    for (int i = 0; i < n; ++i) {
        arr1[i] = rand() % 20;
        cout << arr1[i] << " ";
    }
    cout << endl << "array2: ";
    for (int i = 0; i < n; ++i) {
        arr2[i] = rand() % 20;
        cout << arr2[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; ++i) {
        arr3[i] = arr1[i] - arr2[i];
    }
    cout << "array3: ";
    for (int i = 0; i < n; ++i) {
        cout << arr3[i] << " ";
    }
    cout << endl;
}

void t42() {
    int n, sum = 0;
    cout << "Massivga hajm bering (n > 5): ";
    cin >> n;
    if (n <= 5) {
        cout << "N 5 dan katta bo'lishi kerak!" << endl;
        return;
    }
    int arr[n];
    srand(time(0));
    cout << "Massiv: ";
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 20;
        cout << arr[i] << " ";
    }
    cout << endl;
    sum = arr[0] + arr[1] + arr[n - 1] + arr[n - 2] + arr[n - 3];
    cout << "Yig'indisi: " << sum << endl;
}

void t43() {
    int n, oneDigit = 0, twoDigit = 0, threeDigit = 0;
    cout << "Massivga hajm bering: ";
    cin >> n;
    int arr[n];
    srand(time(0));
    cout << "Massiv: ";
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 1000; // Random numbers from 0 to 999
        cout << arr[i] << " ";
        if (arr[i] < 10)
            oneDigit++;
        else if (arr[i] < 100)
            twoDigit++;
        else
            threeDigit++;
    }
    cout << endl;
    cout << "1 xonali sonlar: " << oneDigit << endl;
    cout << "2 xonali sonlar: " << twoDigit << endl;
    cout << "3 xonali sonlar: " << threeDigit << endl;
}

void t44() {
    int n;
    cout << "Massivga hajm bering (n >= 2): ";
    cin >> n;
    if (n < 2) {
        cout << "N 2 dan kam bo'lmasligi kerak!" << endl;
        return;
    }
    int arr[n];
    srand(time(0));
    cout << "Massiv: ";
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 20;
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Ko'paytma: " << arr[n - 1] * arr[n - 2] << endl;
}

void t45() {
    int n, minSum = INT_MAX, index = -1;
    cout << "Massivga hajm bering: ";
    cin >> n;
    int arr[n];
    srand(time(0));
    cout << "Massiv: ";
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 20;
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n - 1; ++i) {
        int sum = arr[i] + arr[i + 1];
        if (sum < minSum) {
            minSum = sum;
            index = i;
        }
    }
    cout << "Eng kichik qo'shni yig'indisi: " << minSum
            << " (indexlar: " << index << " va " << index + 1 << ")" << endl;
}

void t46() {
    int n, count = 0;
    cout << "Massivga hajm bering: ";
    cin >> n;
    int arr[n];
    srand(time(0));
    cout << "Massiv: ";
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 50;
        cout << arr[i] << " ";
        if (arr[i] > 25 && arr[i] % 2 != 0) {
            count++;
        }
    }
    cout << endl;
    cout << "25 dan katta toq sonlar soni: " << count << endl;
}

void t47() {
    int n;
    bool allPositiveEven = true;
    cout << "Massivga hajm bering: ";
    cin >> n;
    int arr[n];
    srand(time(0));
    cout << "Massiv: ";
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 21 - 10;
        cout << arr[i] << " ";
        if (arr[i] <= 0 || arr[i] % 2 != 0) {
            allPositiveEven = false;
        }
    }
    cout << endl;
    cout << (allPositiveEven ? "urra" : "zo'r") << endl;
}

void t48() {
    int arr[3][4];
    int sum1 = 1;
    int sum3 = 1;
    srand(time(0));
    cout << "Butun sonli 3x4 o‘lchamli massivni birinchi va oxirgi "
            "qatoridagi sonlarni ko’paytmasini topuvchi dastur tuzing.x" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            arr[i][j] = rand() % (9) + (1);
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << setw(3) << arr[i][j] << setw(3);
            if (i == 0) sum1 *= arr[i][j];
            if (i == 2) sum3 *= arr[i][j];
        }
        cout << endl;
    }
    cout << "birinchi qator = " << sum1 << ", oxirgi qator = " << sum3 << endl;
    cout << "Jami ko'paytma - " << sum1 * sum3 << endl;
}

void t49() {
    int arr[3][4], count = 0;
    srand(time(0));
    cout << "3x4 o’lchamdagi butun sonli massiv berilgan. Har "
            "bir qatorda toq sonlar nechtaligini aniqlovchi dastur tuzing.x" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            arr[i][j] = rand() % (9) + (1);
        }
    }
    for (int i = 0; i < 3; ++i) {
        count = 0;
        for (int j = 0; j < 4; ++j) {
            cout << setw(3) << arr[i][j] << setw(3);
            if (arr[i][j] % 2 != 0)count++;
        }
        cout << "    --->    " << i + 1 << "-qator toq sonlar soni - " << count << endl;
    }
}

void t50() {
    int n, m;
    cout << "N x M o’lchamdagi butun sonli massiv berilgan. "
            "Massivdagi eng katta manfiy son joylashgan "
            "indeksini topadigan dastur tuzing." << endl;
    cout << "Qatorlarga qiymat bering :";
    cin >> n;
    cout << "Ustunlarga qiymat bering :";
    cin >> m;
    srand(time(0));
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % (21) - (10);
        }
    }
    int max = INT_MIN;
    int indexI = 0, indexJ = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(5) << arr[i][j] << setw(5);
            if (max < arr[i][j] && arr[i][j] < 0) {
                max = arr[i][j];
                indexI = i;
                indexJ = j;
            }
        }
        cout << endl;
    }
    cout << endl;
    if (indexI == 0 && indexJ == 0) {
        cout << "Massivda manfiy son mavjud emas!" << endl;
    } else {
        cout << "Eng katta manfiy son = " << max << endl;
        cout << "Index(i) = " << indexI << endl;
        cout << "Index(j) = " << indexJ << endl;
    }
}

void t51() {
    int n, m;
    cout << "N x M o’lchamdagi butun sonli massiv berilgan. Massivdagi eng kichik"
            " manfiy toq sonning joylashgan indeksini topadigan dastur tuzing." << endl;
    cout << "Qatorlarga qiymat bering :";
    cin >> n;
    cout << "Ustunlarga qiymat bering :";
    cin >> m;
    srand(time(0));
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % (21) - (10);
        }
    }
    int min = INT_MAX;
    int indexI = -1, indexJ = -1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(5) << arr[i][j] << setw(5);
            if (arr[i][j] < min && arr[i][j] < 0 && arr[i][j] % 2 != 0) {
                min = arr[i][j];
                indexI = i;
                indexJ = j;
            }
        }
        cout << endl;
    }
    cout << endl;
    if (indexI == -1 && indexJ == -1) {
        cout << "Massivda manfiy toq son mavjud emas!" << endl;
    } else {
        cout << "Eng kichik manfiy toq son = " << min << endl;
        cout << "Index(i) = " << indexI << endl;
        cout << "Index(j) = " << indexJ << endl;
    }
}

void t52() {
    int n, m, N, M;
    cout << "M x N butun sonli array1 va array2 (2 ta MxN o’lchamli "
            "massiv bo’ladi) massivlari berilgan. array1 massiv "
            "tarkibidagi eng katta element bilan array2 massivdagi "
            "eng kichik elementni ko’paytmasini chiqaruvchi dastur "
            "tuzing." << endl;
    cout << "______________________________________" << endl;
    cout << "1-massiv uchun" << endl;
    cout << "Qatorlarga qiymat bering :";
    cin >> n;
    cout << "Ustunlarga qiymat bering :";
    cin >> m;
    srand(time(0));
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % (21) - (10);
        }
    }
    int min = INT_MAX;
    int indexI = -1, indexJ = -1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(5) << arr[i][j] << setw(5);
            if (arr[i][j] < min) {
                min = arr[i][j];
                indexI = i;
                indexJ = j;
            }
        }
        cout << endl;
    }
    cout << endl;
    if (indexI == -1 && indexJ == -1) {
        cout << "Massivda son mavjud emas!" << endl;
    } else {
        cout << "Eng kichik son = " << min << endl;
        cout << "Index(i) = " << indexI << endl;
        cout << "Index(j) = " << indexJ << endl;
    }
    cout << "______________________________________" << endl;
    cout << "2-massiv uchun" << endl;
    cout << "Qatorlarga qiymat bering :";
    cin >> N;
    cout << "Ustunlarga qiymat bering :";
    cin >> M;
    int arr2[N][M];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            arr2[i][j] = rand() % (21) - (10);
        }
    }
    int max = INT_MIN;
    int IndexI = -1, IndexJ = -1;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << setw(5) << arr2[i][j] << setw(5);
            if (arr2[i][j] > max) {
                max = arr2[i][j];
                IndexI = i;
                IndexJ = j;
            }
        }
        cout << endl;
    }
    cout << endl;
    if (IndexI == -1 && IndexJ == -1) {
        cout << "Massivda son mavjud emas!" << endl;
    } else {
        cout << "Eng katta son = " << max << endl;
        cout << "Index(i) = " << IndexI << endl;
        cout << "Index(j) = " << IndexJ << endl;
    }
    cout << "______________________________________" << endl;
    cout << "Ikkalasini ko'paytmasi : " << min * max << endl;
    cout << "______________________________________" << endl;
}

void t53() {
    int n, m;
    cout << "N x M o’lchamdagi butun sonli massiv berilgan. Massivdagi eng"
            " kichik manfiy juft sonning joylashgan indeksini topadigan dastur tuzing" << endl;
    cout << "Qatorlarga qiymat bering :";
    cin >> n;
    cout << "Ustunlarga qiymat bering :";
    cin >> m;
    srand(time(0));
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % (21) - (10);
        }
    }
    int min = INT_MAX;
    int indexI = -1, indexJ = -1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(5) << arr[i][j] << setw(5);
            if (arr[i][j] < min && arr[i][j] < 0 && arr[i][j] % 2 == 0) {
                min = arr[i][j];
                indexI = i;
                indexJ = j;
            }
        }
        cout << endl;
    }
    cout << endl;
    if (indexI == -1 && indexJ == -1) {
        cout << "Massivda manfiy juft son mavjud emas!" << endl;
    } else {
        cout << "Eng kichik manfiy juft son = " << min << endl;
        cout << "Index(i) = " << indexI << endl;
        cout << "Index(j) = " << indexJ << endl;
    }
}

void t54() {
    int n, m;
    cout << "N x M o’lchamdagi butun sonli massiv berilgan. Har"
            " bir qatordagi elementlarning yig’indisini aniqlang." << endl;
    cout << "Qatorga qiymat bering :";
    cin >> n;
    cout << "Ustunga qiymat bering :";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 21 - 10;
        }
    }
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = 0; j < m; ++j) {
            cout << setw(6) << arr[i][j] << setw(6);
            sum += arr[i][j];
        }
        cout << "      --->    Qator elementlari yig'indisi :" << sum << endl;
    }
    cout << endl;
}

void t55() {
    int n, m;
    cout << "N x M o’lchamdagi butun sonli massiv berilgan. Massivdagi"
            " eng katta elementni qiymatini 100 ga oshiruvchi dastur tuzing." << endl;
    cout << "Qatorga qiymat bering :";
    cin >> n;
    cout << "Ustunga qiymat bering :";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 21 - 10;
        }
    }
    int max = INT_MIN;
    int indexI = -1, indexJ = -1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(6) << arr[i][j] << setw(6);
            if (max < arr[i][j]) {
                max = arr[i][j];
                indexI = i;
                indexJ = j;
            }
        }
        cout << endl;
    }
    arr[indexI][indexJ] += 100;
    cout << "_________________________________" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(6) << arr[i][j] << setw(6);
        }
        cout << endl;
    }
    cout << endl;
}

void t56() {
    int n, m;
    cout << "N x M o’lchamdagi butun sonli massiv berilgan. Har "
            "bir ustunidagi elementlarning yig’indisini aniqlang" << endl;
    cout << "Qatorga qiymat bering :";
    cin >> n;
    cout << "Ustunga qiymat bering :";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 21 - 10;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(6) << arr[i][j] << setw(6);
        }
        cout << endl;
    }
    cout << "___________________________________" << endl;
    for (int j = 0; j < m; ++j) {
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += arr[i][j];
        }
        cout << j + 1 << "-ustun elementlari yig'indisi :" << sum << endl;
    }
    cout << endl;
}

void t57() {
    int n, m;
    cout << "N x M o’lchamdagi butun sonli massiv berilgan. Ekranga qatordagi "
            "elementlarning yig’indisi eng katta bo’lgan qatorni chiqaring." << endl;
    cout << "Qatorga qiymat bering :";
    cin >> n;
    cout << "Ustunga qiymat bering :";
    cin >> m;
    int arr[n][m];
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 21 - 10;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(6) << arr[i][j] << setw(6);
        }
        cout << endl;
    }
    cout << "_________________________________" << endl;
    int max = INT_MIN, max_qator_index = -1;
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = 0; j < m; ++j) {
            sum += arr[i][j];
        }
        if (sum > max) {
            max = sum;
            max_qator_index = i + 1;
        }
    }
    if (max_qator_index == -1) {
        cout << "Xatolik!" << endl;
    } else {
        cout << "Eng katta qator yig'indisi bo'lgan qator: " << max_qator_index << endl;
        cout << "Yig'indisi : " << max << endl;
    }
}

void t58() {
    int n, m;
    cout << "Misol tarzida berilgan quyidagi matritsaning qora bilan "
            "belgilangan o’rindagi sonlarining yig’indisini topuvchi "
            "dastur tuzing. Dastur ixtiyoriy NxN matritsa uchun ishlashi"
            " kerak. N-toq son." << endl;
    cout << "Qatorga qiymat bering :";
    cin >> n;
    cout << "Ustunga qiymat bering :";
    cin >> m;
    int arr[n][m];
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 9 + 1;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "_________________________________" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (j == 0 || j == m - 1 || i == j || i + j == n - 1) {
                cout << arr[i][j] << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void t59() {
    int n, m, k;
    cout << "M x N o‘lchamli butun sonli matritsa va K soni berilgan. Matritsa"
            " ichida K soni bor yoki yo’qligini aniqlovchi dastur tuzing." << endl;
    cout << "Qatorlarga qiymat bering :";
    cin >> n;
    cout << "Ustunlarga qiymat bering :";
    cin >> m;
    int arr[n][m];
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 9 + 1;
        }
    }
    cout << "Qaysi son bor yo'qligini tekshirmoqchisiz?";
    cin >> k;
    cout << "_________________________________________" << endl;
    bool isExist = false;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (arr[i][j] == k) {
                isExist = true;
            }
        }
    }
    if (isExist == true) {
        cout << "Siz qidirgan son massivda mavjud!" << endl;
    } else {
        cout << "Siz qidirgan son massivda mavjud emas!" << endl;
    }
    cout << "_________________________________________" << endl;
    cout << "Massiv : " << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void t60() {
    int n, m;
    cout << "M x N o’lchamli butun sonlardan iborat massiv berilgan. Massivni"
            " 1- ustunini ko’paytmasini va oxirgi ustunni yig’indisini aniqlab"
            " ekranga chiqaruvchi dastur tuzing." << endl;
    cout << "Qatorlarga qiymat bering :";
    cin >> n;
    cout << "Ustunlarga qiymat bering :";
    cin >> m;
    int arr[n][m];
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 9 + 1;
        }
    }
    cout << "Massiv : " << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << "________________________________" << endl;
    int mul = 1, sum = 0;
    for (int j = 0; j < m; ++j) {
        for (int i = 0; i < n; ++i) {
            if (j == 0) {
                cout << arr[i][j] << " ";
                mul *= arr[i][j];
            }
            if (j == m - 1) {
                cout << arr[i][j] << " ";
                sum += arr[i][j];
            }
        }
        if (j == 0) {
            cout << " -----> 1-ustun ko'paytmasi : " << mul << endl;
            mul = 0;
        } else if (j == m - 1) {
            cout << " -----> oxirgi ustun yig'indisi : " << sum << endl;
        }
    }
    cout << endl;
}

void t61() {
    int n, m, k;
    cout << "Enter the number of rows (N > k): ";
    cin >> n;
    cout << "Enter the number of columns (M): ";
    cin >> m;
    cout << "Enter the row number (k) to multiply by 10: ";
    cin >> k;

    int arr[n][m];
    srand(time(0));
    cout << "Original Matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 9 + 1;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int j = 0; j < m; ++j) {
        arr[k][j] *= 10;
    }
    cout << "\nModified Matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void t62() {
    int n, m, k;
    cout << "Enter the number of rows (M): ";
    cin >> n;
    cout << "Enter the number of columns (N): ";
    cin >> m;
    cout << "Enter the column number (k) to set to zero: ";
    cin >> k;

    int arr[n][m];
    srand(time(0));

    cout << "Original Matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 9 + 1;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; ++i) {
        arr[i][k] = 0;
    }


    cout << "\nModified Matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void t63() {
    int n, m;
    cout << "Enter the number of rows (M): ";
    cin >> n;
    cout << "Enter the number of columns (N): ";
    cin >> m;

    int arr[n][m];
    srand(time(0));
    cout << "Original Matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 9 + 1;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    int maxElement = arr[0][0], maxRow = 0, maxCol = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (arr[i][j] > maxElement) {
                maxElement = arr[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    arr[maxRow][maxCol] = 0;
    cout << "\nModified Matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void t64() {
    int n, m;
    string str;
    cout << "Enter the number of rows (M): ";
    cin >> n;
    cout << "Enter the number of columns (N): ";
    cin >> m;
    cout << "Enter the string to search for: ";
    cin >> str;

    string arr[n][m];
    srand(time(0));
    cout << "Word Matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = "word" + to_string(rand() % 9 + 1);
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    bool found = false;
    for (int i = 0; i < n && !found; ++i) {
        for (int j = 0; j < m; ++j) {
            if (arr[i][j] == str) {
                found = true;
                break;
            }
        }
    }

    if (found) {
        cout << "\nString \"" << str << "\" found in the matrix." << endl;
    } else {
        cout << "\nString \"" << str << "\" NOT found in the matrix." << endl;
    }
}

void hypotenuseAndPerimeter(double a, double b) {
    double c = sqrt(a * a + b * b);
    double perimeter = a + b + c;
    cout << "Gipotenuza: " << c << ", Perimetr: " << perimeter << endl;
}

void squareRoots(int n) {
    for (int i = 0; i <= n; ++i) {
        cout << "sqrt(" << i << ") = " << sqrt(i) << endl;
    }
}

string doubleVowels(string str) {
    string result;
    for (char ch: str) {
        result += ch;
        if (string("aeiouAEIOU").find(ch) != string::npos) {
            result += ch;
        }
    }
    return result;
}

bool equalOccurrences(string str) {
    int pdpCount = 0, cppCount = 0;
    for (size_t i = 0; i < str.size(); ++i) {
        if (str.substr(i, 3) == "pdp") pdpCount++;
        if (str.substr(i, 3) == "c++") cppCount++;
    }
    return pdpCount == cppCount;
}

int countCpp(string str) {
    int count = 0;
    for (size_t i = 0; i < str.size(); ++i) {
        if (str.substr(i, 3) == "c++") count++;
    }
    return count;
}

string charType(char ch) {
    if (isalpha(ch)) {
        if (isupper(ch)) return "Katta harf";
        return "Kichik harf";
    }
    return "Harf emas";
}

string mergeStrings(string a, string b) {
    if (a.back() == b.front()) {
        b.erase(0, 1);
    }
    return a + b;
}

string repeatLastTwo(string str) {
    string lastTwo = str.substr(str.size() - 2);
    return lastTwo + lastTwo + lastTwo;
}

string addStrings(string str1, string str2) {
    int num1 = stoi(str1), num2 = stoi(str2);
    return to_string(num1 + num2);
}

string pdpEnd(string str) {
    if (str.substr(str.size() - 3) == "PDP") return "ishonamiz";
    return "bizga qo'shiling";
}


bool validatePassword(string password) {
    if (password.size() < 8) return false;
    bool hasLower = false, hasSpecial = false, hasDigit = false;
    for (char ch: password) {
        if (islower(ch)) hasLower = true;
        if (isdigit(ch)) hasDigit = true;
        if (ch == '*' || ch == '#') hasSpecial = true;
    }
    return hasLower && hasSpecial && hasDigit;
}

string trimEdges(string str) {
    return str.substr(1, str.size() - 2);
}

string removeExtraSpaces(string str) {
    stringstream ss(str);
    string word, result;
    while (ss >> word) {
        result += word + " ";
    }
    result.pop_back();
    return result;
}

string swapEdges(string str) {
    swap(str[0], str[str.size() - 1]);
    return str;
}

string reverseString(string str) {
    reverse(str.begin(), str.end());
    return str;
}

string replaceUppercaseWithAsterisk(string str) {
    for (char &ch: str) {
        if (isupper(ch)) ch = '*';
    }
    return str;
}

pair<int, int> countAandA(string str) {
    int countA = 0, counta = 0;
    for (char ch: str) {
        if (ch == 'A') countA++;
        if (ch == 'a') counta++;
    }
    return {countA, counta};
}

void printRightTriangle(int n) {
    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= n; ++j) {
            if (j < i) cout << " ";
            else cout << j;
        }
        cout << endl;
    }
}

void print4DigitNumbers() {
    for (int i = 1000; i < 10000; ++i) {
        int digits[10] = {0};
        int num = i;
        while (num > 0) {
            digits[num % 10]++;
            num /= 10;
        }
        if (any_of(begin(digits), end(digits), [](int x) { return x >= 2; })) {
            cout << i << " ";
        }
    }
    cout << endl;
}
