#include<iostream>
using namespace std;
class Myclass
{
	private:
		static int count;
	public:
		static void incrementcount
		{
			count++;
		}
		static void getdata()
		{
			return count;
		}
};
int Myclass::count;
int main()
{
	cout<<"My class ::"getcount<<endl;
	return 0;
}
