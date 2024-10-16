#include <iostream>

using namespace std;

int zad1a()
{
    int a;

    cout<<"prosze podac wynik" << endl;

    cin >> a;

    if(a>100||a<0)
        {
        cout<<"niepoprawne dane"<<endl;
        return 0;
        }
    if(a==100)
        cout<<"ocena celujaca"<<endl;
        else if(a>=85)
            cout<<"ocena bardzo dobra"<<endl;
        else if(a>=70)
            cout<<"ocena dobra"<<endl;
        else if(a>=50)
            cout<<"ocena dostateczna"<<endl;
        else cout<<"ocena niedostateczna"<<endl;
}
void zad1b()
{
    int waga;
    int wzrost;
    int BMI;
    cout<<"prosze podac wage w kg"<<endl;
    cin >> waga;
    cout <<"prosze podac wzrost w m"<<endl;
    cin >> wzrost;
    BMI = waga/(wzrost * wzrost);
    cout << "twoje BMI to: "<<BMI<<endl;

    if(BMI <= 18.5)
        cout<<"Twoj stan wagowy: niedowaga"<<endl;
    else if (BMI <= 24.9)
        cout << "Twoj stan wagowy: W normie" << endl;
    else if (BMI <= 29.9)
        cout << "Twoj stan wagowy: nadwaga"<<endl;
    else if (BMI>=30)
        cout<< "Twoj stan wagowy: otylosc" << endl;
}
void zad1c()
{
    int a;
    cout<< "prosze podac liczbe"<<endl;
    cin >> a;
    if(a%2==0)
        cout<<"liczba jest podzielna przez 2" << endl;
    else
        cout<< "liczba nie jest podzielna przez 2" <<endl;
    if (a%3==0)
        cout<< "liczba jest podzielna przez 3"<<endl;
    else
        cout << "liczba nie jest podzielna przez 3"<<endl;
}
void zad2a()
{
    for(int i=1;i <= 10; i++){
        for(int j=2; j<=10; j++){
            cout<< i << "*" << j << "=" << i*j << endl;
        }
    cout << endl;

    }
}
void zad2b()
{
    int a;
    int b;
    cout << "podaj szerokosc: " << endl;
    cin >> a;
    cout << "podaj wysokosc: " << endl;
    cin >> b;
    for(int i = 0; i < b; i++){
            for(int j = 0; j < a; j++){
        if(i == 0 || i == b - 1 || j == 0 || j == a - 1)
            cout << "*";
        else
            cout << " ";
            }
    cout << endl;
    }

}
void zad2c()
{
    int a;
    int b;
    cout << "podaj szerokosc: " << endl;
    cin >> a;
    cout << "podaj wysokosc: " << endl;
    cin >> b;
    for(int i = 0; i < b; i++){
            for(int j = 0; j < a; j++){
        if(i == 0 || i == b - 1)
            cout << "-";
        else if(j == 0 || j == a-1)
            cout << "|";
        else if((i+j)%2 == 0)
            cout << "#";
        else
            cout << "*";
            }
    cout << endl;
    }

}
void zad2d()
{
    int count = 0;
    for(int i = 102; i <= 987; ++i)
    {
        int a = i/100;
        int b = (i/10)%10;
        int c = i%10;

        if (a != b && b != c && a != c) {
            std::cout << i << std::endl;
            count++;
        }
    }
cout << "laczna liczba: " << count << endl;
}
void zad2e()
{
    int szerokosc, wysokosc;

    // Pobieranie danych od u¿ytkownika
    cout << "Podaj szerokosc: ";
    cin >> szerokosc;

    cout << "Podaj wysokosc: ";
    cin >> wysokosc;

    for (int i = 0; i < wysokosc; i++) {
        // Obliczanie liczby gwiazdek dla danej linii
        int liczbaGwiazdek = szerokosc - (szerokosc - 1) * i / (wysokosc - 1);

        // Wypisanie odpowiedniej liczby spacji na pocz¹tku ka¿dego wiersza
        for (int j = 0; j < (szerokosc - liczbaGwiazdek) / 2; j++) {
            cout << " ";
        }
        // Wypisanie gwiazdek
        for (int j = 0; j < liczbaGwiazdek; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
void zad2f()
{
   int szer, wys;
   cout <<"podaj szerokosc: " << endl;
   cin >> szer;
   cout << "podaj wysokosc: " << endl;
   cin >> wys;

        cout << "  |";
        for(int i = 0; i < szer; i++){
            cout<< "  " << i+1 << "  ";
        }

        cout<<"|"<<endl;

        for(int i = 0; i < (5*szer + 4); i++){
            cout<< "-";
            }
        cout << endl;


    for(int i = 1; i <= wys; i++){
            cout << i << " |";
        for (int j = 1; j <= szer; j++)
            {
                if(i*j < 10)
                    cout << "  " << i*j << "  ";
                else
                    cout << "  " << i*j << " ";
            }
            cout << "|" << endl;
}
for(int l = 0; l < (5*szer + 4); l++)
            cout<< "-";


}

int main()
{
    //zad1a();
    //zad1b();
    //zad1c();
    //zad2a();
    //zad2b();
    //zad2c();
    //zad2d();
    //zad2e();//chat gpt :D
    //zad2f();


    return 0;
}
