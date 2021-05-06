#include <iostream>
#include <iomanip>
#include <cstring>
#include <map>
using namespace std;

struct record 
{
   int jumlah;   // jumlah item barang
   int total;    // nilai rupiah
};

typedef struct record ITEM;
typedef pair<string,int> P;

class Produk 
{
    map<string,int> list;     // Daftar kode barang dan harga satuan per unit
    public:
        // Fungsi membaca daftar kode barang dan harga satuan
        void initProduk() 
		{
           string item; int n,harga;
           cin >> n;
           while (n--) 
		   {
              cin >> item >> harga;
              list.insert(P(item,harga));
           }
        }

        // Fungsi mendapatkan harga satuan dari suatu item barang
        // Nilai 0 untuk item barang yang tidak ditemukan
        int getHarga(string item) 
		{
           if (list[item]) 
		   		return list[item];
           else return 0;
        }
};

class Penjualan 
{
    Produk dt;                    // Daftar harga satuan barang
    map<string,ITEM> penjualan;   // Daftar penjualan
    public:
       Penjualan() 
	   { 
	   		dt.initProduk(); 
		}

       // Fungsi membaca data penjualan dan memasukkan ke dalam Daftar penjualan
       void addPenjualan() 
	   { 
           string item;
           ITEM z;
           int n,x,m;
           cin >> n;
            while (n--) {
              cin >> item >> x;
                    z.jumlah=x;
                    z.total=x*dt.getHarga(item);
                    penjualan.insert(pair<string,ITEM>(item,z)); 
            }
       }

       // Fungsi mencetak data penjualan dan total nilai penjualan
       void print() 
	   { 
           double sum=0;
           map<string, ITEM>::iterator it;
           for (it = penjualan.begin(); it != penjualan.end(); ++it) 
		   {
                cout << it->first
                << " " <<it->second.jumlah<<" "<<fixed << setprecision(2)<<it->second.total*1.0/1000000 << '\n';
                sum+=it->second.total;
           }
           cout<<"Total Nilai : "<<setprecision(2)<<sum*1.0/1000000<<" juta rupiah" << '\n';
       }
};

int main()
{
    Penjualan p;
    p.addPenjualan();
    p.print();
    return 0;
}
