/*
 * Chuong trinh minh hoa su dung Queue trong thu vien 
 */
 
#include <iostream>       // std::cout
#include <queue>          // std::queue
using namespace std;

int main ()
{
  queue<int> myqueue;

  myqueue.push(77);
  myqueue.push(16);
  myqueue.push(10);

  myqueue.front() -= myqueue.back();    // 77-10=67

  cout << "Gia tri o dinh hang doi la: " << myqueue.front() << '\n';
  cout << "Gia tri o cuoi hang doi la: " << myqueue.back() << '\n';

  return 0;
}
