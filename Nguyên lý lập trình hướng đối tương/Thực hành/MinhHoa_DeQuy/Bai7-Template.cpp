/*
 * Chuong trinh minh hoa Template 
 */
 
 #include<iostream>
 #include<string>
 
 using namespace std;
 
 template<class T>
 void hoanVi (T& x, T& y)
 {
 	T temp = x;
 	x= y;
 	y = temp;
 }
 
 template<class T>
 int search(const T arr[], int arrSize, T target)
 {
 	int pos = -1;
 	for (int i = 0; i < arrSize; i++)
 	{
 		if (arr[i] == target)
 		{
 			pos = i;
			break;	
		}
	}
	
 	return pos;
 }
 
 template<class T>
 class PhepCong
 {
 	private:
 		T x,y;
 	public:	 
	 	PhepCong(T _x, T _y);
	 	T combine();
		 	
//	 	PhepCong(T _x, T _y)
//	 	{
//	 		x = _x;
//	 		y = _y;
//		}
//	 	
//	 	T combine()
//	 	{
//	 		return x+y;
//		}
 };
 
 int main()
 {
// 	int i = 10, j = 20;
// 	hoanVi(i,j); // goi khuon mau 	
// 	cout << i << " - " << j << endl;
// 	
// 	float x = 30.1, y = 40.2;
// 	hoanVi(x,y); // goi khuon mau
// 	cout << x << " - " << y << endl;
 	
// 	int arr[5] = {0,1,2,3,4};
// 	int arrSize = 5;
// 	int target = 5; 	
// 	cout << search(arr, arrSize, target);
// 	
// 	char cArr[5] = {'a','b','c','d','e'};
// 	int cArrSize = 5;
// 	char cTarget = 'c';
// 	cout << endl << search(cArr, cArrSize, cTarget);
 	
 	PhepCong<int> iPC(8, 9);
 	PhepCong<float> fPC(10.1, 11.2);
 	PhepCong<string> strPC("Hello", " world");
 	
 	cout << "Khuon mau lop voi kieu int: "<< iPC.combine() << endl;
 	cout << "Khuon mau lop voi kieu float: "<< fPC.combine() << endl;
 	cout << "Khuon mau lop voi kieu string: "<< strPC.combine() << endl;
 	
 	return 0;
 }
 
 // Ham khoi tao cua khuon mau lop
 template <class T>
 PhepCong<T>::PhepCong(T _x, T _y)
 {
 	x = _x;
 	y = _y;
 }
 
 template <class T>
 T PhepCong<T>::combine()
 {
 	return x+y;
 }
