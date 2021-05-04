#include <iostream>
#include <cstdio>
using namespace std;
int n, sum=0;
double rataan, temp; 

class Person
{
	private:
		string nama[105]; 
		int usia[105];
		int tinggi[105];
		double berat[105];
		int status[105]; 
		
	public:
		void getData()
		{
			for(int i=0; i<n; i++)
			{
				cin>>nama[i]>>usia[i]>>tinggi[i]>>berat[i];
				sum+=tinggi[i];
			}
			for(int i=0; i<5; i++)
			    status[i]=0;
			rataan=(double)sum/n; 
		}
		
		void printData()
		{
			sum=0; 
			double rslt; 
			for(int i=0; i<n; i++)
			{
				cout<<nama[i]<<" "<<usia[i]<<" "<<tinggi[i]<<" "; 
				printf("%.2f ", berat[i]);
				
				if(tinggi[i]>rataan)
				{
					sum+=1;
				}
				
				temp=(double) tinggi[i]/100;
				rslt=berat[i]/(temp*temp);
				if(rslt<17.0)
				{
					printf("%.2f ", rslt);
					cout<<"sangat kurus"<<endl;
					status[0]+=1;
				}
				else if(rslt>=17.0 && rslt<18.5)
				{
					printf("%.2f ", rslt);
					cout<<"kurus"<<endl;
					status[1]+=1;
				}
				else if(rslt>=18.5 && rslt<25.0)
				{
					printf("%.2f ", rslt);
					cout<<"normal"<<endl;
					status[2]+=1;
				}
				else if(rslt>=25.0 && rslt<28.0)
				{
					printf("%.2f ", rslt);
					cout<<"gemuk"<<endl;
					status[3]+=1;
				}
				else 
				{
					printf("%.2f ", rslt);
					cout<<"sangat gemuk"<<endl;
					status[4]+=1;
				}
			}
			printf("%.2f\n", rataan);
			cout<<sum<<endl;
			
			for(int i=0; i<5; i++)
			{
				if(i!=4)
					cout<<status[i]<<" ";
				else 
					cout<<status[i]<<endl;
			}
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
