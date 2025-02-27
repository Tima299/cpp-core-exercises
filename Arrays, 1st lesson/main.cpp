#include <iostream>
using namespace std;

int main() {
    void t1(), t2(), t3(), t4(), t5(), t6(), t7(), t8(), t9(), t10();
    void t11(), t12(), t13(), t14(), t15(), t16(), t17(), t18(), t19(), t20();
    void t21(), t22(), t23(), t24(), t25(), t26(), t27(), t28(), t29(), t30();
    void t31(), t32(), t33(), t34(), t35(), t36(), t37(), t38(), t39(), t40();
    void t41(), t42(), t43(), t44(), t45(), t46(), t47(), t48(), t49(), t50();
    void t51(), t52(), t53(), t54(), t55(), t56(), t57(), t58();

    int task;
    char toContinue;
    do {
        cout << "Nechanchi mashqni ishlatib ko'rmoqchisiz?(1 - 58, 0-chiqish)" << endl;
        cout << "_____________________________________________________________________________" << endl;
        cin >> task;
        switch (task) {
            case 1:
                t1();
                break;
            case 2:
                t2();
                break;
            case 3:
                t3();
                break;
            case 4:
                t4();
                break;
            case 5:
                t5();
                break;
            case 6:
                t6();
                break;
            case 7:
                t7();
                break;
            case 8:
                t8();
                break;
            case 9:
                t9();
                break;
            case 10:
                t10();
                break;
            case 11:
                t11();
                break;
            case 12:
                t12();
                break;
            case 13:
                t13();
                break;
            case 14:
                t14();
                break;
            case 15:
                t15();
                break;
            case 16:
                t16();
                break;
            case 17:
                t17();
                break;
            case 18:
                t18();
                break;
            case 19:
                t19();
                break;
            case 20:
                t20();
                break;
            case 21:
                t21();
                break;
            case 22:
                t22();
                break;
            case 23:
                t23();
                break;
            case 24:
                t24();
                break;
            case 25:
                t25();
                break;
            case 26:
                t26();
                break;
            case 27:
                t27();
                break;
            case 28:
                t28();
                break;
            case 29:
                t29();
                break;
            case 30:
                t30();
                break;
            case 31:
                t31();
                break;
            case 32:
                t32();
                break;
            case 33:
                t33();
                break;
            case 34:
                t34();
                break;
            case 35:
                t35();
                break;
            case 36:
                t36();
                break;
            case 37:
                t37();
                break;
            case 38:
                t38();
                break;
            case 39:
                t39();
                break;
            case 40:
                t40();
                break;
            case 41:
                t41();
                break;
            case 42:
                t42();
                break;
            case 43:
                t43();
                break;
            case 44:
                t44();
                break;
            case 45:
                t45();
                break;
            case 46:
                t46();
                break;
            case 47:
                t47();
                break;
            case 48:
                t48();
                break;
            case 49:
                t49();
                break;
            case 50:
                t50();
                break;
            case 51:
                t51();
                break;
            case 52:
                t52();
                break;
            case 53:
                t53();
                break;
            case 54:
                t54();
                break;
            case 55:
                t55();
                break;
            case 56:
                t56();
                break;
            case 57:
                t57();
                break;
            case 58:
                t58();
                break;
            default:
                cout << "_____________________________________________________________________________" << endl;
        }
        if (task != 0) {
            cout << "Do you want to run another program? y/n" << endl;
            cin >> toContinue;
        } else {
            toContinue == 'n';
        }
    } while ((toContinue == 'Y') || (toContinue == 'y'));
    return 0;
}

void t1() {
    int n;
    bool is6 = false;
    cout << "int lardan iborat massiv berilgan. Massivni 1inchi yoki oxirgi elementi 6 bolsa, true qaytaring." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }
    if (array[0] == 6 || array[n - 1] == 6) {
        is6 = true;
    }
    cout << "firstLast6 ([";
    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }
    cout << "]) -> " << boolalpha << is6 << endl;;
}

void t2() {
    int n;
    cout << "int tipida array berilgan. Arrayni birinchi va oxirgi elementlarini almashtiring va qaytaring." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }
    cout << "swapEnds[ ";
    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }
    cout << "] -> [ ";
    swap(array[0], array[n - 1]);
    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }
    cout << "]" << endl;
}

void t3() {
    int n;
    cout << "int tipida uzunligi n bolgan massiv berilgan. Massivni birinchi va oxirgi "
            "elementini solishtirib, kattasini toping va massivni barcha elementlarini "
            "shu katta songa almashtiring. Natijani qaytaring." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }
    int maxi = max(array[0], array[n - 1]);
    cout << "maxEnds([ ";
    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }
    cout << "]) -> [ ";
    for (int i = 0; i < n; ++i) {
        array[i] = maxi;
        cout << array[i] << " ";
    }
    cout << "]" << endl;
}

