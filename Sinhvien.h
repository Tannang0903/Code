#include <string>
using namespace std;
class Sinhvien
{
    private:
        string _MSSV;
        string _Name;
        double _DTB;
    public:
        Sinhvien(string= "", string = "", double = 0.0);
        ~Sinhvien();
        void Show();
};


