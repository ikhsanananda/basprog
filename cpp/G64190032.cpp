#include <iostream>
#include <vector>
#include <cstdio>
using namespace std; 
int val; 

class bilangan
{
	private: 
		vector<int>data; 
		vector<float>rata; 
	public: 
		void getData()
		{
			cin>>val;
			while(val!=-9)
			{
				data.push_back(val);
				cin>>val;
			}
			cout<<data.size()<<" "; 
			avgData(data.size());
		}
		
		void delData()
		{
			int sum=0; 
			cin>>val;
			while(val!=-9)
			{
				sum+=1; 
				val-=sum;
				data.erase(data.begin()+val);
				cin>>val;
			}
			cout<<data.size()<<endl; 
			avgData(data.size());
		}
		
		void printRata()
		{
			printf("%.2f %.2f\n", rata[0], rata[1]);
		}
		
		void avgData(int n)
		{
			int sum=0; float avg;  
			for(int x=0; x<data.size(); x++)
				sum+=data[x];
			if(n==0) avg=-9.99;
			else avg=(float)sum/n; 
			rata.push_back(avg); 
		}
};

int main()
{
	bilangan b; 
	b.getData(); 
	b.delData();
	b.printRata();
	return 0; 
}
