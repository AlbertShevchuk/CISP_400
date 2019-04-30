#ifndef _EXCEPTIONS_
#define _EXCEPTIONS_
#include <iostream>
using namespace std;

class Indexoutofrangeexeptions
{
public:
	indexOutOfRangeExeption(char* c, int i, int mx, int mn=0)
	:where(c),ind(i),max(mx),min(mn) {};
	freind ostream& operator<< (ostream&, const Indexoutofrangeexeption& ex)
private:
	char* where;
	int ind;
	int max;
	int min;
};

	ostream& operator<< (ostream& os, consy indexoutofrangeexeption& ex)
{
	os<<ex.where<<endl<<"INdex"
	  <<ex.ind<<" is out of range: "
	  <<ex.min<<" to "<< ex.max<<endl;
	return os;
}

#endif
