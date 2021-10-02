#include "Sinhvien.h"
class QLSV
{
private:
    Sinhvien *p;
    int _length;
public:
    QLSV();
    ~QLSV();
    // Add 1 đối tượng SV vào cuối mảng
    void Add(const Sinhvien &);
    // Add 1 đối tượng sinh viên vào vị trí index của mảng
    void Insert(const Sinhvien &, const int & );
    // Xuất
    void Show();
    // Tìm kiếm phần tử trùng và trả về vị trí phần tử (Nếu không tìm thấy trả về -1)
    int IndexOf(const Sinhvien &);
    // Update SV có _MSSV bằng giá trị truyền vào 
    void Update(string);
    // Delete phần tử SV
    void Delete(const Sinhvien &);
};


