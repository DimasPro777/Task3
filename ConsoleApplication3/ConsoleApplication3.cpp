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












    char alphabet[30];
    cout << "Enter letters" << endl;
    cin >> alphabet;

    for (int i = 0; i < strlen(alphabet) - 1; i++)
    {
        for (int j = strlen(alphabet) - 1; j > i; j--)
        {
            if (alphabet[j] < alphabet[j - 1])
            {
                swap(alphabet[j], alphabet[j - 1]);
            }
        }
    }
    cout << alphabet;









    return(0);
}