#include<iostream>
using namespace std;

template<typenname T>
class BinaryHeap
{
    public:
        BinaryHeap(int capacity = 100);         // Khởi tạo đống rỗng
        BinaryHeap(const vector<T> & elems);    // Dưng đống
        const T & findMin();                    // TÌm phần tử nhỏ nhất (ở gốc)
        void insert(const T & x);               // Chèn x vào đống
        void deleteMin();                       // Xoá phần tử nhỏ nhất (ở gốc)
    private:
        int currentSize;                        // Số phần tử hiện có
        vector<T> arrays;                       // Vector chứa các phần tử
        void buildHeap();                       // Giúp dựng đống (trong hàm tạo)
        void percolateDownto();                 // Giúp xoá min và dưng đống
};

// Chèn vào đống
void insert(const T & x)
{
    // Tăng kích 2 lần nếu vetor đầy
    if(currentSize == array.size() - 1) 
        array.resize(array.size() * 2); 
    // Thẩm thấu ngược
    currentSize++;
    int hole = currentSize;
    while(hole > 1 && x < array[hole / 2])
    {
        array[hole] = array[hole / 2];
    }
    array[hole] = x;
}

// Xoá khỏi đống
void deleteMin()
{
    array[1] = array[currentSize];
    currentSize--;
    // Thẩm thấu xuôi
    percolateDown(1);
}

// Thẩm thấu xuôi
void percolateDown(int hole)
{
    T x = array[hole];
    int child;
    while(hole * 2 <= currentSize)
    {
        child = hold * 2;
        if(child < currentSize && array[child + 1] < array[child])
            child++;
        if(x > array[child])
        {
            array[hole] = array[child];
            hole = child;
        }
        else
            break;
    }
    array[hole] = x;
}

// Hàm tạo 
BinaryHeap(const vector<T> & elems)
{
    array.resize(elems.size() + 10);
    currentSize = elems.size();
    for(int i = 0; i < elems.size(); i++)
        array[i + 1] = elems[i];
    buildHeap();
}

// Thiết lập tính chất tự động
void BinaryHeap()
{
    for(int i = currentSize / 2; i > 0; i--)
        percolateDown(i);
}
 
// Driver Code
int main() {
    int a[5] = {10, 50, 30, 40, 20};
    int n = sizeof(a) / sizeof(a[0]);
  
    // calls template function
    bubbleSort(a, n);
  
    cout << " Sorted array : ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
  
  return 0;
}