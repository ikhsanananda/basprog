#include <iostream>
#include <vector>
#include <cstdio>
#include <cmath>
#include <math.h>
using namespace std;

class bangun
{
	private: 
		double x1,x2,x3,x4,y1,y2,y3,y4; 
		vector<double>luassegitiga;
		vector<double>luassegiempat;
		double sum, rata1, rata2, hasil;
	public:
		void segitiga(long int n)
		{
			sum=0;
			for(int i=0; i<n; i++)
			{
				cin>>x1>>y1>>x2>>y2>>x3>>y3; 
				hasil=(float)0.5*abs(((y3-y2)*(x1-x2))-((x3-x2)*(y1-y2)));
				sum+=hasil; 
				luassegitiga.push_back(hasil);
			}
			rata1=(float)sum/luassegitiga.size();
		}
		
		void segiempat(long int n)
		{
			sum=0;
			for(int i=0; i<n; i++)
			{
				cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4; 
				hasil=(double)(euclid(x1,x2,y1,y2)+euclid(x2,x3,y2,y3)+euclid(x3,x4,y3,y4)+euclid(x1,x4,y1,y4))/4;
				hasil*=hasil;
				sum+=hasil; 
				luassegiempat.push_back(hasil);
			}
			rata2=(double)sum/luassegiempat.size();
		}
		
		double euclid(double a1, double a2, double b1, double b2)
		{
			return (double) sqrt(pow((a2-a1),2)+pow((b2-b1),2));
		}
		
		void cetak()
		{
			int count=0; 
			printf("%.2lf %.2lf\n", rata1, rata2);
			for(int i=0; i<luassegitiga.size(); i++)
				if(luassegitiga[i]>rata1) count+=1;
			cout<<count<<" "; 
			
			count=0; 
			for(int i=0; i<luassegiempat.size(); i++)
				if(luassegiempat[i]>rata2) count+=1;
			cout<<count<<endl; 
		}
};

int main()
{
	bangun b; 
	long int n; 
	
	cin>>n; 
	b.segitiga(n);
	
	cin>>n;
	b.segiempat(n);
	
	b.cetak();
	return 0;
}