void t4() {
    int n;
    cout << "int tipida uzunligi juft bolgan massiv berilgan. shu massivni"
            " o’rtasidagi 2 ta elementini yig’indisini qaytaring." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }
    if (array[n] % 2 == 0) {
        cout << "middleWay([ ";
        for (int i = 0; i < n; ++i) {
            cout << array[i] << " ";
        }
        cout << "]) ->  " << array[n / 2] + array[n / 2 - 1] << endl;
    }
}

void t5() {
    int n;
    cout << "Toq uzunlikdagi array berilgan. O’rtadagi 3ta elementlarni ekranga chiqaring" << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }
    if (n % 2 != 0) {
        cout << "midThree([ ";
        for (int i = 0; i < n; ++i) {
            cout << array[i] << " ";
        }
        cout << "]) ->  " << array[n / 2 - 1] << ", " << array[n / 2] << ", " << array[n / 2 + 1] << endl;
    }
}

void t6() {
    int n, maxi = 0;
    cout << "Toq uzunlikdagi massiv berilgan. Massivni birinchi, oxirgi "
            "va o’rtasidagi elementlarini solishtiring va eng kattasini qaytaring." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "- index :";
        cin >> arr[i];
    }
    cout << endl;
    if (n % 2 != 0) {
        maxi = arr[0];
        if (arr[n / 2] > maxi) { maxi = arr[n / 2]; }
        if (arr[n - 1] > maxi) { maxi = arr[n - 1]; }
    }
    cout << "maxTriple([ ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << "]) -> " << maxi << endl;
}

void t7() {
    int n;
    cout << "int tipida uzunligi n bolgan massiv berilgan. "
            "Massivni teskari qilib (aylantirib) qaytaring." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "- index :";
        cin >> arr[i];
    }
    cout << "reverse3([ ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << "]) -> ";
    cout << "[ ";
    for (int i = n - 1; i >= 0; --i) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}

void t8() {
    int n;
    cout << "int tipida uzunligi n bolgan massiv berilgan. "
            "Massivni teskari qilib (aylantirib) qaytaring." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "- index :";
        cin >> arr[i];
    }
    int birinchi2 = arr[0] + arr[1];
    int oxirgi3 = arr[n - 1] * arr[n - 2] * arr[n - 3];
    cout << "arr[ ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << "] -> \n1-ikkita element yig'indisi : " << birinchi2 << "\noxirgi 3 ta element ko'paytmasi : " << oxirgi3 <<
            endl;
}

void t9() {
    int n, count = 0;
    cout << "int tipidagi berilgan massivni juft elementlar sonini qaytaring." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "- index :";
        cin >> arr[i];
    }
    cout << "countEvens[ ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
        if (arr[i] % 2 == 0) count++;
    }
    cout << "] -> " << count << endl;
}

void t10() {
    int n, sum = 0;
    cout << "int tipidagi berilgan massivni toq elementlar yig'indisini qaytaring." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "- index :";
        cin >> arr[i];
    }
    cout << "sumOdds[ ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
        if (arr[i] % 2 != 0) sum += arr[i];
    }
    cout << "] -> " << sum << endl;
}

void t11() {
    int n, sum = 0;
    cout << "int tipidagi berilgan massivni juft indeksdagi elementlar yigindisini qaytaring." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "- index :";
        cin >> arr[i];
    }
    cout << "countEvens[ ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
        if (i % 2 == 0) sum += arr[i];
    }
    cout << "] -> " << sum << endl;
}

void t12() {
    int n, sumMinus = 0, sumPlus = 0;
    cout << "int tipidagi berilgan massivni musbat elementlar va manfiy elementlar sonini toping." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    cout << "countOddsAndEvens[ ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
        if (arr[i] < 0) sumMinus++;
        else if (arr[i] > 0) sumPlus++;
    }
    cout << "] -> " << sumPlus << "ta musbat va " << sumMinus << "ta manfiy" << endl;
}

void t13() {
    int n, countB = 0, countI = 0, countU = 0;
    cout << "N uzunlikdagi massiv berilgan. Massivda bir xonali,"
            " 2 xonali 3 xonali sonlar nechtaligini topuvchi dastur tuzing." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        if (arr[i] >= 0 && arr[i] <= 9)countB++;
        if (arr[i] >= 10 && arr[i] <= 99)countI++;
        if (arr[i] >= 100 && arr[i] <= 999)countU++;
    }
    cout << "Bir xonali sonlar jami : " << countB << "ta" << endl;
    cout << "Ikki xonali sonlar jami : " << countI << "ta" << endl;
    cout << "Uch xonali sonlar jami : " << countU << "ta" << endl;
}

void t14() {
    int n, count = 0;
    bool is2 = false;
    cout << "int tipida massiv berilgan. Massivda agar barcha 2 lar soni 4 ta bolsa, true qaytaring." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    cout << "sum2s_are8[ ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
        if (arr[i] == 2) count++;
    }
    if (count == 4) {
        is2 = true;
    }
    cout << "] -> " << boolalpha << is2 << endl;
}

