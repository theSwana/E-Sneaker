#include <iostream>
#include <fstream>
#include <utility>
#include <algorithm>
#include <numeric>
#include<string>
using namespace std;



int main()
{
    //*******Opcenito*******
    string DaNe;
    float suma = 0;
    int aa = 0;
    ofstream data("Binarna.txt", ios::binary);
    string provjera;

    //*******Korisnik*******
    int izbor;
    string* IDD = new  string[2];
    string* IMEIPREZIME = new string[2];
    string* password = new string[2];
    long double* stanje = new long double[2];
    float Velicina;
    int brk = 0;

    //*******Tenisice*******
    string* Naziv = new string[200];
    double* cijena = new double[200];;
    int brT = 0;

    //*******Kupnja*********
    int brKU = 0;
    string* ImeTenisica = new string[200];
    string* boja = new string[200];
    int rednibroj = 1;
    string* BOJA = new string[1000];
    double* CIJENA = new double[1000];
    int ez;


    while (1){
        jump:
        system("cls");
        cout << "\n";
        cout << "       *   DOBRODOSLI U E-SNEAKER  *";//Izbornik
        cout << "\n";
        cout << "\n";
        cout << "   IZBORNIK: ";
        cout << "\n";
        cout << "   1. Sign up\n";
        cout << "   2. Informacije o racunu\n";
        cout << "   3. Dodavanje tenisica\n";
        cout << "   4. Pregled dostupnih tenisica\n";
        cout << "   5. Kupovina\n";
        cout << "   6. Kosarica\n";
        cout << "   7. Izlaz iz programa\n";
        cout << "\n";
        cout << "\n";
        cout << "        >>Unesite izbor: ";
        cin >> izbor;
        system("cls");

        if (izbor == 1)//Unos korisnika te promjena accounta ako korisnik vec ima postojeci account
        {
        skr:
            if (brk == 0) {


                cout << "* Unesite svoj username: ";
                cin.ignore();
                getline(cin, IDD[brk]);
                cout << "* Unesite svoj password: ";
                cin >> password[brk];
                cout << "* Unesite ime i prezime: ";
                cin.ignore();
                getline(cin, IMEIPREZIME[brk]);
                cout << "* Unesite vasu velicinu noge: ";
                cin >> Velicina;
                cout << "* Unesite stanje na racunu: ";
                cin >> stanje[brk];
                system("pause");
                brk++;
                data << IDD;
                data.write((char*)&password, sizeof(password));
                data.write((char*)&Velicina, sizeof(Velicina));
                data.close();
            }
            else
            {
                cout << "Ulogirani ste na account " << IDD[0] << ", zelite li se izlogirati (Da/Ne) ili promijeniti password(1)\n";
                cin >> DaNe;
                if (DaNe == "Da") {
                    brk--;
                    goto skr;
                }
                else if (DaNe == "Ne")
                {
                    goto jump;
                }
                
                else
                {
                    cout << "KRIVI UNOS!\n";
                    system("pause");
                    goto jump;
                }
            }

        }
        else if (izbor == 2)//ispis korisnickih podataka
        {
            for (int i = 0; i < brk; i++)
            {

                cout << "=> Username: " << IDD[i] << endl;
                cout << "=> Ime i prezime: " << IMEIPREZIME[i] << endl;
                cout << "=> password: " << password[i] << endl;
                cout << "=> Preferirana velicina cipela: " << Velicina << " (EU)" << endl;
                cout << "=> Stanje na racunu: " << stanje[i] << " kn" << endl;
                cout << "\n";
            }
            system("pause");
        }
        else if (izbor == 3)//unos tenisica 
        {
            cout << "Unestite naziv tenisica: ";
            cin.ignore();
            getline(cin, Naziv[brT]);
            cout << "Unesite cijenu tenisica: ";
            cin >> cijena[brT];
            brT++;


            system("pause");
        }
        else if (izbor == 4)//ispis informacija o tenisicama
        {
            for (int i = 0; i < brT; i++) {
                cout << "\n";
                cout << "Naziv: " << Naziv[i] << endl;
                cout << "Cijena: " << cijena[i] << endl;
                cout << "\n";
            }
            system("pause");
        }
        else if (izbor == 5)//kupnja tenisica
        {
        kupnjajump:
            cout << "\n";
            cout << "Izbor tenisica: ";
            for (int i = 0; i < brT; i++) {
                cout << "\n";
                cout << rednibroj << "." << endl;
                cout << "Naziv: " << Naziv[i] << endl;
                cout << "Cijena: " << cijena[i] << endl;
                cout << "\n";
                rednibroj++;
            }
            cout << "Unesite koje biste tenisice voljeli kupiti: ";
            cin >> ez;

            aa = (ez - 1);
            cout << "\n";
            cout << "Odabrali ste tenisice [" << Naziv[aa] << "]" << "\n";
            cout << "Vasa velicina tenisica je: " << Velicina << "\n";
            cout << "Cijena tenisica je: " << cijena[aa] << " kn" << "\n";
            cout << "Unesite zeljenu boju tenisica: \n";
            cin.ignore();
            getline(cin, boja[brKU]);

            ImeTenisica[brKU] = Naziv[aa];
            BOJA[brKU] = boja[aa];
            CIJENA[brKU] = cijena[aa];
            brKU++;
            suma += cijena[aa];
            aa++;


            system("pause");
            rednibroj = 1;

        }
        else if (izbor == 6)//kosarica 
        {
            cout << "Vasa kosarica: " << endl;
            for (int i = 0; i < brKU; i++) {
                cout << "\n";
                cout << "Tenisice: " << ImeTenisica[i] << endl;
                cout << "Boja: " << BOJA[i] << endl;
                cout << "Velicina: " << Velicina << endl;
                cout << "Cijena: " << CIJENA[i] << endl;
            }
            cout << "\n ";
            cout << "Odaberite od ponudenog: \n";//izbornik za kosaricu
            cout << "1. Nastavite kupnju \n";
            cout << "2. Otidite na placanje \n";
            cout << "3. Vratite se u pocetni menu\n";
            cin >> izbor;
            cout << "Vas odabir je: " << izbor;
            if (izbor == 1)
            {
                cout << "Nastavak kupnje";
                system("pause");
                goto kupnjajump;
            }
            else if (izbor == 2)
            {
                cout << "   Racun\n";
                cout << "\n";               
                cout << "Ukupna cijena za placanje: " << suma << " kn" << endl;
                if (stanje[0] - suma < 0) {
                    cout << "Placanje neuspjesno, nedovoljno kredita na racunu !" << endl;
                }
                else {
                    stanje[0] = stanje[0] - suma;
                    cout << "placanje uspjesno izvrseno" << endl;
                    while (brKU > 0) {
                        CIJENA[brKU];
                        ImeTenisica[brKU];
                        BOJA[brKU];
                        brKU--;
                    }
                    system("pause");
                }
            }
            else if (izbor == 3) {
                goto jump;
            }
            else {
                cout << "Krivi unos!";
                goto jump;
            }

            system("pause");
        }
        else if (izbor == 7)
        {
            break;
        }
       else if (izbor == 69)//aditional stuff
        {
            cout << "   NE!" << endl;

            system("pause");
            goto jump;
        }

        else//krivi unos
        {
            cout << "Krivi unos!" << endl;
            system("pause");
            goto jump;
        }
    }
    return 0;
}