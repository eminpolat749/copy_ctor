#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class Date {
public:
	Date() : mday(1), mmon(1), myear(1990){}
	Date(int d, int m, int y) : mday(d), mmon(m), myear(y){}
	void print()const
	{
		std::cout << mday << "-" << mmon << "-" << myear << "\n";
	}
private:
	int mday, mmon, myear;
};
int main()
{
	Date d1{ 4,11,2015 };
	d1.print();
	Date d2(d1); //copy ctor
}