void t15() {
    int n, count = 0;
    cout << "Massiv berilgan. Massivda ikki xonali juft sonlar nechtaligini toping." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    cout << "countEven[ ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
        if (arr[i] > 9 && arr[i] < 100)count++;
    }

    cout << "] -> " << count << endl;
}

void t16() {
    int n, count1 = 0, count4 = 0;
    bool is = false;
    cout << "int tipida massiv berilgan. Agar massivda 1 lar soni 4 lar sonidan kop bolsa, true qaytaring." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    cout << "more14[ ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
        if (arr[i] == 1) count1++;
        if (arr[i] == 4) count4++;
    }
    if (count1 > count4) {
        is = true;
    }
    cout << "] -> " << boolalpha << is << endl;
}

void t17() {
    int n;
    cout << "Yangi massiv yarating, uzunligi a massivni uzunligidan "
            "2marta kop va yangi massivni oxirgi elementi a massivni "
            "oxirgi elementiga teng bo’lsin. " << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    int newArr[2 * n];
    for (int i = 0; i < 2 * n - 1; ++i) {
        newArr[i] = 0;
    }
    newArr[2 * n - 1] = arr[n - 1];
    cout << "Yangi Massiv: [";
    for (int i = 0; i < 2 * n; ++i) {
        {
            if (i != 0) {
                cout << ", ";
            }
            cout << newArr[i];
        }
    }
    cout << "]" << endl;
}

void t18() {
    int n;
    cout << "int tipida uzunligi n bolgan massiv berilgan. Massivni birinchi"
            " elementini olib oxiriga qoying va qolgan elementlarini chapga"
            " suring va natijani chiqaring." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    int zahira = arr[0];
    cout << "rotateLeft([";
    for (int i = 0; i < n; ++i) {
        if (i != 0) {
            cout << ", ";
        }
        cout << arr[i];
        arr[i - 1] = arr[i];
    }
    cout << "]) -> [";
    arr[n - 1] = zahira;
    for (int i = 0; i < n; ++i) {
        if (i != 0) {
            cout << ", ";
        }
        cout << arr[i];
    }
    cout << "]" << endl;
}

void t19() {
    int n;
    cout << "int tipida uzunligi n bolgan massiv berilgan. "
            "Massivni oxirgi elementini olib boshiga qoying "
            "va qolgan elementlarini o’ngga suring va natijani chiqaring." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    int rotatedArr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    cout << "rotateRight([";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    for (int i = 0; i < n; ++i) {
        rotatedArr[(i + 1) % n] = arr[i];
    }
    cout << "])\n         -> [";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << rotatedArr[i];
    }
    cout << "]" << endl;
}

void t20() {
    int n;
    cout << "int tipida uzunligi n bolgan massiv berilgan. "
            "Agar massivda 2 elementidan keyin 3 elementi "
            "kelsa 3 elementini 0 ga almashtiring va qaytaring." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    cout << "fix23([";
    for (int i = 0; i < n; ++i) {
        if (i != 0) cout << ", ";
        cout << arr[i];
    }
    cout << "])\n   -> [";
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 2 && arr[i + 1] == 3) {
            arr[i + 1] = 0;
        }
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    cout << "]" << endl;
}

void t21() {
    int a, b, sumA = 0, sumB = 0;
    cout << "Uzunligi n bolgan int tipida 2ta a va b massiv berilgan."
            " Qaysi massivni elementlarini yigindisi katta bolsa, osha"
            " massivni ekranga chiqaring. Teng bolsa, a massivni chiqaring." << endl;
    cout << "'a' massivga hajm bering :";
    cin >> a;
    int arrA[a];
    for (int i = 0; i < a; ++i) {
        cout << i << "-index :";
        cin >> arrA[i];
    }
    cout << "'b' massivga hajm bering :";
    cin >> b;
    int arrB[b];
    for (int i = 0; i < b; ++i) {
        cout << i << "-index :";
        cin >> arrB[i];
    }
    for (int i = 0; i < a; ++i) {
        sumA += arrA[i];
    }
    for (int i = 0; i < b; ++i) {
        sumB += arrB[i];
    }
    cout << "Natija :\n -> [";
    if (sumA > sumB) {
        for (int i = 0; i < a; ++i) {
            if (i != 0)cout << ", ";
            cout << arrA[i];
        }
    } else if (sumA < sumB) {
        for (int i = 0; i < b; ++i) {
            if (i != 0)cout << ", ";
            cout << arrB[i];
        }
    } else {
        for (int i = 0; i < a; ++i) {
            if (i != 0)cout << ", ";
            cout << arrA[i];
        }
    }
    cout << "]" << endl;
}

