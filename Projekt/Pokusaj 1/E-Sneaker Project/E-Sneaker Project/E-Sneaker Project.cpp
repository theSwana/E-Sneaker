#include <iostream>
#include <utility>
#include <algorithm>
#include <numeric>
#include<string>
using namespace std;


void TenisiceIzbornik() {
    cout << " 1.)    _______________________\n";
    cout << "       |   Nike Airforce 1 mid |\n";
    cout << "       |_______________________|\n";
    cout << "       *************************\n";
    cout << "        => Velicine:  43, 45, 46\n";
    cout << "        => Cijena: 720 kn\n";
    cout << "        => Boje: Bijela, Crna, Crvena\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << " 2.)    _______________________\n";
    cout << "       |   Nike Air Max 720    |\n";
    cout << "       |_______________________|\n";
    cout << "       *************************\n";
    cout << "        => Velicine:  43, 44.5, 46\n";
    cout << "        => Cijena: 1400 kn\n";
    cout << "        => Boje:   Volt\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << " 3.)    _______________________\n";
    cout << "       |   Adidas Deerupt S    |\n";
    cout << "       |_______________________|\n";
    cout << "       *************************\n";
    cout << "        => Velicine:  43, 44.5, 45\n";
    cout << "        => Cijena:    850 kn\n";
    cout << "        => Boje:      Cloud White Core Black, Core Black Cloud White\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << " 4.)    ___________________________\n";
    cout << "       | Adidas Yeezy Boost 350 V2 |\n";
    cout << "       |___________________________|\n";
    cout << "       *****************************\n";
    cout << "        => Velicine:  40, 41, 41.5, 44 \n";
    cout << "        => Cijena:    3163 kn\n";
    cout << "        => Boje:      Black Red, Zebra, Carbon\n";


}

int main()
{
    //*******Opcenito*******
    string DaNe;
   
    //*******Korisnik*******
    int izbor;
    string* IDD = new  string[200];
    string* password = new  string[200];
    string* IMEIPREZIME = new string[200];
    double* stanje = new double[200];
    int brk = 0;

    //*******Tenisice 1.*******
    string Naziv1 = { "Nike Airforce 1 mid" };
    double cijena1 = 720;
    float uv1;
    float dv1[5] = {43, 45, 46 };

    //*******Tenisice 2.*******
    string Naziv2 = { "Nike Air Max 720 " };
    double cijena2 = 1400;
    float uv2;
    float dv2[5] = { 43, 44.5, 46 };

    //*******Tenisice 3.*******
    string Naziv3 = { "Adidas Deerupt S " };
    double cijena3 = 850;
    float uv3;
    float dv3[5] = { 43, 44.5, 45 };

    //*******Tenisice 4.*******
    string Naziv4 = { "Adidas Yeezy Boost 350 V2 " };
    double cijena4 = 3163;
    float uv4;
    float dv4[5] = { 40, 41, 41.5, 44 };

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
        cout << "3. Ponuda tenisica\n";
        cout << "4. Kupnja\n";
        cout << "5. Kosarica\n";
        cout << "6. Izlaz iz programa\n";
        cout << "\n";
        cout << "Unesite izbor: ";
        cin >> izbor;
        system("cls");

        if (izbor == 1)
        {
            skr:
            if (brk==0) {
                cout << "* Unesite svoj username: ";
                cin.ignore();
                getline(cin, IDD[brk]);
                cout << "* Unesite svoj password: ";
                cin>>password[brk];
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
            TenisiceIzbornik();
            system("pause");
        }
        else if (izbor == 4)
        {
            TenisiceIzbornik();
            cout << "Odaberite proizvod: ";
            cin >> izbor;
            if (izbor == 1) {
                ImeTenisica[brKU] = Naziv1;
                cout << "Vas odabrani proizvod su tenisice \n" << Naziv1;
                bop:
                cout << "\nOdaberite velicinu: ";
                cin >> uv1;
                if (uv1 == dv1[0] || uv1 == dv1[1] || uv1 == dv1[2] || uv1 == dv1[3] || uv1 == dv1[4]) {
                    Velicina[brKU] = uv1;
                }
                else
                {
                    cout << "Tu velicinu nemamo u ponudi \n";
                    zoom:
                    cout << "Zelite li unijeti novu velicinu ili se vratit u glavni izbornik(Nova velicina/Povratak)  ";
                    cin.ignore();
                    getline(cin, DaNe);
                    if(DaNe == "Nova Velicina"){
                        goto bop;
                    }
                    else if (DaNe == "Povratak") {
                        goto jump;
                    }
                    else
                    {
                        cout << "Krivi unos pokusajte ponovo";
                        system("pause");
                        goto zoom;
                    }
                }

            }
            system("pause");
        }
        else if (izbor == 6)
        {
            break;
        }
        else if (izbor == 7)
        {
            
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