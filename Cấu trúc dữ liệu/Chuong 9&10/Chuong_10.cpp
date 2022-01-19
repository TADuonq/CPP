#include<iostream>
using namespace std;

// Sắp xếp chọn
template <typename T>
void selectionSort(vector<T> & a)
{
    for(int i = 0; i < a.size(); i++)
    {
        int vt = i;             // Vị trí của min
        for(int j = i + 1; j < a.size(); j++)
            if(a[vt] > a[j]) 
                vt = j; // Cập nhật vị trí của min
        if(vt != i)
        {
            T tg = a[vt];
            a[vt] = a[i];
            a[i] = tg;
        }
    }
}

// Sắp xếp nổi bọt
template<typename T>
void bubbleSort(vector<T> & a)
{
    for(int i = 0; i < a.size() - 1; i++)
    {
        // Bước i
        for(int j = 0; j < a.size() - 1 - i; j++)
        {
            if(a[j] > a[j + 1])
            {
                T tg = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tg;
            }
        }
    }
}

// Sắp xếp chèn
template<typename T>
void insertionSort(vector<T> & a)
{
    int j;
    for(int p = 1; p < a.size(); p++)
    {
        T tmp = a[p];           // Lay ra phan tu can chen
        for(j = p; j > 0; j--)
        {
            // j: vi tri don nhan
            if(tmp < a[j - 1])
                a[j] = a[j - 1];        // Dich ve phia sau
            else    
                break;
        }
        a[j] = tmp;                     // Dat phan tu can chen
    }
}

// Sap xep vun dong

template<typename T>
void heapSort(vector<T> & a)
{
    for(int i = a.size() / 2 - 1; i >= 0; i--)
        percolateDown(a, i, a.size());
    for(int j = a.size() - 1; j > 0; j--)
    {
        T max = a[0];
        a[0] = a[j];
        a[j] = max;
        percolateDown(a, 0, i);
    }
    int leftChild(int i)
    {
        return 2 * i + 1; b
    }
}

template<typename T>
void percolateDown(vector<T> & a, int i, int n)
{
    T tmp = a[i];
    while(leftChild(i) < n)
    {
        int child = leftChild(i);
        if(child < n - 1 && a[child] < a[child + 1])
            child++;            // Cap nhat con lon hon
        if(tmp < a[child])
        {
            a[i] = a[child];
            i = child;
        }
        else
            break;
    }
    a[i] = tmp;
}

// Sắp xếp trộn
template<typename T>
void mergeSort(vector<T> & a)
{
    vector<T> tmpArray(a.size());
    mergeSort(a, tmpArray, 0, a.size() - 1);
}

//tmpArray là mảng tạm để chứa kết quả trộn
//left là vị trí trái cùng của mảng con cần sắp xếp
//right là vị trí phải cùng của mảng con cần sắp xếp 
template<typename T>
void mergeSort(vector<T> & a, vector<T> & tmpArray, int left, int right)
{
    if(left < right)
    {
        int center = (left + right) / 2;
        mergeSort(a, tmpArray, left, center);
        mergeSort(a, tmpArray, center + 1; right);
        merge(a, tmpArray, left, center + 1, right);
    }
}

//leftPos là vị trí bắt đầu của nửa trái
//rightPos là vị trí bắt đầu của nửa phải
//rightEnd là vị trí cuối cùng của nửa phải

template<typename T>
void merge(vector<T> & a, vector<T> & tmpArray, int leftPos, int rightPos, int rightEnd)
{
    int leftEnd = rightPos - 1;             // Vij tri cuoi cung cua nua trai
    int tmpPos = leftPos;                   // Vi tri hien hanh trong mang tam
    int numElements = rightEnd - leftPos + 1;//So phan tu cua ca 2 nua
    while(leftPos <= leftEnd && rightPos <= rightEnd)
        if(a[leftPos] <= a[rightPos])
            tmpArray[tmpPos++] = a[leftPos++];
        else
            tmpArray[tmpPos++] = a[rightPos++];
    while(leftPos <= leftEnd)               // Sao chep phan con lai cua nua trai
        tmpArray[tmpPos++] = a[leftPos++];
    while(rightPos <= rightEnd)             // Sao chep phan con lai cua nua phai
        tmpArray[tmpPos++] = a[rightPos++];
    // Sao chep tu mang tam ve mang chinh
    for(int i = 0; i < numElements; i++, rightEnd--)
        a[rightEnd] = tmpArray[rightEnd];
}

// Sắp xếp nhanh
template<typename T>
void quickSort(vector<T> & a)
{
    if(a.size() < 2)
        return;
    vector<T> smaller;          // Tap phan tu nho hon chot
    vector<T> same;             // Tap phan tu bang chot
    vector<T> larger;           // Tap phan tu lon hon chot
    T v = a[a.size() / 2];      // Chot la phan tu chinh giua
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] < v)
            smaller.push_back(a[i]);
        else if(v < a[i])
            larger.push_back(a[i]);
        else
            same.push_back(a[i]);
    }
    quickSort(smaller);         // Goi de quy
    quickSort(larger);
    a.clear();
    for(int i = 0; i < smaller.size(); i++)
        a.push_back(smaller[i]);
    for(int i = 0; i < same.size(); i++)
        a.push_back(same[i]);
    for(int i = 0; i < larger.size(); i++)
        a.push_back(larger[i]);
}

int main()
{
    return 0;
}