void t22() {
    int n;
    bool unlucky = false;
    cout << "int tipida massiv berilgan. Agar massivda "
            "1dan keyin 3 kelsa, biz 1 elementini “omadsiz” 1"
            " deb ataymiz. Agar massivni birinchi 2ta yoki oxirgi"
            " 2ta elementlari birontasi omadsiz 1 bo’lsa, true "
            "qaytaring." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    cout << "unlucky1([";
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 1 && arr[i + 1] == 3) {
            unlucky = true;
        }
        if (i != 0) cout << ", ";
        cout << arr[i];
    }
    cout << "]) -> " << boolalpha << unlucky << endl;
}

void t23() {
    int a, b;
    cout << "Uzunligi n bolgan 2ta int tipida a va b massiv berilgan. "
            "Uzunligi 2*n bolgan yangi massiv elementlari a va b "
            "massiv elementlaridan iborat. Yangi massivni ekranga "
            "chiqaring." << endl;
    cout << "'a' massivga hajm bering :";
    cin >> a;
    int arrA[a];
    for (int i = 0; i < a; ++i) {
        cout << i << "-index :";
        cin >> arrA[i];
    }
    cout << "'b' massivga hajm bering :";
    cin >> b;
    int arrB[b];
    for (int i = 0; i < b; ++i) {
        cout << i << "-index :";
        cin >> arrB[i];
    }
    int arrC[a + b];
    int index = 0;
    for (int i = 0; i < a; ++i) {
        arrC[index++] = arrA[i];
    }
    for (int i = 0; i < b; ++i) {
        arrC[index++] = arrB[i];
    }
    for (int i = 0; i < a + b; ++i) {
        if (i != 0)cout << ", ";
        cout << arrC[i];
    }
    cout << endl;
}

void t24() {
    int a, b;
    bool isCommon = false;
    cout << "2ta int tipida a va b massiv berilgan. "
            "Agar ularni birinchi elementlari yoki "
            "oxirgi indekslaridagi elementlari teng"
            " bolsa, true qaytaring." << endl;
    cout << "'a' massivga hajm bering :";
    cin >> a;
    int arrA[a];
    for (int i = 0; i < a; ++i) {
        cout << i << "-index :";
        cin >> arrA[i];
    }
    cout << "'b' massivga hajm bering :";
    cin >> b;
    int arrB[b];
    for (int i = 0; i < b; ++i) {
        cout << i << "-index :";
        cin >> arrB[i];
    }
    if (arrA[0] == arrB[0] || arrA[a - 1] == arrB[b - 1]) {
        isCommon = true;
    }
    cout << "commonEnd([";
    for (int i = 0; i < a; ++i) {
        if (i != 0)cout << ", ";
        cout << arrA[i];
    }
    cout << "], [";
    for (int i = 0; i < b; ++i) {
        if (i != 0)cout << ", ";
        cout << arrB[i];
    }
    cout << "] -> " << boolalpha << isCommon << endl;
    delete[] arrA;
    delete[] arrB;
}

void t25() {
    int n;
    cout << "n uzunlikdagi massiv berilgan. Massivning eng katta "
            "elementini toping." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return;
    }
    cout << "maxElement([";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    cout << "]) -> ";
    int maxi = arr[0];
    for (int i = 1; i < n; ++i) {
        maxi = max(maxi, arr[i]);
        /* if(arr[i]>maxi) maxi=arr[i];*/
    }
    cout << "Max:" << maxi << endl;
}

void t26() {
    int n;
    cout << "n uzunlikdagi massiv berilgan. Massivning eng "
            "kichik elementining indeksini toping." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return;
    }
    cout << "minElementIndex([";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    cout << "]) -> ";
    int mini = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] < mini) mini = i;
    }
    cout << "Index:" << mini << endl;
}

void t27() {
    int n, count = 0;
    cout << "n uzunlikdagi massiv berilgan. Massivning eng katta"
            " elementini toping va uni nechi marta uchraganini toping" << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return;
    }
    int maxi = arr[0];
    cout << "maxElementCount([";
    for (int i = 0; i < n; ++i) {
        if (maxi < arr[i]) {
            maxi = arr[i];
            count = 0;
        } else if (maxi == arr[i]) {
            count++;
        }
        if (i != 0) cout << ", ";
        cout << arr[i];
    }
    cout << "]) -> ";
    cout << maxi << " soni " << count << " marta" << endl;
}

void t28() {
    int n;
    cout << "n uzunlikdagi massiv berilgan. Massivning eng katta "
            "elementini toping." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return;
    }
    cout << "bigDiff([";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    cout << "]) -> ";
    int maxi = arr[0];
    int mini = arr[0];
    for (int i = 1; i < n; ++i) {
        maxi = max(maxi, arr[i]);
        if (arr[i] < mini) mini = arr[i];
    }
    cout << "Max * Min = " << maxi * mini << endl;
}

