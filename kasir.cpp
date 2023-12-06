#include <iostream>
using namespace std;

void belanjaan()
{
    long harga, total, jumlah_brng, uang, susuk;
    int merk, nominal;
    string barang, umur;
    do
    {
        cout << "pilih barang yang ingin anda beli " << endl;
        cout << "=====================================" << endl;
        cout << "1. Rokok"
                "\n"
                "2. pulsa"
                "\n";
        cout << "=====================================" << endl;
        cout << "masukkan pilihan : ";
        cin >> barang;
        cout << "\n";
        if (barang == "rokok")
        {
            cout << "apakah anda sudah berumur 18+ ??? : ";
            cin >> umur;
            if (umur == "ya")
            {
                do
                {
                    cout << "================================" << endl;
                    cout << "masukkan pilihan rokok anda :" << endl;
                    cout << "1.Surya"
                            "\n"
                            "2.Sempoerna"
                            "\n"
                            "3.Marlboro"
                            "\n";
                    cout << "================================" << endl;
                    cout << "Pilih merk rokok anda [1-3] : ";
                    cin >> merk;
                    if (merk == 1)
                    {
                        harga = 25000;
                    }
                    else if (merk == 2)
                    {
                        harga = 24000;
                    }
                    else if (merk == 3)
                    {
                        harga = 35000;
                    }
                    else
                    {
                        cout << endl;
                        cout << "== PILIHAN ANDA TIDAK TERSEDIA ==" << endl;
                    }
                } while (merk > 3);
            }
            else
            {
                cout << endl;
                cout << "== UMUR ANDA TIDAK MENCUKUPI ==" << endl;
                cout << "SILAHKAN PILIH BARANG YANG LAIN" << endl;
                cout << "===============================" << endl;
            }
        }
        else if (barang == "pulsa")
        {
            do
            {
                cout << "daftar nominal dan harga" << endl;
                cout << "========================" << endl;
                cout << "1. 5.000"
                        "\n"
                        "2. 10.000"
                        "\n"
                        "3. 20.000"
                        "\n";
                cout << "========================" << endl;
                cout << "pilih nominal [1-3] : ";
                cin >> nominal;
                if (nominal == 1)
                {
                    harga = 7000;
                }
                else if (nominal == 2)
                {
                    harga = 12000;
                }
                else if (nominal == 3)
                {
                    harga = 22000;
                }
                else
                {
                    cout << endl;
                    cout << "== NOMINAL YANG ANDA MASUKKAN TIDAK TERSEDIA ==" << endl;
                }
            } while (nominal > 3);
        }
        else
        {
            cout << endl;
            cout << "== PILIHAN ANDA SANGAT TOLOL ==" << endl;
        }
    } while (barang != "rokok" && barang != "pulsa");
    cout << "masukkan jumlah barang : ";
    cin >> jumlah_brng;
    cout << "masukkan jumlah uang : ";
    cin >> uang;
    total = jumlah_brng * harga;
    susuk = uang - total;
    cout << "\n";
    cout << "============================" << endl;
    cout << "=== Struk belanjaan anda ===" << endl;
    cout << endl;
    cout << "belanjaan yang dibeli : " << barang << endl;
    cout << "uang pelanggan        : " << uang << endl;
    cout << "harga barang          : " << harga << endl;
    cout << "jumlah barang         : " << jumlah_brng << endl;
    cout << "total belanjaan       : " << total << endl;
    cout << "susuk belanjaan       : " << susuk << endl;
    cout << "============================" << endl;
}
int main()
{
    belanjaan();
}