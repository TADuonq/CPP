/* Con trỏ và mảng 2 chiều
    +, -, ++, --, <, >, <=, >=, ==
*/

#include<iostream>
using namespace std;
#define N100

void showResult0(int *a)
{
    for(size_t i = 0; i < 10; i++)
    {
        cout<<*(a + i)<<" ";
    }
}


void showResult(int a[][10])
{
    for(size_t i = 0; i < 3; i++)
    {
        for(size_t j = 0; j < 3; j++)
        {
            cout<<*(*(a + i) + j)<<" ";
        }
        cout << endl;
    }
}


int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int a[10][10] = {};

    int *b[10];
    for(size_t i = 0; i < 10; i++)
    {
        b[i] = new int[10];
    }

    int **c = new int *[3];
    {
        for(size_t i = 0; i < 3; i++)
        {
            c[i] = new int[3];
        }
        for(size_t i = 0; i < 3; i++)
        {
            for(size_t j = 0; j < 3; j++)
            {
                c[i][j] = i + j;
            }
        }
    }
    
    showResult(a);
    
    return 0;
}