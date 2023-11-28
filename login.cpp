#include <iostream>
using namespace std;

int main()
{
    string ulang, username, password;
    int cok;
    do
    {
        cout << endl;
        cout << "DAFTAR PILIHAN" << endl;
        cout << endl;
        cout << "1. MAHASISWA "
                "\n"
                "2. BENDAHARA"
                "\n"
                "3. AKADEMIK"
             << endl;
        cout << endl;
        cout << "MASUKKAN ROLE ANDA : ";
        cin >> cok;
        cout << endl;
        if (cok == 1)
        {
            cout << "masukkan username anda : ";
            cin >> username;
            if (username == "TI18210011")
            {
                cout << "masukkan password anda : ";
                cin >> password;
                if (password == "20021010")
                {
                    cout << "=#= SELAMAT DATANG DI RUANGAN MAHASISWA =#=" << endl;
                    cout << endl;
                }
                else
                {
                    cout << "password yang anda masukkan salah" << endl;
                }
            }
            else
            {
                cout << "username yang anda masukkan salah" << endl;
            }
        }
        else if (cok == 2)
        {
            cout << "masukkan username anda : ";
            cin >> username;
            if (username == "TI20202020")
            {
                cout << "masukkan password anda : ";
                cin >> password;
                if (password == "50505050")
                {
                    cout << "=#= SELAMAT DATANG DI RUANG BENDAHARA =#=" << endl;
                    cout << endl;
                }
                else
                {
                    cout << "password yang anda masukkan salah" << endl;
                }
            }
            else
            {
                cout << "username yang anda masukkan salah" << endl;
            }
        }
        else if (cok == 3)
        {
            cout << "masukkan username anda : ";
            cin >> username;
            if (username == "TI20230014")
            {
                cout << "masukkan password anda : ";
                cin >> password;
                if (password == "20050610")
                {
                    cout << "=#= SELAMAT DATANG DI RUANG AKADEMIK =#=" << endl;
                    cout << endl;
                }
                else
                {
                    cout << "password yang anda masukkan salah" << endl;
                }
            }
            else
            {
                cout << "username yang anda masukkan salah" << endl;
            }
        }
        else
        {
            cout << "==#== ANDA BUKAN BAGIAN DARI KAMPUS INI ==#==" << endl;
            cout << endl;
        }
        cout << "apakah anda ingin mengulang login ??? : ";
        cin >> ulang;
    } while (ulang == "y");
    cout << endl;
    cout << " == program selesai == " << endl;
}
