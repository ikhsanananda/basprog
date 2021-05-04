#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <cstdio>
using namespace std; 

class person
{
	private: 
		string nama; 
		vector<int>usialk;
		vector<int>usiapp;
		int lk, pp;
		int sumlk, sumpp, usia;
		float rlk, rpp;
	public:
		void getdata()
		{
			lk=pp=sumlk=sumpp=0;
			while(getline(cin, nama))
			{
				char data[nama.size()+1];
				strcpy(data, nama.c_str());
				
				//jenis kelamin dan usia
				if(data[25]=='L')
				{
					lk+=1;
					usia=(int)((data[26])-48)*10+(int)(data[27])-48;
					usialk.push_back(usia);
					sumlk+=usia;	
				} 
				else if(data[25]=='P')
				{
					pp+=1;
					usia=(int)((data[26])-48)*10+(int)(data[27])-48;
					usiapp.push_back(usia);
					sumpp+=usia;
				} 
			}
			rlk=(float)sumlk/lk;
			rpp=(float)sumpp/pp;
		}
		
		void print()
		{
			int count=0;
			
			cout<<"L"<<" "<<lk<<" ";
			printf("%.2f ", rlk); 
			for(int i=0; i<usialk.size(); i++)
				if(usialk[i]<rlk) count+=1; 
			cout<<count<<endl; 
			
			count=0; 
			cout<<"P"<<" "<<pp<<" ";
			printf("%.2f ", rpp); 
			for(int i=0; i<usiapp.size(); i++)
				if(usiapp[i]<rpp) count+=1; 
			cout<<count<<endl;
		}
};

int main()
{
	person p; 
	p.getdata();
	p.print();	
}