void t29() {
    int n;
    cout << "Massiv berilgan. Massivning birinchi elementidan(0-indeksdagi)"
            "katta bo’lgan barcha elementlar ekranga chiqaring. Masalan:"
            " {4, 7, 2, 8, 1} -> 7, 8." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return;
    }
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    cout << endl;
    int first = arr[0];
    bool isFirst = true;
    cout << "1-elementdan katta elementlar (" << first << "): ";
    for (int i = 0; i < n; ++i) {
        if (first < arr[i]) {
            if (!isFirst)cout << ", ";
            cout << arr[i];
            isFirst = false;
        }
    }
    cout << endl;
}

void t30() {
    int n, mul = 1;
    cout << "Massiv berilgan. Massivning birinchi elementidan kichik"
            " bo’lgan barcha elementlar kopaytmasini ekranga chiqaring." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return;
    }
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    cout << endl;
    int first = arr[0];
    bool isFirst = true;
    cout << "1-elementdan kichik elementlar (" << first << "): ";
    for (int i = 0; i < n; ++i) {
        if (first > arr[i]) {
            if (!isFirst)cout << " * ";
            cout << arr[i];
            isFirst = false;
            mul *= arr[i];
        }
    }
    cout << " = " << mul << endl;
}

void t31() {
    int n;
    cout <<
            "Massiv berilgan. Massivning oxirgi elementidan kichik bo’lgan barcha juft elementlarni ekranga chiqaring. "
            << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return;
    }
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    cout << endl;
    int last = arr[n - 1];
    bool isLast = true;
    cout << "oxirgi elementdan kichik elementlar (" << last << "): ";
    for (int i = 0; i < n; ++i) {
        if (last > arr[i]) {
            if (arr[i] % 2 == 0) {
                if (!isLast)cout << ", ";
                cout << arr[i];
                isLast = false;
            }
        }
    }
    cout << endl;
}

void t32() {
    int n, sum = 0;
    cout <<
            "Massiv berilgan. Masssivning oxirgi elementidan katta bo’lgan barcha toq elementlarni yig’indisini ekranga chiqaring."
            << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return;
    }
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    cout << endl;
    int last = arr[n - 1];
    cout << "oxirgi elementdan katta elementlar yig'indisi (" << last << ") : ";
    for (int i = 0; i < n; ++i) {
        if (last < arr[i]) {
            if (arr[i] % 2 != 0) {
                sum += arr[i];
            }
        }
    }
    cout << sum << endl;
}

void t33() {
    int n;
    cout <<
            "n ta butun sondan tashkil topgan 1 o’lchamli massiv berilgan. Massivdagi har bir juft songa 10 sonini qo’shib chiquvchi dastur tuzilsin."
            << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return;
    }
    cout << "{";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    cout << "} -> {";
    int juft;
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            juft = arr[i] + 10;
        } else if (arr[i] % 2 != 0) {
            juft = arr[i];
        }
        if (i != 0)cout << ", ";
        cout << juft;
    }
    cout << "}" << endl;
}

void t34() {
    int n;
    cout << "n ta butun sondan tashkil topgan 1 o’lchamli massiv berilgan. "
            "Massivdagi har bir toq songa 100 sonini qo’shib chiquvchi "
            "dastur tuzilsin." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return;
    }
    cout << "{";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    cout << "} -> {";
    int toq;
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 != 0) {
            toq = arr[i] + 100;
        } else if (arr[i] % 2 == 0) {
            toq = arr[i];
        }
        if (i != 0)cout << ", ";
        cout << toq;
    }
    cout << "}" << endl;
}

void t35() {
    int n;
    cout << "n ta butun sondan tashkil topgan 1 o’lchamli massiv berilgan. "
            "Massivdagi har bir juft songa massivdagi birinchi sonni qo’shib"
            " chiquvchi dastur tuzilsin." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return;
    }
    cout << "{";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    cout << "} -> {";
    int toq;
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            toq = arr[i] + arr[0];
        } else if (arr[i] % 2 != 0) {
            toq = arr[i];
        }
        if (i != 0)cout << ", ";
        cout << toq;
    }
    cout << "}" << endl;
}

void t36() {
    int n;
    cout << "n ta butun sondan tashkil topgan 1 o’lchamli massiv berilgan. "
            "Massivdagi har bir toq songa massivdagi oxirgi sonni qo’shib "
            "chiquvchi dastur tuzilsin. " << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return;
    }
    cout << "{";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    cout << "} -> {";
    int toq;
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 != 0) {
            toq = arr[i] + arr[n - 1];
        } else if (arr[i] % 2 == 0) {
            toq = arr[i];
        }
        if (i != 0)cout << ", ";
        cout << toq;
    }
    cout << "}" << endl;
}

