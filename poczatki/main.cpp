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
            cout << "*";
        else
            cout << "#";
            }
    cout << endl;
    }

}
int main()
{
    //zad1a();
    //zad1b();
    //zad1c();
    //zad2a();
    //zad2b();
    zad2c();




    /*
    Podaj szerokosc:
20
Podaj wysokosc:
10
--------------------
|#*#*#*#*#*#*#*#*#*|
|*#*#*#*#*#*#*#*#*#|
|#*#*#*#*#*#*#*#*#*|
|*#*#*#*#*#*#*#*#*#|
|#*#*#*#*#*#*#*#*#*|
|*#*#*#*#*#*#*#*#*#|
|#*#*#*#*#*#*#*#*#*|
|*#*#*#*#*#*#*#*#*#|
--------------------
    */
    return 0;
}
