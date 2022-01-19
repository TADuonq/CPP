/*
 * Chuong trinh minh hoa de quy
 */
 
 #include<iostream>
 
 using namespace std;
 
 void viet (int a)
 {
	if (a>9) viet (a/10);
	cout<<a%10;
}
 
 void hienThi(int n)
 {
 	if (n < 10)
 	{
 		cout << n;
	}
	else // n >=10
	{
		cout << n%10;
		hienThi(n/10); // loi goi ham de quy		
	}
 }
 
 int power(int x, int n)
 {
 	if (n < 1)
 	{
 		return 1;
	}
	else
	{
		return (power(x, n-1) * x);
	}
 }
 
 
 int main()
 {
    hienThi(1234); cout<<endl;
    int a, n;
    a=2; n=5;
	cout << a<< " mu "<<n<<" bang: "<<power (a,n)<<endl;
	viet(2468);
	
 	return 0;
 }
 

 