void t37() {
    int n;
    cout << "int tipida massiv berilgan. Agar massivdagi har bitta element faqat"
            " 2 yoki 7 dan iborat bolsa true qaytaring." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return;
    }
    cout << "{";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    bool is2or7 = true;
    for (int i = 0; i < n; ++i) {
        if (arr[i] != 2 && arr[i] != 7) {
            is2or7 = false;
        }
    }
    cout << "} -> " << boolalpha << is2or7 << endl;
}

void t38() {
    int n;
    cout << "int tipida massiv berilgan. Agar massivdagi hamma elementi musbat"
            " juft son bo’lsa, “salom”, aks holda “xayr” so’zini chiqaring" << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return;
    }
    bool allPositiveEven = true;
    cout << "{";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    cout << "} -> ";
    for (int i = 0; i < n; ++i) {
        if (!(arr[i] % 2 == 0 && arr[i] > 0)) {
            allPositiveEven = false;
            break;
        }
    }
    if (allPositiveEven) {
        cout << "salom" << endl;
    } else {
        cout << "xayr" << endl;
    }
}

void t39() {
    int n;
    cout << "int tipida massiv berilgan. Agar massivda 1 soni va"
            " 3 soni bolmasa, true qaytaring" << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return;
    }
    bool not1and3 = true;
    cout << "lucky13[";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    cout << "] -> ";
    for (int i = 0; i < n; ++i) {
        if ((arr[i] == 1 || arr[i] == 3)) {
            not1and3 = false;
            break;
        }
    }
    cout << boolalpha << not1and3 << endl;
}

void t40() {
    int n, k1, k2, sum = 0;
    cout << "n ta butun sondan iborat massiv va k1, k2 sonlari berilgan(k1<k2)."
            " Sizning vazifangiz k1 indexdan k2 indexgacha bo’lgan barcha sonlarni"
            " qo’shib natijani qaytarish. " << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return;
    }
    cout << "Qo'shishni qaysi indeksdan boshlaymiz:";
    cin >> k1;
    cout << "Qo'shishni qaysi indeks bilan tugatamiz:";
    cin >> k2;
    if (k1 >= 0 && k1 < n && k2 >= 0 && k2 < n && k1 <= k2) {
        cout << "{";
        for (int i = 0; i < n; ++i) {
            if (i != 0)cout << ", ";
            cout << arr[i];
        }
        cout << "}, k1=" << k1 << ", k2=" << k2 << " -> ";
        bool isFirst = true;
        for (int i = min(k1, k2); i <= max(k1, k2); ++i) {
            if (!isFirst)cout << " + ";
            cout << arr[i];
            sum += arr[i];
            isFirst = false;
        }
        cout << " = " << sum << endl;
    } else {
        cout << "Siz kiritgan indeks, mavjud massivdan katta!" << endl;
    }
}

void t41() {
    int n;
    cout << "int tipida massiv berilgan. Agar massivda 3ta ketma-ket "
            "sonlar birin ketin joylashgan bolsa, true qaytaring." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return;
    }
    cout << "tripleUp[";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    cout << "] -> ";
    bool tripleUp = false;
    for (int i = 0; i < n - 2; ++i) {
        if (arr[i] + 1 == arr[i + 1] && arr[i + 1] + 1 == arr[i + 2]) {
            tripleUp = true;
            break;
        }
    }
    cout << boolalpha << tripleUp << endl;;
}

void t42() {
    int n;
    cout << "int tipida massiv berilgan. Agar massivda 2 ta 2 elementi ketma-ket kelsa, true qaytaring" << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return;
    }
    cout << "has22[";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    cout << "] -> ";
    bool has22 = false;
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] == 2 && arr[i + 1] == 2) {
            has22 = true;
            break;
        }
    }
    cout << boolalpha << has22 << endl;
}

void t43() {
    int n;
    cout << "int tipida massiv berilgan. Agar massivdagi hamma "
            "elementi musbat toq son bolsa true qaytaring" << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    cout << endl;
    cout << "only14([";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    cout << "]) -> ";
    bool isPlusOdd = true;
    for (int i = 0; i < n; ++i) {
        if (!(arr[i] > 0 and arr[i] % 2 != 0)) {
            isPlusOdd = false;
            break;
        }
    }
    cout << boolalpha << isPlusOdd << endl;
}

void t44() {
    int n, sum = 0;
    cout << "int tipida massiv berilgan. Massivdagi elementlar"
            " yig’indisiini toping, lekin massivda 13 soni bolsa,"
            " 13ni ham va undan 1ta keyingi"
            " elementni ham hisobga olmang." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    cout << endl;
    cout << "sum13([";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    cout << "]) -> ";
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 13) {
            i++;
        } else {
            sum += arr[i];
        }
    }
    cout << sum << endl;;
}

