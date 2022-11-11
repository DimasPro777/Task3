#include <iostream>
#include <math.h>
#include <string>
#include <fstream>
using namespace std;



int main()
{
    system("chcp 1251");
    double S, p, n, m, r, num, i;

    cout << "Введите переменные S, p, n: " << endl;
    cin >> S >> p >> n;

    if (S > 0 and n > 0 and p >= 0)
    {
        if (p == 0)
        {
            m = S / 12 * n;
            cout << "Месячная выплата = " << m << endl;
        }
        else
        {
            r = p / 100;

            m = (S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));

            cout << "Месячная выплата = " << m << endl;
        }
    }

    
    
    

    double m1, s;
    p = 0.0000001;
    cout << "Input s rubley: ";
    cin >> s;
    cout << "Input n let: ";
    cin >> n;
    cout << "Input m mesyachnaya viplata: ";
    cin >> m;
    if (n <= 0 or m < 0 or s < 0) {
        cout << "Wrong Values!" << endl;
    }

    if (p >= 100) {
        cout << "p > 100%" << " Wrong Values!" << endl;
    }

    while (p < 100) {
        m1 = ((s * (p / 100) * pow((1 + (p / 100)), n))
            / (12 * (pow((1 + (p / 100)), n) - 1)));
        if (m1 >= m) {
            cout << "p = " << p << endl;
            break;
        }
        p += 0.0000001;
    }

    
    
    
    

    cout << "Введите S, n, m = " << endl;
    cin >> S >> n >> m;
    i = 0;
    m = floor(m) / 10;
    while (i < 101)
    {
        if (floor(S / 12) / 10 == (m * n))
        {
            p = 0;
            cout << p << endl;
            break;
        }
        else
        {
            p = i;
            r = p / 100;
            num = floor((S * r * pow((1 + r), n)) / (12 * ((pow((1 + r), n) - 1)))) / 10;
            i = i + 0.01;
            if (m == num)
            {
                cout << p << endl;
            }
        }
    }





    char ch;
    string tekst;
    ofstream fout;
    fout.open("myFile.txt");

    if (!fout.is_open())
    {
        cout << "Ошибка открытия файла!" << endl;
    }
    else
    {
        cout << "Введите текст" << endl;
        cin >> tekst;
        fout << tekst;
    }
    fout.close();


    ifstream opFile;
    opFile.open("myFile.txt");

    if (!opFile.is_open())
    {
        cout << "Ошибка открытия файла!" << endl;
    }
    else
    {
        cout << "Файл открыт!" << endl;
        while (opFile.get(ch))
        {
            cout << ch;
        }
        cout << endl;
    }
    opFile.close();






    opFile.open("myFile.txt");

    if (!opFile.is_open())
    {
        cout << "Ошибка открытия файла!" << endl;
    }
    else
    {
        cout << "Файл открыт!" << endl;
        cout << "Цифры ";
        while (opFile.get(ch))
        {   
            if (isdigit(ch))
            {
                cout << ch;
            }
        }
        cout << endl;
    }
    opFile.close();












    char letters[30];
    cout << "Введите буквы" << endl;
    cin >> letters;
    

    for (int i = 0; i < strlen(letters) - 1; i++)
    {
        for (int j = strlen(letters) - 1; j > i; j--)
        {
            if (letters[j] < letters[j - 1])
            {
                swap(letters[j], letters[j - 1]);
            }
        }
    }
    cout << letters << endl;


}
