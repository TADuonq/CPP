/* Con trỏ và mảng một chiều
    +, -, ++, --, <, >, <=, >=, ==
*/

#include<iostream>
using namespace std;

void showResult(int *a)
{
    for(size_t i = 0; i < 10; i++)
    {
        cout<< *a << " ";
        a++;
    }
}

int main()
{
    int b[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    showResult(b);

    return 0;
}