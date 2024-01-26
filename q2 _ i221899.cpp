#include<iostream>
using namespace std;


class Point {
private:
	int x, y;

public:
	Point()
	{
		x = 0;
		y = 0;

	}
	void set_x(int x1)
	{
		x = x1;
	}

	int get_x()
	{
		return x;
	}

	void set_y(int y1)
	{
		y = y1;
	}

	int get_y()
	{
		return y;
	}

	int Distance(int a, int b)
	{
		return sqrt((x - a) * (x - a) + (y - b) * (y - b));

	}
	
	
};

int main()
{
	Point p;
	p.set_x(5);
	p.set_y(6);

	cout<<"Distance: "<<p.Distance(7, 8);

}