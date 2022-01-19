#include<iostream>
#include<string>

using namespace std;

class StudentClass
{
    private:
        string strHotenSV;
        string strMaSV;
        string strLop;
        double dDiem;
    public:
        //Hàm tạo
        StudentClass()
        {
            strHotenSV = "";
            strMaSV = "";
            strLop = "";
            dDiem = -1;
        };
        StudentClass(double _dDiem)
        {
            strHotenSV = "";
            strMaSV = "";
            strLop = "";
            dDiem = _dDiem;
        };
        StudentClass(string _strHotenSV, double _dDiem)
        {
            strHotenSV = _strHotenSV;
            strMaSV = "\t";
            strLop = "";
            dDiem = _dDiem;
        }
        StudentClass(string _strHotenSV, string _strMaSV, double _dDiem)
        {
            strHotenSV = _strHotenSV;
            strMaSV = _strHotenSV;
            strLop = "";
            dDiem = _dDiem;
        };
        //Hàm huỷ
        ~StudentClass()
        {
            strHotenSV = "";
            strMaSV = "";
            strLop = "";
            dDiem = -1;
        };
        //Hàm sao chép
        StudentClass(StudentClass &a);
        //Các hàm thành viên
        void input();
        void output();
        double getDiem();
        void setDiem(double _dDiem);
};

StudentClass::StudentClass(StudentClass &a)
{
    strHotenSV = a.strHotenSV;
    strMaSV = a.strMaSV;
    strLop = a.strLop;
    dDiem = a.dDiem;
}

void StudentClass::input()
{
    cout << "Ho va ten: ";  getline(cin,strHotenSV);
    cout << "Ma SV: ";      cin >> strMaSV;
    cout << "Lop: ";        cin >> strLop;  
    cout << "Diem: ";       cin >> dDiem;
    fflush(stdin);
}

void StudentClass::output()
{
    cout << strHotenSV << "\t";
    cout << strMaSV << "\t";
    cout << strLop << "\t";
    cout << dDiem << endl;
}

double StudentClass::getDiem()
{
    return dDiem;
}

void StudentClass::setDiem(double _dDiem)
{
    dDiem = _dDiem;
}

int main()
{
    StudentClass aStudent;
    StudentClass bStudent("Nguyen Van B", 9);
    StudentClass dStudent("Nguyen Van D", "2030404021", 7.0);
    aStudent.input();
    StudentClass cStudent(aStudent);
    aStudent.output();
    bStudent.output();
    cStudent.output();
    dStudent.output();
    return 0;
}