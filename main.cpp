#include <iostream>
#include <vector>

#define BOLD_TEXT "\033[1m"
#define GREEN_TEXT "\033[1;32m"
#define YELLOW_TEXT "\033[1;33m"
#define RESET_COLOR "\033[0m"

using namespace std;

int main() {
    // ==================================================================================== //
    //                                 DEKLARASI & TIPE DATA                                //
    // ==================================================================================== //

    //vector disini berfungsi untuk menyimpan data yang sudah diinput sifatnya seperti array 
    // perbedaananya vector ini dapat merubah ukuran secara dimnamis jadi lebih flexible
    vector<string> pesanan;
    vector<int> jumlah_pesanan;
    vector<char> cup_size;
    vector<int> price_amount;
    vector<long> total_amount;

    //deklarasi tipe data
    string answer;
    char size;
    int menu, jumlah;
    bool order = true;
    double discount;
    long price, totaly = 0;


    // ==================================================================================== //
    //                                 PROSES PENGINPUTAN                                   //
    // ==================================================================================== //


    // perulangan untuk input
    // agar bisa memiliki data lebih dari 1 jadi saya menggunakan perulangan while
    while (order) {
        cout << GREEN_TEXT << "--------------------------------------------------------------------------" << RESET_COLOR<< endl;
        cout << GREEN_TEXT << BOLD_TEXT <<"|\t\t\t\t SETARBAK \t\t\t\t |" << RESET_COLOR << endl;
        cout << GREEN_TEXT << "--------------------------------------------------------------------------" << RESET_COLOR<< endl;
        cout << GREEN_TEXT <<"| "<< RESET_COLOR << BOLD_TEXT << "COFFEE" << "\t\t\t"       << "Large \t    Medium \t  Small"   << GREEN_TEXT << "\t\t |" << RESET_COLOR << endl;
        cout << GREEN_TEXT <<"|\t\t\t\t\t\t\t\t\t |" << RESET_COLOR << endl;
        cout << GREEN_TEXT <<"| "<< RESET_COLOR << "1. "    << "Americano"    << "\t\t\t" << " 39 \t      37\t   34"   << GREEN_TEXT << "\t\t |" << RESET_COLOR << endl;
        cout << GREEN_TEXT <<"| "<< RESET_COLOR << "2. "    << "Mocha"        << "\t\t\t" << " 58 \t      55\t   50" << GREEN_TEXT << "\t\t |" << RESET_COLOR << endl;
        cout << GREEN_TEXT <<"| "<< RESET_COLOR << "3. "    << "Dark Mocha"   << "\t\t\t" << " 65 \t      58\t   50" << GREEN_TEXT << "\t\t |"   << RESET_COLOR << endl;
        cout << GREEN_TEXT <<"| "<< RESET_COLOR << "4. "    << "Coffee"       << "\t\t\t" << " 44 \t      40\t   38" << GREEN_TEXT << "\t\t |" << RESET_COLOR << endl;
        cout << GREEN_TEXT <<"| "<< RESET_COLOR << "5. "    << "Caramel"      << "\t\t\t" << " 40 \t      35\t   32" << GREEN_TEXT << "\t\t |" << RESET_COLOR << endl;
        cout << GREEN_TEXT << "--------------------------------------------------------------------------" << RESET_COLOR<< endl;

        // input untuk memilih menu, size, dan jumlah item
        cout << "Pilih menu : ";
        cin >> menu;
        cout << "Pilih Size (L, M, S) : ";
        cin >> size;
        // saya menggunakan perulangan while lagi untuk validasi
        // dimana jika user salah menginputkan dari seharusnya
        while (size != 'L' && size != 'M' && size != 'S')
        {
            cout << YELLOW_TEXT << "Size tidak ada di dalam menu silahakan pilih size yang benar!" << RESET_COLOR << endl;
            cout << "Pilih Size (L, M, S) : ";
            cin >> size;
        }
        
        cout << "Jumlah item: ";
        cin >> jumlah;

        // percabangan switch untuk menentukan menu yang diinput di atas
        switch (menu) {
            case 1:
                // fungsi push_back() disini untuk menambahkan element baru ke belakang element yang sudah ada
                pesanan.push_back("Americano");
                // menentukan harga dari size yang di pilih
                if(size == 'L'){
                    cup_size.push_back('L');
                    price_amount.push_back(price = 39000);
                } else if(size == 'M'){
                    cup_size.push_back('M');
                    price_amount.push_back(price = 37000);
                } else if(size == 'S'){
                    cup_size.push_back('S');
                    price_amount.push_back(price = 34000);
                }
                jumlah_pesanan.push_back(jumlah);
                total_amount.push_back(price * jumlah);
                cout << "Americano " << size << " " << jumlah << "x" << endl;
                break;
            case 2:
                pesanan.push_back("Mocha");
                if(size == 'L'){
                    cup_size.push_back('L');
                    price_amount.push_back(price = 58000);
                } else if(size == 'M'){
                    cup_size.push_back('M');
                    price_amount.push_back(price = 55000);
                } else if(size == 'S'){
                    cup_size.push_back('S');
                    price_amount.push_back(price = 50000);
                }
                jumlah_pesanan.push_back(jumlah);
                total_amount.push_back(price * jumlah);
                cout << "Mocha " << size << " " << jumlah << "x" << endl;
                break;
            case 3:
                pesanan.push_back("Dark Mocha");
                if(size == 'L'){
                    cup_size.push_back('L');
                    price_amount.push_back(price = 65000);
                } else if(size == 'M'){
                    cup_size.push_back('M');
                    price_amount.push_back(price = 58000);
                } else if(size == 'S'){
                    cup_size.push_back('S');
                    price_amount.push_back(price = 50000);
                }
                jumlah_pesanan.push_back(jumlah);
                total_amount.push_back(price * jumlah);
                cout << "Dark Mocha " << size << " " << jumlah << "x" << endl;
                break;
            case 4:
                pesanan.push_back("Coffee");
                if(size == 'L'){
                    cup_size.push_back('L');
                    price_amount.push_back(price = 44000);
                } else if(size == 'M'){
                    cup_size.push_back('M');
                    price_amount.push_back(price = 40000);
                } else if(size == 'S'){
                    cup_size.push_back('S');
                    price_amount.push_back(price = 38000);
                }
                jumlah_pesanan.push_back(jumlah);
                total_amount.push_back(price * jumlah);
                cout << "Coffee " << size << " " << jumlah << "x" << endl;
                break;
            case 5:
                pesanan.push_back("Caramel");
                if(size == 'L'){
                    cup_size.push_back('L');
                    price_amount.push_back(price = 40000);
                } else if(size == 'M'){
                    cup_size.push_back('M');
                    price_amount.push_back(price = 35000);
                } else if(size == 'S'){
                    cup_size.push_back('S');
                    price_amount.push_back(price = 32000);
                }
                jumlah_pesanan.push_back(jumlah);
                total_amount.push_back(price * jumlah);
                cout << "Caramel " << size << " " << jumlah << "x" << endl;
                break;
            default:
                cout << "Menu tidak ditemukan :(" << endl;
                return 0;
                break;
        }
        // kondisi untuk menghentikan perulangan while atau selesai memesan
        cout << "Ingin memesan lagi? (yes/no): ";
        cin >> answer;
        if (answer != "yes") {
            order = false;
        }
    }

    // ==================================================================================== //
    //                                     HASIL AKHIR                                      //
    // ==================================================================================== //

    // Tampilkan pesanan disini berbetuk struk
    cout << endl << endl <<"\t\t     SETARBAK" << endl;
    cout << "\t\t       BDG" << endl;
    cout << "\t\tsetarbak@gmail.com" << endl;
    cout << "\t==================================" << endl << endl;
    // setelah memiliki data dari vector push_back()
    // disini saya menampilkannya menggunakan perulangan for agar bisa terambil datanya
    for (int i = 0; i < pesanan.size(); i++) {
        cout << "\t" <<pesanan[i] << " " << cup_size[i] << endl;
        cout << "\t" << jumlah_pesanan[i] << " x " << price_amount[i] << "\t\t" << total_amount[i] << endl << endl << endl << endl;
        totaly += total_amount[i];
    }


    // memberi discount untuk americano
    if(menu >= 1 && size == 'L' || size == 'M')
    {
        discount = 0.1; //discount 10%
        double disc_amount = totaly * discount;
        totaly = totaly - disc_amount;
        cout << "\t" << "Buy Americano Disc 10% \t" << endl;
    }

    if (totaly >= 150000 && totaly <= 300000)// diskon untuk pembelian di atas 150rb
    {
        discount = 0.2; //discount 20%
        double disc_amount = totaly * discount;

        totaly = totaly - disc_amount;
        cout << "\t" << "Buy Up to 140k Disc 20% \t" << endl;
    } else if (totaly > 300000){ // diskon untuk pembelian di atas 300rb
        discount = 0.4; //discount 40%
        double disc_amount = totaly * discount;

        totaly = totaly - disc_amount;
        cout << "\t" << "Buy Up to 300k Disc 40% \t" << endl;
    }

    cout << "\t-------------------------------- +" << endl;
    cout << "\t" << "Total " << "\t\t\t" << totaly << endl;
    cout << "\t==================================" << endl << endl;

    return 0;
}
