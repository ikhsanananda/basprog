#include <iostream>
#include <iomanip>
#include <map>
#include <string>

using namespace std;

struct nilai
{
	int uts, uas;
	double akhir;
	string status;
};
typedef struct nilai Nilai;

typedef map<string,Nilai> myType;

class Ujian : public myType
{
   public:
      void set()
      {
         int N;
         cin >> N;
         while(N--)
         {
            string ni;
            int ut, ua;
            cin >> ni >> ut >> ua;     
            Nilai mhs;
            mhs.uts = ut;
            mhs.uas = ua;
            mhs.akhir = (float)(mhs.uts + mhs.uas) / 2;
            insert(make_pair(ni, mhs));
         }
      }

      double getrata()
      {
         double sum = 0;
         
         myType::const_iterator it;
         for (it = begin(); it != end(); ++it)
         {
            sum += it->second.akhir;
         }

         return sum/size();
      }

      void setstatus()
      {
         myType::iterator it;
         double rata = getrata();

         for(it = begin(); it != end(); ++it)
         {
            if(it->second.akhir >= rata)
            {
               it->second.status = "LULUS";
            }
            else
            {
               it->second.status = "GAGAL";
            }
         }
      }

      void print()
      {
         myType::const_iterator it;
         for (it = begin(); it != end(); ++it)
         {
            cout << it->first << " " << fixed << setprecision(2) << it->second.uts << " " << it->second.uas << " " << it->second.akhir << " " << it->second.status << endl;
         }
      }
};

int main()
{
   Ujian u;
   u.set();
   u.setstatus();
   u.print();

   return 0;
}