void t45() {
    int n, sum = 0;
    cout << "sum67 int tipida massiv berilgan. Massivdagi elementlar yigindisini"
            " toping, lekin masivda uchraydigan 6 dan boshlanib, keying 7 soni"
            " chiqquncha bolgan ketma-ketlikdagi elementlarni hisobga olmang." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    cout << endl;
    cout << "sum67([";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    cout << "]) -> ";
    bool skip = false;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 6) skip = true;
        if (!skip) sum += arr[i];
        if (skip && arr[i] == 7)skip = false;
    }
    cout << sum << endl;
}

void t46() {
    int n, max = INT_MIN, secondMax = INT_MIN;
    cout << "n uzunlikdagi massivning eng katta ikkinchi elementini toping." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    cout << endl;
    cout << "[";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    cout << "] -> ";

    for (int i = 0; i < n; ++i) {
        if (max < arr[i]) {
            secondMax = max;
            max = arr[i];
        } else if (secondMax < arr[i] && max != arr[i]) {
            secondMax = arr[i];
        }
    }
    if (secondMax == INT_MIN) {
        cout << "Hamma elementni qiymati teng!" << endl;
    } else {
        cout << secondMax << endl;
    }
}

void t47() {
    int n, m;
    cout << "N ta butun sondan tashkil topgan ikkita array1 va array2"
            " massiv berilgan. array1 va array2 massivlarning mos "
            "elementlarini ayirmasidan hosil bo’lgan yangi array3 "
            "massiv hosil qiling va natijani ekranga chiqaring." << endl;
    cout << "1-massivga hajm bering :";
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr1[i];
    }
    cout << "2-massivga hajm bering :";
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; ++i) {
        cout << i << "-index :";
        cin >> arr2[i];
    }
    cout << endl;
    cout << "array1 = [";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr1[i];
    }
    cout << "]" << endl;
    cout << " - " << endl;
    cout << "array2 = [";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr2[i];
    }
    cout << "]" << endl;
    cout << "_________________________________" << endl;
    cout << "array3 = [";
    int arr3[max(n, m)];
    for (int i = 0; i < max(n, m); ++i) {
        arr3[i] = arr1[i] - arr2[i];
        if (i != 0)cout << ", ";
        cout << arr3[i];
    }
    cout << "]" << endl;
}

void t48() {
    int n, count = 0;
    cout << "Ixtiyoriy sonlardan iborat arr massivi berilgan. Agar ushbu massivda"
            " 3 soni roppa rosa 3 marta qatnashgan bo’lsa va 3 soni yonma yon"
            " kelmagan bo’lsa true qiymat qaytaring." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    cout << "{";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    cout << "} -> " << endl;
    bool valid = true;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 3)count++;
        if (i < n - 1 && arr[i + 1] == 3) {
            valid = false;
            break;
        }
    }
    bool isTripleThree = (count == 3 && valid);
    cout << boolalpha << isTripleThree << endl;
}

void t49() {
    int n;
    cout << "Int tipida massiv berilgan. Massivni birinchi elementini olib oxiriga"
            " qoying va qolgan elementlarni suring, natijaviy massivni ekranga chiqaring." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    cout << "rotateLeft3([";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    cout << "] -> " << endl;
    int newArr[n];
    for (int i = 0; i < n; ++i) {
        newArr[(i)] = arr[(i + 1) % n];
    }
    cout << "[";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << newArr[i];
    }
    cout << "]" << endl;
}

void t50() {
    int n;
    cout << "Int tipida massiv berilgan. Massivni oxirgi elementini olib "
            "boshiga qoying va qolgan elementlarni suring, natijaviy massivni"
            " ekranga chiqaring." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    cout << "rotateRight([";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    cout << "] -> " << endl;
    int newArr[n];
    for (int i = 0; i < n; ++i) {
        newArr[(i + 1) % n] = arr[(i)];
    }
    cout << "[";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << newArr[i];
    }
    cout << "]" << endl;
}

void t51() {
    int n, k;
    cout << "Int tipida massiv va 1ta k soni berilgan. Massiv elementlarini"
            " k ta o’ngga aylantiring." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    cout << " 'K' ga nechi bermoqchisiz?";
    cin >> k;
    cout << "[";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    cout << "]," << k << " -> " << endl;
    int newArr[n];
    for (int i = 0; i < n; ++i) {
        newArr[(i + k) % n] = arr[(i)];
    }
    cout << "[";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << newArr[i];
    }
    cout << "]" << endl;
}

void t52() {
    int n;
    cout << "Int toifada ixtiyoriy n soni berilgan. Shu sonda qaysi raqam"
            " eng ko’p ishtirok etganini toping. Agar 2 va undan ortiq "
            "raqamlar eng ko’p bir xil miqdorda bo’lsa, eng katta raqamni"
            " toping." << endl;
    cout << "Nechi xonali sonni tekshiramiz?";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    cout << " -> ";
    int max = 0;
    int maxCount = INT_MIN;
    for (int i = 0; i < n; ++i) {
        int count = 0;
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] == arr[j]) count++;
        }
        if (maxCount <= count) {
            maxCount = count;
            max = arr[i];
        }
    }
    cout << max << endl;
}

