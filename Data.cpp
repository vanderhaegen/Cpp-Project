#include <iostream>
#include <queue>
using namespace std;

class Data{
    public:
        virtual void show_data();
};

template <class type>
class Temp: virtual public Data {
    private:
        type x;
    public:
        Temp(type a) {x=a;}
        ~Temp(){};
        void show_data(){
            cout << x << " C�" << endl;
        }
};

int main() {
   Temp <int> a(1);
   Temp <double> b(3.2);
   a.show_data();
   b.show_data();

   return 0;
}
