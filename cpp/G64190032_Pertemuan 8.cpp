#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#define SIZE 201
using namespace std;
int n, amount; 

class Mahasiswa
{
	private:
		string nim[SIZE];
		int usia[SIZE];
		int kelamin[SIZE];
		float ipk[SIZE];
	public:
		void getData()
		{
			for (int i=1; i<=n; i++)
				cin>>nim[i]>>usia[i]>>kelamin[i]>>ipk[i]; //baca data
		}
		void dataSwipe()
		{
			int x,y;
			for (int i=1; i<=n; i++)
			{
				cin>>x>>y; //baca posisi data swipe
				swap(nim[x],nim[y]); //swap nama
				swap(usia[x], usia[y]); //swap usia
				swap(kelamin[x], kelamin[y]); //swap kelamin
				swap(ipk[x], ipk[y]); //swap ipk
			}
		}
		void printData()
		{
			for(int i=1; i<=amount; i++)
			{
				cout<<nim[i]<<" "<<usia[i]<<" "<<kelamin[i]<<" ";
				printf("%.2f\n", ipk[i]);	
			}
		}				
};

int main()
{
	Mahasiswa M; //definisikan class
	
	cin>>n; //baca data
	amount=n; 
	M.getData(); //baca data mahasiswa
	
	cin>>n; //baca data swipe
	M.dataSwipe(); //fungsi swipe
	
	M.printData(); //cetak data hasil swipe
	
	return 0;
}
