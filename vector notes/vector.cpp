Vector <int> v1;
template<class T>
class Vector
{
	T* _array; // the pointer is an auto varable (static, not dynamic)
}

//sample code

#include<iostream>
#include<fstream>
#include<cst>
using namespace std;

int main()
{
const unsigned MAX = 100000;
double* d = new double[MAX];
for (unsigned i=0; i<MAX; i++)
	d[i] = rand();
	cout<< d[i] <<" ";
	
	ofstream fout("D.dat", iso::binary | iso::out );
	for (unsigned i=0;, i<MAX; i++ )
		fout.write(reinterpret_cast<const char*>(&d[i]), sizeof(double));
		fout.close();
		delete [] d;

	double* d2 = new double[MAX];
	ifstream fin ("D.dat", iso::binary | iso::in );

	for (unsigned i=0;, i<MAX; i++ )
                fout.write(reinterpret_cast<const char*>(&d2[i]), sizeof(double));
                fout.close();
return 0;
}

// d[i] is the same as *(d+i)


//

#include<cstdlib>
#include<iostream>
using namespace std;
template <class T>
class Vector


public:
Vector(int i = 0);
Vector(T*, unsigned, int = 0);
Vector& operator+=

Vector& operator=(const Vector)






template<class T>
Vector<T>::Vector(const Vector& v)
{
	_array = NULL;
	_size = 0;
	_length = 0;
	_virtural = v._virtural;
	for (unsigned j=0; j<v._size; j++)
		operator+=(v._array[j]);
}

template <class T>
void Vector<T>::Insert (const T& t, int i)
{
	i -= _virtural;
	if( i<0 || i>= _size))
	{
		cout <<"some error message";
		cin.get();
		exit(200);
	}
	Vector<T> temp(_virtural);
	for (unsigned j = 0; j<_size; j++)
	{
		if(j==i)
			temp += t;
		temp += _array[i];
	}
	*this = temp;
}
template <class T>
Vector& Vector<T>::operator= (const Vector<T>& v)
{
	if( this == &v )
		return *this;

	delete [] _array;
	_array = NULL;
	_size = 0;
	_length = 0;
	_virtual = v._virtual;
	for( unsigned j=0; j<v._size; j++)
		operator+=(v._array[j]);
}

template <class T>
void Vector<T>::Delete()
{
	Delete(_virtual);
}

//write out

template <class T>
void Vector<T>::write (const char* c)const
{
	ofstream out(c, iso::out|ios::binary);
	out.write(reinterpret_cast<const char*>(&_virtural), sizeof(int));
	out.write(reinterpret_cast<const char*>(&_size), sizeof(unsigned));
	out.write(reinterpret_cast<const char*>(_array), sizeof(T)*_size);
}

template <class T>
void Vector<T>::read (const char* c)
{
	ifstream in(c, ios::in|ios::binary);
	if (!in)
		cout<<"some error message"<<endl;
	int v;
	in.read(reinterpret_cast<char*>(v), sizeof(int));
	unsigned s;
	in.read(reinterpret_cast<char*>(s), sizeof(unsigned));
	T* a= new T[_s];
	in.read(reinterpret_cast<char*>(a), sizeof(T) *s);
	*this = Vector(a,s,v);
	delete [] a;
}
