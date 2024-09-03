#include "Square.h"
#include <iostream>
using namespace std;

int main()
{
	Square s1(3, 5, 10);
	Square s2;
	Square s3(8);

	s1.print();
	s2.print();
	s3.print();

	s2.setBottomLeftX(2);
	s2.setSideLenth(6);
	cout << "s2 after set bottom left";
	s2.print();

	s3.setSideLenth(3);
	cout << "s3 changing length";
	s3.print();

	cout << "s1 area: " << s1.getArea() << endl;

	cout << "Is the point (4,2) inside s2? " << (s2.isPointInside(4, 2) ? "true" : "false") << endl;

	cout << "Is the point (3,4) inside s2? " << (s2.isPointInside(3, 4) ? "true" : "false") << endl;

	s1 = s2;

	cout << "After assignment s1 = ";
	s1.print();

	return 0;
}