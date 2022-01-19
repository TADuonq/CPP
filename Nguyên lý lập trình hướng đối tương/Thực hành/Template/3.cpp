#include <iostream> 
using namespace std; 

template <typename T> 
T const& Max (T const& a, T const& b) 
{ 
    return a < b ? b:a; 
} 
int main () 
{
    int i = 15; 
    int j = 26; 
    cout << "Gia tri lon nhat cua (i, j) la: " << Max(i, j) << endl; 
    double f1 = 4.5; 
    double f2 = 14.2; 
    cout << "Gia tri lon nhat cua (f1, f2) la: " << Max(f1, f2) << endl; 
    return 0; 
}