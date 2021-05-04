#include <iostream>
#include <cstdio>
using namespace std;
int n, sum=0;
double rataan; 

class Person
{
	private:
		string nama[105]; 
		int usia[105];
		int tinggi[105];
		double berat[105];
		
	public:
		void getData()
		{
			for(int i=0; i<n; i++)
			{
				cin>>nama[i]>>usia[i]>>tinggi[i]>>berat[i];
				sum+=tinggi[i];
			}
			rataan=(double)sum/n; 
		}
		
		void printData()
		{
			sum=0; 
			
			for(int i=0; i<n; i++)
			{
				cout<<nama[i]<<" "<<usia[i]<<endl;
				if(tinggi[i]>rataan)
				{
					sum+=1;
				}
			}
			printf("%.2f\n", rataan);
			cout<<sum<<endl;
		}
};

int main()
{
	Person P; 
	cin>>n; 
	P.getData();
	P.printData();
	return 0; 
}
