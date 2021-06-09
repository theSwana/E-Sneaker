#include <iostream>
#include <utility>
#include <algorithm>
#include <numeric>
#include<string>
using namespace std;




int main()
{
    //*******Opcenito*******
    string DaNe;

    //*******Korisnik*******
    int izbor;
    string* IDD = new  string[2];
    string* password = new  string[2];
    string* IMEIPREZIME = new string[2];
    long double* stanje = new long double[2];
    float Velicina;
    int brk = 0;

    //*******Tenisice*******
    string* Naziv = new string[200];
    double* cijena = new double[200];;
    int brT = 0;
    int brojtenisica;

    //*******Kupnja*********
    int brKU = 0;
    string* ImeTenisica = new string[200];
    string* boja = new string[200];
    int rednibroj = 1;
    int ez;


    while (1)
    {
    jump:
        system("cls");
        cout << "*   DOBRODOSLI U E-SNEAKER  *";
        cout << "\n" ;
        cout << "IZBORNIK: ";
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
        cout << "               >>Unesite izbor: ";
        cin >> izbor;
        system("cls");

        if (izbor == 1)
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
            }
            else
            {
                cout << "Ulogirani ste na account " << IDD[0] << ", zelite li se izlogirati (Da/Ne)\n";
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
        else if (izbor == 2)
        {
            for (int i = 0; i < brk; i++)
            {

                cout << "=> Username: " << IDD[i] << endl;
                cout << "=> Ime i prezime: " << IMEIPREZIME[i] << endl;
                cout << "=> Preferirana velicina cipela: " << Velicina<<" (EU)" << endl;
                cout << "=> Stanje na racunu: " << stanje[i] << " kn" << endl;
                cout << "\n";
            }
            system("pause");
        }
        else if (izbor == 3)
        {
            cout << "Unestite naziv tenisica: ";
            cin.ignore();
            getline(cin, Naziv[brT]);            
            cout << "Unesite cijenu tenisica: ";
            cin >> cijena[brT];
            brT++;
           

            system("pause");
        }
        else if (izbor == 4)
        {
            for (int i = 0; i < brT; i++) {
                cout << "\n";
                cout << "Naziv: "<<Naziv[i]<<endl;
                cout << "Cijena: "<<cijena[i]<<endl;
                cout << "\n";
            }
            system("pause");
        }
        else if (izbor == 5)
        {
            cout << "Izbor tenisica: ";
            for (int i = 0; i < brT; i++) {
                cout << "\n";
                cout << rednibroj<<"."<<endl;
                cout << "Naziv: " << Naziv[i] << endl;
                cout << "Cijena: " << cijena[i] << endl;
                cout << "\n";
                rednibroj++;
            }
            cout << "Unesite koje biste tenisice voljeli kupiti: ";
            cin >> ez;
            for (int i = 0; i == (ez - 1); i++) {
                cout << "\n";
                cout << "Odabrali ste tenisice [" << Naziv[i] << "]"<<"\n";
                cout << "Unesite zeljenu boju tenisica: \n";
                cin.ignore();
                getline(cin, boja[brKU]);
                cout << "Vasa velicina tenisica je: " << Velicina<<"\n";
                cout << "Cijena tenisica je: " << cijena[i] << " kn"<<"\n";
                ImeTenisica[brKU] = Naziv[i];
                brKU++;
            }
            
            system("pause");
        }
        else if (izbor == 6)
        {
            cout << "Vasa kosarica: "<<endl;
            for (int i = 0; i < brKU; i++) {
                cout << "\n";
                cout << "Tenisice: "<<ImeTenisica[i]<<endl;
                cout << "Boja: "<<boja[i]<<endl;
                cout << "Velicina: "<<Velicina<<endl;
                cout << "Cijena: "<<cijena[i]<<endl;
            }
            cout << "\n: ";
            
            system("pause");
        }
        else if (izbor == 7)
        {
            break;
        }
        else if (izbor == 69)
        {
            cout << "   ! OVO NIJE STRANICA TAKVE VRSTE !"<<endl;
            cout << "        ! SRAM TE I STID BILO !"<<endl;
            cout << "   ! SAD SE VRATI NA POCETNI MENU !"<<endl;
            system("pause");
            goto jump;
            
        }
        else
        {
            cout << "Krivi unos!" << endl;
            system("pause");
            goto jump;


        }
    }
    return 0;
}
