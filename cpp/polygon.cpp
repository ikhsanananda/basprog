#include <iostream>
#include <cstdio>
#include <math.h>
#include <cmath>
using namespace std;
int n; 

class Polygon
{
	private:
		double x[205], y[205];
	public: 
		void getData()
		{
			for(int i=0; i<n; i++)
			{
				cin>>x[i]; 
				
				cin>>y[i];
			}	
		}
		
		void printData()
		{
			printf("[%.2lf,%.2lf]-[%.2lf,%.2lf]\n", x[0], y[0], x[n-1], y[n-1]);
		}
		
		void euclid()
		{
			double hasil=0; 
			for(int i=0; i<n; i++)
			{
				if(i!=n-1)
					hasil+=sqrt(pow((x[i+1]-x[i]),2)+pow((y[i+1]-y[i]),2));
				else 
					hasil+=sqrt(pow((x[i]-x[0]),2)+pow((y[i]-y[0]),2));
			}
			printf("%.2lf\n",hasil);
		}
		
};

int main()
{
	Polygon P;

	cin>>n; 
	P.getData();
	P.printData();
	if(n>3)
		P.euclid();
	return 0;
}
