#include <iostream>
#include <iomanip>
#include <vector>
#include <utility>
#include <cmath>
using namespace std;

typedef pair<double,double> P;

class Poligon : public vector<P> {
  public:
    P get(int i) { return at(i); }
    void input() { 
      int n;
      double t1,t2;
      cin >> n;
      while(n--) {
        cin >> t1 >> t2;
        push_back(make_pair(t1,t2));
      }
    }

    double euclid(P t1, P t2) {
      double t = (t1.first-t2.first)*(t1.first-t2.first);
      t += (t1.second-t2.second)*(t1.second-t2.second);
      return sqrt(t);
    }

    double keliling() {
      int i;
      double sum=0;
      for(i=1;i<size();i++) sum+=euclid(get(i-1),get(i));
      sum += euclid(get(i-1),get(0));
      return sum;
    }

    void print() {
      cout << "[" << fixed << setprecision(2) << front().first << "," << front().second << "]-[" << back().first << "," << back().second <<"]" << endl;
    }
};

int main()
{
  Poligon p;
  p.input();
  p.print();
  cout << p.keliling() << endl;
  return 0;
}
