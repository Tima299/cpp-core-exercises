#include <iostream>
using namespace std;
void t1(), t2(), t3(), t4(), t5(), t6(), t7(), t8(), t9(), t10(), t11(), t12(), t13(), t14(), t15(), t16(), t17(), t18(), t19(), t20(), t21(), t22(), t23();
int main()
{
    int task;
    char continueChoice;
    do {
        cout << "Select a task (1-23, to exit 0)" << endl;
        cout << "___________________________________________________" << endl;

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
            default:
                cout << "Bunday tanlov yo'q!" << endl;
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
void t1() {
    double L, M;
    /*Uzunlik L santimetrda berilgan. Undagi to’liq metrlar sonini aniqlovchi programma tuzilsin. (1 metr = 100 santimetr)
*/
    cout<<"Necha santimetrni metrga o'tkazmoqchisiz?\n";
    cin>>L;
    M=L/100;
    cout<<L<<" santimetr bu "<<M<<" metr!"<<endl;
    cout << "___________________________________________________" << endl;
}
void t2(){
    /*Og’irlik M kilogrammda berilgan.
     *Undagi to’liq tonnalar sonini aniqlovchi programma tuzilsin.
   (1 tonna = 1000 kilogramm)*/
    double M, T;
    cout<<" Necha kiloni tonnaga o'tkazmoqchisiz?"<<endl;
    cin>>M;
    T=M/1000;
    cout<<M<<" kilogram bu "<<T<<" tonna!"<<endl;
    cout << "___________________________________________________" << endl;
}
void t3() {
    /*x va y sonlar berilgan. Javohirning yoshi x da.
     *U y yildan keyin nechi yoshga to’lishini toping.
*/
    int x, y, jYoshi;
    cout<<"Javohirni yoshini kiriting "<<endl;
    cin>>x;
    cout<<"Javohirni necha yildan keyingi yoshini bilmoqchisiz? "<<endl;
    cin>>y;
    jYoshi = x + y;
    cout<<"Javohir "<<y <<" yildan keyin "<<jYoshi<<" yoshda bo'ladi."<<endl;
    cout << "___________________________________________________" << endl;
}
void t4() {
/*Berilgan n sekund necha minut va sekundlardan iboratligini topuvchi dastur tuzing.
 *Masalan: n = 150 kiritlsa, konsolga 2 minut 30 sekund chiqairng.*/
    int n, m, rN;
    cout<<"Minutga o'tkazish uchun sekundga qiymat bering: "<<endl;
    cin>>n;
    m = n / 60;
    rN = n % 60;
    cout<<m<<" minut : "<<rN<<" sekund"<<endl;
    cout << "___________________________________________________" << endl;
}
void t5() {
    /*Berilgan n sekund necha soatligini topuvchi dastur tuzing.
     *(1soat = 3600 sekund)
*/
    int n, m, H, rN;
    cout<<"Soatga o'tkazish uchun sekundga qiymat bering: "<<endl;
    cin>>n;
    H = n / 3600;
    m = (n-H*3600)/60;
    rN = n % 60;
    cout<<H<<" soat : "<<m<<" minut : "<<rN<<" sekund"<<endl;
    cout << "___________________________________________________" << endl;
}
void t6() {
    /*Ikki xonali son berilgan. Oldin uning o’nliklar xonasidagi raqamni,
     *so’ng birlar xonasidagi raqamni chiqaruvchi programma tuzilsin.
*/
    int ikkiXonali;
    int onlik;
    int birlik;
    cout<<"Ikki xonali songa qiymat bering! "<<endl;
    cin>>ikkiXonali;
    onlik = ikkiXonali/10%10;
    cout<<"Berilgan ikki xonali sonni o'nlik xonasidagi raqam: "<<onlik<<endl;
    birlik=ikkiXonali%10;
    cout<<"Berilgan ikki xonali sonni birlik xonasidagi raqam: "<<birlik<<endl;
    cout << "___________________________________________________" << endl;
}
void t7() {
    /*Uch xonali son berilgan.
     *Oldin uni birliklar xonasidagi raqamni so’ng yuzliklar
     *xonasidagi raqamni chiqaruvchi programma tuzilsin*/
    int uchXonali;
    int onlik;
    int birlik;
    int yuzlik;
    cout<<"Uch xonali songa qiymat bering! "<<endl;
    cin>>uchXonali;
    birlik=uchXonali%10;
    cout<<"Berilgan uch xonali sonni birlik xonasidagi raqam: "<<birlik<<endl;
     onlik = uchXonali/10%10;
    cout<<"Berilgan uch xonali sonni o'nlik xonasidagi raqam: "<<onlik<<endl;
    yuzlik = uchXonali/100%10;
    cout<<"Berilgan uch xonali sonni yuzlik xonasidagi raqam: "<<yuzlik<<endl;
    cout << "___________________________________________________" << endl;
}
void t8() {
    /*Uch xonali son berilgan. Uning yuzlar va
     *o’nlar xonasidagi raqamni aniqlovchi programma tuzilsin.
     *(input - 257, output - 2 va 5)
     */
    int uchXonali;
    int onlik;
    int birlik;
    int yuzlik;
    cout<<"Uch xonali songa qiymat bering! "<<endl;
    cin>>uchXonali;
    yuzlik = uchXonali/100%10;
    cout<<"Berilgan uch xonali sonni yuzlik xonasidagi raqam: "<<yuzlik<<endl;
    onlik = uchXonali/10%10;
    cout<<"Berilgan uch xonali sonni o'nlik xonasidagi raqam: "<<onlik<<endl;
    cout << "___________________________________________________" << endl;
}
void t9() {
    /*999 dan katta son berilgan.
     *Uni mingliklar xonasidagi raqamni aniqlovchi programma tuzilsin.
     *(Masalan: input - 4783, output - 4)
*/
    int tortXonali, minglik;
    cout<<"To'rt xonali son kiriting! "<<endl;
    cin>>tortXonali;
    minglik = tortXonali/1000%10;
    cout<<"Siz kiritgan to'rt xonali sonni minglik xonasidagi son bu: "<<minglik<<endl;
    cout << "___________________________________________________" << endl;
}
void t10() {
    /*
     * 999 dan katta son berilgan.
     * Uni yuzliklar xonasidagi raqamni aniqlovchi programma tuzilsin.
     * (Masalan: input - 4783, output - 7)
     */
    int tortXonali, yuzlik;
    cout<<"To'rt xonali son kiriting! "<<endl;
    cin>>tortXonali;
    yuzlik = tortXonali/100%10;
    cout<<"Siz kiritgan to'rt xonali sonni yuzlik xonasidagi son bu: "<<yuzlik<<endl;
    cout << "___________________________________________________" << endl;
}
void t11() {
    /*
     * Ikki xonali son berilgan. Uning raqamlar yig’indisini aniqlovchi programma tuzilsin.
     */
    int ikkiXonali, birlik, onlik, rY;
    cout<<"Ikki xonali son kiriting"<<endl;
    cin>>ikkiXonali;
    birlik = ikkiXonali%10;
    onlik = ikkiXonali/10%10;
    rY = birlik+onlik;

    cout<<"Siz kiritgan ikki xonali sonning raqamlar yig'indisi: "<<rY<<endl;
    cout << "___________________________________________________" << endl;

}
void t12() {
    /*
     *Ikki xonali son berilgan. Uning raqamlar o’rni almashtirishdan
     *hosil bo’lgan sonni aniqlovchi programma tuzilsin.
     *(Masalan: input - 27, output - 72)
     */
    int ikkiXonali, birlik, onlik, rY;
    cout<<"Ikki xonali son kiriting"<<endl;
    cin>>ikkiXonali;
    birlik = ikkiXonali%10;
    onlik = ikkiXonali/10%10;
    cout<<"Siz kiritgan sonning raqaqmlari almashishidan xosil bo'lgan son bu: "<<birlik<<onlik<<endl;
    cout << "___________________________________________________" << endl;
}
void t13() {
    /*Uch xonali son berilgan. Uni raqamlar yig’indisini aniqlovchi programma tuzilsin.
     *
     */
    int uchXonali;
    int onlik;
    int birlik;
    int yuzlik;
    int rY;
    cout<<"Uch xonali songa qiymat bering! "<<endl;
    cin>>uchXonali;
    yuzlik = uchXonali/100%10;
    onlik = uchXonali/10%10;
    birlik = uchXonali%10;
    rY=birlik+yuzlik+onlik;
    cout<<"Siz kiritgan uch xonali sonni raqamlar yig'indisi: "<<rY<<endl;
    cout << "___________________________________________________" << endl;
}
void t14() {
    /*Uch xonali son berilgan.
     *Uni raqamlarini teskari tartibda yozishdan hosil bo’lgan
     *sonni aniqlovchi programma tuzilsin.
     *(Masalan: input - 123, output - 321)
     */
    int uchXonali;
    int onlik;
    int birlik;
    int yuzlik;
    int rY;
    cout<<"Uch xonali songa qiymat bering! "<<endl;
    cin>>uchXonali;
    yuzlik = uchXonali/100%10;
    onlik = uchXonali/10%10;
    birlik = uchXonali%10;
    cout<<"Siz kiritgan son bu "<<uchXonali<<" va buning raqamlari almashinuvidan paydo bo'lgan son bu "<<birlik<<onlik<<yuzlik<<endl;
    cout << "___________________________________________________" << endl;
}
void t15() {
    /*Uch xonali son berilgan.
     *Uni chapdan birinchi raqamni o’chirib,
     *o’n tarafiga yozishdan hosil bo’lgan sonni aniqlovchi programma tuzilsin.
     *(Masalan: input - 478, output - 784)
     */
    int uchXonali;
    int onlik;
    int birlik;
    int yuzlik;
    int rY;
    cout<<"Uch xonali songa qiymat bering! "<<endl;
    cin>>uchXonali;
    yuzlik = uchXonali/100%10;
    onlik = uchXonali/10%10;
    birlik = uchXonali%10;
    cout<<"Siz kiritgan son bu "<<uchXonali<<" va buning raqamlari almashinuvidan paydo bo'lgan son bu "<<onlik<<birlik<<yuzlik<<endl;
    cout << "___________________________________________________" << endl;
}

void t16() {
    /*
     * Uch xonali son berilgan.
     * Uni o’ngdan birinchi raqamni o’chirib,
     * chap tarafiga yozishdan hosil bo’lgan sonni aniqlovchi programma tuzilsin.
     * (Masalan: input - 473, output - 347)
     */
    int uchXonali;
    int onlik;
    int birlik;
    int yuzlik;
    int rY;
    cout<<"Uch xonali songa qiymat bering! "<<endl;
    cin>>uchXonali;
    yuzlik = uchXonali/100%10;
    onlik = uchXonali/10%10;
    birlik = uchXonali%10;
    cout<<"Siz kiritgan son bu "<<uchXonali<<" va buning raqamlari almashinuvidan paydo bo'lgan son bu "<<birlik<<yuzlik<<onlik<<endl;
    cout << "___________________________________________________" << endl;
}
void t17() {
    /*Uch xonali son berilgan.
     *Uni o’ngliklar xonasidagi raqam bilan yuzliklar xonasidagi raqamni almashtirishdan
     *hosil bo’lgan sonni aniqlovchi programma tuzilsin.
     *(Masalan: input - 387, output - 837)
     */
    int uchXonali;
    int onlik;
    int birlik;
    int yuzlik;
    int rY;
    cout<<"Uch xonali songa qiymat bering! "<<endl;
    cin>>uchXonali;
    yuzlik = uchXonali/100%10;
    onlik = uchXonali/10%10;
    birlik = uchXonali%10;
    cout<<"Siz kiritgan son bu "<<uchXonali<<" va buning raqamlari almashinuvidan paydo bo'lgan son bu "<<onlik<<yuzlik<<birlik<<endl;
    cout << "___________________________________________________" << endl;
}

void t18() {
    /*Uch xonali son berilgan. Uni o’ngliklar xonasidagi raqam bilan birliklar
     *xonasidagi raqamni almashtirishdan hosil bo’lgan sonni aniqlovchi programma tuzilsin.
     *(Masalan: input - 123, output - 132)
     */
    int uchXonali;
    int onlik;
    int birlik;
    int yuzlik;
    int rY;
    cout<<"Uch xonali songa qiymat bering! "<<endl;
    cin>>uchXonali;
    yuzlik = uchXonali/100%10;
    onlik = uchXonali/10%10;
    birlik = uchXonali%10;
    cout<<"Siz kiritgan son bu "<<uchXonali<<" va buning raqamlari almashinuvidan paydo bo'lgan son bu "<<yuzlik<<birlik<<onlik<<endl;
    cout << "___________________________________________________" << endl;
}
void t19() {
    /*
     * Kun boshidan boshlab N sekund vaqt o’tti.
     * Kun boshidan boshlab qancha minut to’la o’tganini
     * aniqlovchi programma tuzilsin.
     */
    int N, m;
    cout<<" Kun boshidan beri nechi sekund o'tdi?"<<endl;
    cin>>N;
    m = N/60;
    cout<<"Kun boshidan beri "<<m<<" minut to'liq o'tdi"<<endl;
    cout << "___________________________________________________" << endl;
}
void t20() {
    /*Kun boshidan boshlab N sekund vaqt o’tti.
     *Kun boshidan boshlab qancha soat to’la o’tganini
     *aniqlovchi programma tuzilsin.
     */
    int N, H;
    cout<<" Kun boshidan beri nechi sekund o'tdi?"<<endl;
    cin>>N;
    H = N/3600;
    cout<<"Kun boshidan beri "<<H<<" soat to'liq o'tdi"<<endl;
    cout << "___________________________________________________" << endl;
}
void t21() {
    /*Kun boshidan boshlab N sekund vaqt o’tti.
     *Kun boshidan boshlab qancha minut va
     *sekund o’tganini aniqlovchi programma tuzilsin.*/
    int n, m, rN;
    cout<<"Kun boshidan boshlab necha sekund o'tdi : "<<endl;
    cin>>n;
    m = n / 60;
    rN = n % 60;
    cout<<"Kun boshidan boshlab "<<m<<" minut : "<<rN<<" sekund  o'tdi!"<<endl;
    cout << "___________________________________________________" << endl;
}
void t22() {
    /*
     * Kun boshidan boshlab N sekund vaqt o’tti.
     * Kun boshidan boshlab qancha soat va sekun
     * d o’tganini aniqlovchi programma tuzilsin
     */
    int n, m, H, rN;
    cout<<"Kun boshidan boshlab necha sekund o'tdi: "<<endl;
    cin>>n;
    H = n / 3600;
    rN = n % 60;
    cout<<"Kun boshidan boshlab "<<H<<" soat : " <<rN<<" sekund o'tdi!"<<endl;
    cout << "___________________________________________________" << endl;
}
void t23() {
    /*Kun boshidan boshlab N sekund vaqt o’tti.
     *Kun boshidan boshlab qancha soat minut va sekund o’tganini
     *aniqlovchi programma tuzilsin.*/
    int n, m, H, rN;
    cout<<"Kun boshidan boshlab necha sekund o'tdi: "<<endl;
    cin>>n;
    H = n / 3600;
    m = (n-H*3600)/60;
    rN = n % 60;
    cout<<"Kun boshidan boshlab "<<H<<" soat : "<<m<<" minut : "<<rN<<" sekund o'tdi!"<<endl;
    cout << "___________________________________________________" << endl;
}