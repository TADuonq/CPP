#include <iostream>
using namespace std;

template <typename T>
class SingleList
{
public:
	SingleList()
	{
		head = NULL;
		size = 0;
	}
	
	~SingleList()
	{
		while (!empty())
			popFront();
	}
	
	// Kiem tra xem danh sach co rong hay khong.
	bool empty()
	{
		return (head == NULL);
	}
	
	// Tra ve kich thuoc (so phan tu).
	int getSize()
	{
		return size;
	}
	
	// Tra ve phan tu dau danh sach.
	T front()
	{
		return head->elem;
	}
	
	// In cac phan tu tren cung mot dong, cach nhau boi dau cach.
	void print()
	{
		Node * p = head;
		
		while (p != NULL)
		{
			cout << p->elem << " ";
			p = p->next;
		}
		
		cout << endl;
	}
	
	// Chen x vao dau danh sach.
	void pushFront(T x)
	{
		Node * v = new Node(x, head);
		head = v;
		size++;
	}
	
	// Xoa phan tu dau danh sach.
	void popFront()
	{
		Node * old = head;
		head = head->next;
		delete old;
		size--;
	}
	
	// Kiem tra xem danh sach co chua x hay khong.
	bool contains(T x)
	{
		Node * p = head;
		
		while (p != NULL)
		{
			if (p->elem == x)
				return true;
			p = p->next;
		}
		
		return false;
	}
	
	// Xoa x khoi danh sach (neu co).
	// Neu x xuat hien nhieu lan trong danh sach, chi xoa phan tu dau tien bang x.
	void remove(T x)
	{
		Node * p1 = NULL; // tro toi nut nam ngay phia truoc nut dang xet
		Node * p2 = head; // tro toi nut dang xet
		
		while (p2 != NULL)
		{
			if (p2->elem == x)  // gap phan tu bang x
			{
				if (p1 == NULL) // phan tu can xoa nam o dau danh sach
				{
					head = head->next;
					delete p2;
				}
				else            // phan tu can xoa nam o giua hoac cuoi danh sach
				{
					p1->next = p2->next;
					delete p2;
				}
				
				size--;
				break;
			}
				
			p1 = p2;
			p2 = p2->next;
		}
	}
	
private:
	struct Node      // kieu du lieu cua cac nut trong danh sach
	{
		T elem;      // phan tu
		Node * next; // con tro toi nut ke tiep
		
		Node(T e, Node * n)
		{
			elem = e;
			next = n;
		}
	};
	
	Node * head;    // con tro toi nut dau danh sach
	int size;       // kich thuoc danh sach
};

/*struct sinhvien
{
	string ht;
	string msv;
	float diem; 
}; */
int main()
{
	SingleList<int> ds;
	
	ds.pushFront(4);
	ds.pushFront(7);
	ds.pushFront(2);
	ds.pushFront(6);
	ds.pushFront(9);
	
	cout << "Danh sach phan tu: ";
	ds.print();                                       // in ra: 9 6 2 7 4
	cout << "Kich thuoc danh sach: " << ds.getSize(); // in ra: 5
	cout << endl;
	
	if (ds.contains(7))
		cout << "Tim duoc 7 trong danh sach" << endl;
	if (!ds.contains(10))
		cout << "Khong tim duoc 10 trong danh sach" << endl;
	
	ds.popFront(); // xoa 9
	cout << "Danh sach sau khi xoa phan tu dau tien: ";
	ds.print();    // in ra: 6 2 7 4
	
	ds.remove(2);
	cout << "Danh sach sau khi xoa 2: ";
	ds.print();	   // in ra: 6 7 4
	
	return 0;
}