void t53() {
    int n, k;

    cout << "Int toifada ixtiyoriy n soni berilgan. Shu sonda qaysi raqam"
            " eng ko’p ishtirok etganini toping. Agar 2 va undan ortiq "
            "raqamlar eng ko’p bir xil miqdorda bo’lsa, eng katta raqamni"
            " toping." << endl;
    cout << "Massivga hajm bering :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    cout << "'K'ga qiymat bering :";
    cin >> k;
    if ((n % 2 == 0 && k % 2 == 0) || (n % 2 != 0 && k % 2 != 0)) {
        int mid = n / 2;
        int start, end;
        if (n % 2 == 0) {
            start = mid - (k / 2);
            end = mid + (k / 2) - 1;
        } else {
            start = mid - (k / 2);
            end = mid + (k / 2);
        }
        cout << "[";
        for (int i = 0; i < n; ++i) {
            if (i != 0)cout << ", ";
            cout << arr[i];
        }
        cout << "], " << k << " -> [";
        bool isFirst = false;
        for (int i = start; i <= end; ++i) {
            if (isFirst)cout << ", ";
            cout << arr[i];
            isFirst = true;
        }
        cout << "]" << endl;
    } else {
        cout << "n va k lar ikkisi ham toq yoki ikkisi"
                " ham juft son kiritilishi kerak" << endl;
    }
}

void t54() {
    int n, sum = 0;
    cout << "Int tipida massiv berilgan. Massivdagi elementlar"
            " yig’indisiini toping, lekin massivda 13 soni bolsa,"
            " 13ni ham va undan 1ta keyingi elementni ham hisobga olmang." << endl;
    cout << "Massivga hajm kiriting :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    cout << " -> ";
    for (int i = 0; i < n; ++i) {
        if (!(arr[i] == 13)) {
            sum += arr[i];
        } else if (arr[i] == 13) {
            i++;
        }
    }
    cout << sum << endl;
}

void t55() {
    int n, k;
    cout << "int tipida massiv va n soni berilgan. Agar massivdagi"
            " barcha qo’shni-qo’shni juft elementlardan 1tasi n "
            "soniga teng bolsa, true qaytaring." << endl;
    cout << "Massivga hajm kiriting :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    cout << "'N'ga qiymat bering :";
    cin >> k;
    cout << "isEverywhere([";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    cout << "], " << k << ") -> ";
    bool isEverywhere = true;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != k and arr[i + 1] != k) {
            isEverywhere = false;
            break;
        }
    }
    cout << boolalpha << isEverywhere << endl;
}

void t56() {
    int n;
    cout << "Int tipida teng uzunlikda 2ta a va b massivlar berilgan. "
            "a massivni n-inchi indeksidagi element b massivni n-inchi"
            " indeksidagi elementdan 1taga yoki 2taga farq qiladiganlarni"
            " sonini toping." << endl;
    cout << "Massivga hajm kiriting :";
    cin >> n;
    cout << "1-arrayni elemntlar bilan to'ldiring:" << endl;
    int arr1[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr1[i];
    }
    cout << "2-arrayni elemntlar bilan to'ldiring:" << endl;
    int arr2[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr2[i];
    }
    cout << endl;
    cout << "matchUp([";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr1[i];
    }
    cout << "], ";
    cout << "[";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr2[i];
    }
    int count = 0;
    for (int i = 0; i < n; ++i) {
        int difference = abs(arr1[i] - arr2[i]);
        if (difference == 1 || difference == 2)count++;
    }
    cout << "]) -> " << count << endl;
}

void t57() {
    int n;
    cout << "Int tipida massiv berilgan. Agar massivda 2ta "
            "ketma-ket 7 soni qoshni bolsa yoki ularni faqat "
            "1ta element ajratib tursa, true qaytaring." << endl;
    cout << "Massivga hajm kiriting :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    cout << endl;
    cout << "has77([";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    cout << "]) -> ";
    bool has77 = false;
    for (int i = 0; i < n - 1; ++i) {
        if ((arr[i] == 7 && arr[i + 1] == 7) || (i < n - 2 && arr[i] == 7 && arr[i + 2] == 7)) {
            has77 = true;
            break;
        }
    }
    cout << "-> " << boolalpha << has77 << endl;
}

void t58() {
    int n;
    cout << "Int tipida massiv berilgan. Agar massivda 1dan o’ng tarafda "
            "2 soni uchrasa,true qaytaring." << endl;
    cout << "Massivga hajm kiriting :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << i << "-index :";
        cin >> arr[i];
    }
    cout << endl;
    cout << "has12([";
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << ", ";
        cout << arr[i];
    }
    cout << "] -> ";
    bool has12 = false;
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] == 1 && arr[i + 1] == 2) {
            has12 = true;
            break;
        }
    }
    cout << boolalpha << has12 << endl;
}
