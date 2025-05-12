#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char op;

    cout << "Masukkan angka pertama: ";
    cin >> num1;

    cout << "Pilih operator : \n";
    cout << "	( + ) \n";
    cout << "	( - ) \n";
    cout << "	( x ) \n";
    cout << "	( : ) \n";
    cout << "Pilih : ";
    cin >> op;

    cout << "Masukkan angka kedua: ";
    cin >> num2;

    if (op == '+')
    {
        cout << "Hasil: " << num1 + num2 << endl;
    }
    else if (op == '-')
    {
        cout << "Hasil: " << num1 - num2 << endl;
    }
    else if (op == '*')
    {
        cout << "Hasil: " << num1 * num2 << endl;
    }
    else if (op == '/')
    {
        if (num2 != 0)
        {
            cout << "Hasil: " << num1 / num2 << endl;
        }
        else
        {
            cout << "Error! Pembagian dengan nol." << endl;
        }
    }
    else
    {
        cout << "Operator tidak valid!" << endl;
    }
    cout << "Ini dari fitur 2" << endl;

    return 0;
}
