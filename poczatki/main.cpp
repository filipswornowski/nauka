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
int main()
{
   // zad1a();
   //zad1b();

    return 0;
}
