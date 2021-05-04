#include <iostream>
#include <vector>
using namespace std; 

class Kubus 
{
   double sisi;
   public:
   	Kubus() 
	{ 
	  	sisi=0; 
	}	
	
    void set(double s) 
	{ 
		sisi=s; 
	}
	
    double luas() 
	{ 
		return sisi*sisi*6; 
	} // menghitung luas permukaan kubus
	
    double volume() 
	{ 
		return sisi*sisi*sisi;
	} // menghitung volume kubus
};

class ListKubus 
{
	private: 
		int n;
		double val;  
   		vector<double> K;
   	public:
    	ListKubus() 
		{
			cin>>n; 
			for(int i=0; i<n; i++)
			{
				cin>>val; 
				K.push_back(val); 
			}
		}// membaca data n kubus
    
		double rataLuas() 
		{ 
			double rata=0; 
			for(int i=0; i<n; i++)
			{
				set(K[i]); 
				rata+=luas(); 
			} 
			rata/=n;
			return rata; 
		}   // menghitung rata-rata luas permukaan n kubus
    
		double rataVolume() 
		{ 
			double vol=0; 
			for(int i=0; i<n; i++) 
			{
				set(K[i]); 
				vol+=volume(K[i]);
			} 
			vol/=n;
			return vol; 
		} // menghitung rata-rata volume n kubus
};

int main() 
{
	ListKubus L;
   	cout << fixed << setprecision(2) 
       	 << L.rataLuas() << " " << L.rataVolume() << endl;
   return 0;
}
