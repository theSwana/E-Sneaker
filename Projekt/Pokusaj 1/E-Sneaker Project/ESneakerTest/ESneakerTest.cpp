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
    int n;
    int polje[16] = { 35, 36, 37, 38, 39, 40, 41, 42 ,43, 44, 45, 46, 47, 48, 49, 50 };
    int ddpolje[100][100];
    int s;

    //*******Korisnik*******
    int izbor;
    string* IDD = new  string[200];
    string* password = new  string[200];
    string* IMEIPREZIME = new string[200];
    double* stanje = new double[200];
    int brk = 0;

    //*******Tenisice*******
    string* Naziv = new string[20];
    float Ve[100][100];
    string* boja = new string[100];
    double* cijena = new double[20];
    int brT = 0;

    //*******Kupnja*********
    int brKU = 0;
    string* ImeTenisica = new string[10000];
    float* Velicina = new float[10000];

    while (1)
    {
    jump:
        system("cls");
        cout << "*   DOBRODOSLI U E-SNEAKER  *" << endl;
        cout << "\n" << endl;
        cout << "\n" << endl;
        cout << "IZBORNIK: " << endl;
        cout << "\n" << endl;
        cout << "1. Sign up\n";
        cout << "2. Informacije o racunu\n";
        cout << "3. Dodavanje tenisica\n";
        cout << "4. Pregled dostupnih tenisica\n";
        cout << "5. Kosarica\n";
        cout << "6. Izlaz iz programa\n";
        cout << "\n";
        cout << "Unesite izbor: ";
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
            cout << "Odaberite broj dostupnih velicina: ";
            cin >> n;
            int i = 0;
            int x = 0;
            while (i < n && x == brT) {
                cin>> ddpolje[i][x];
                i++;
            }
            cout << "Unesite dostupne boje: ";
            cin.ignore();
            getline(cin, boja[brT]);
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
                cout << "Unesite broj tenisica za koje zelite vidjeti dostupne velicine velicine: ";
                cin >> s;
                int x = 0;
                int p = 0;
                while (x == s - 1 && i <= sizeof(ddpolje[p][x])) {
                    cout << i;
                    cout << ddpolje[i][x];
                    i++;
                }
                cout << "Boje: "<<boja[i]<<endl;
                cout << "Cijena: "<<cijena[i]<<endl;
                cout << "\n";
                system("pause");
            }
            system("pause");
        }
        else if (izbor == 6)
        {
            break;
        }
        else if (izbor == 7)
        {
            for (int i = 0; i < brT; i++)
            {
                cout << "Naziv: " << Naziv[i];
                cout << "Velicine: " << Velicina[i];
                cout << "Boje: " << boja[i];
                cout << "Cijena: " << cijena[i];
            }
            system("pause");
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
