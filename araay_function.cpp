#include <iostream>
using namespace std;

void barang()
{
    string ulang;
    do
    {
        string elektronik[10] =
            {"laptop", "hp", "tv", "flasdisk", "komputer", "kulkas", "kipas", "blender", "setrika", "lampu"};
        string non_elektronik[10] =
            {"batu", "sepatu", "sendal", "baju", "celana", "kaos", "kerudung", "kutek", "sepeda", "kursi"};
        string cok;
        cout << endl;
        cout << "MASUKKAN PILIHAN ANDA TUAN : ";
        cin >> cok;
        if (cok == "elektronik")
        {
            cout << endl;
            cout << "||===|>> INI ADALAH BARANG ELEKTRONIK <<|===||" << endl;
            cout << endl;
            for (int i = 0; i < 10; i++)
            {
                cout << elektronik[i] << "\t";
            }
            cout << endl;
        }
        else if (cok == "nonelektronik")
        {
            cout << endl;
            cout << "||===|>> INI ADALAH BARANG NON-ELEKTRONIK <<|===||" << endl;
            cout << endl;
            for (int k = 0; k < 10; k++)
            {
                cout << non_elektronik[k] << "\t";
            }
            cout << endl;
        }
        else if (cok == "keduanya")
        {
            cout << endl;
            cout << "||===|>> INI ADALAH BARANG ELEKTRONIK DAN NON-ELEKTROIK <<|===||" << endl;
            cout << endl;
            for (int i = 0; i < 10; i++)
            {
                cout << elektronik[i] << "\t";
            }
            cout << endl;
            for (int k = 0; k < 10; k++)
            {
                cout << non_elektronik[k] << "\t";
            }
            cout << endl;
        }
        else
        {
            cout << endl;
            cout << "||===|>> MAAF, PILIHAN ANDA SANGAT TOLOL <<|===||" << endl;
            cout << endl;
        }
        cout << endl;
        cout << "apakah anda ingin mengulangi program ini??? (y/n)  : ";
        cin >> ulang;
        cout << endl;
    } while (ulang == "y");
    cout << "=###= PROGRAM SELESAI =###=" << endl;
    cout << endl;
}
int main()
{
    barang();
}
