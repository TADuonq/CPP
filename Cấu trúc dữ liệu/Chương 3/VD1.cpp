//Ví dự về mảng có độ dài thay đổi


#include<iostream>
using namespace std;

int main()
{
    int i, n, *p;
    printf("Nhap so luong phan tu cua mang = ");
    scanf("%d", &n);
    // Cập nhật bộ nhớ cho mảng số nguyên gồm n só
    p = (int *) malloc(n * sizeof(int));
    if(p == NULL) 
    {
        printf("cap phat bo nho khong thanh cong: \n");
        return 1;
    }
    // Nhập các phần tử của mảng
        printf("Hay nhap cac so: \n");
        for(i = 0; i < n; i++)  scanf("%d", &p[i]);
    //Hiển thị các phần tử của mảng theo thứ tự ngược lại
        printf("Cac phan tu theo thu tu nguoc lai la: \n");
        for(int i = n - 1; i >= 0; --i)     printf("%d", p[i]);
    //Giải phóng bộ nhớ đã cập nhật
    free(p);
    return 0;
}