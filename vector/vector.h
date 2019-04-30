/*****************************************************
    Albert Shevchuk
    CISP 400 - MW @ 3:00 pm
    Programming Project 6 and 7
    May 12, 2015
*****************************************************/


#ifndef MY_VECTOR_H_
#define MY_VECTOR_H_
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cassert>
using namespace std;

class IOORE
{
  const char*  _note;
  const int    _i;
  const int    _size;
  const int    _virtual;
public:
  IOORE( const char* w, const int i,  const int f, const int li )
  : _note(w), _i(i), _size(f), _virtual(li) { };
  friend ostream& operator<< ( ostream& os,  IOORE& z )
  {
    os <<endl<<endl<< "Exception was added: ";
    os << z._message<<endl;
    os << "Location: " << z._i << endl;
    os << "Scope" << z._virtual << " - " << (z._size-1) + z._virtual << endl<<endl;
    return os;
  }
};

template <class T>
class Vector
{
	T* 			_array;
	unsigned 	_size;
	unsigned 	_length;
	int			_virtual;
public:
	Vector ( int i = 0 );  
    Vector ( const T*, unsigned s, int i = 0 );
    Vector ( const Vector& );
    ~Vector ();
    Vector& operator= ( const Vector& );
    template <typename OT>
		friend ostream& operator<< ( ostream&, const Vector<OT>& );
    template <typename OT>
		friend ostream& operator<< ( ostream&, const Vector<OT>* );
    T& operator[] ( int i );
    const T& operator[] ( int i ) const;
    Vector operator() ( int first, int last )const;
    Vector& operator+= ( const T& );
    Vector& operator+= ( const Vector& );
    unsigned Length () const;
    void Delete(const int i);
    void Delete ( int first, int last );
    void Delete ();
    void Insert ( const T&, int i ); 
    void Insert ( const T& );
    void write(const char* filename )const;
    void read(const char* filename );
};

template <class T>
Vector::Vector(int i)
{
	_array = NULL;
	_size = 0;
	_length = 0;
	_virtual = i;
}

template <class T>
Vector::Vector(T* R, unsigned S, int i)
{
	_array = NULL;
	_size = 0;
	_length = 0;
	_virtual = i;
	for(unsigned i=0; i<S, i++)
		operator+=(R[i]);
}

template <class T>
Vector::Vector (const vector& v)
{
	_array = NULL;
	_size = 0;
	_length = 0;
	_virtual = i;
	for(unsigned i=0; i<v.size; i++)
		operator+=(v._array[i]);
}

template <class T>
Vector <T>::~Vector()
{
	delete [] _array;
}

template <class T>
Vector& Vector<T>::operator= (const Vector<T>& vEC)
{
	if( this == &vEC )
		return *this;
	delete [] _array;
		_array = NULL;
		_size = 0;
		_length = 0;
		_virtual = vEC._virtual;
	for( unsigned g=0; g<vEC._size; g++)
		operator+=(vEC._array[g]);
return *this
}

template <class OT>
ostream& operator<<(ostream& os, const Vector<T>& v)
{
	if (v._length == 0)
		os << "The Length is Empty" << "  ";
	else
		for (unsigned i=0; i<v.length(); ++i)
			os << v._array[i]<<" ";
return os;
}

template <class OT>
ostream& operator<<(ostream& os, const Vector<OT>* v)
{
	for(unsigned i=0; i < v->Length(); ++i)
		os<< v->_array[i]<<" ";
return os;
}

template <class T>
T& Vector <T>::operator[] (int d)
{
  int position=d-_virtual;
  if(position<0||position>=_virtual)
  {
    throw IOORE("Out of scope", d, _length, _virtual);
  }
  return _array[position];
}

template <class T>
const T& Vector <T>::operator[] (int d) const
{
  int position=d-_virtual;
  if(position<0||position>=_length)
  {
    throw IOORE("Out of scope", d, _length, _virtual);
  }
  return &_array[position];
}

template<class T>
Vector operator() (int first, int last) const
{
	first -= _virtual;
	last -= _virtual
	Vector<T> temp(_virtural);
	for(unsigned i=first; i<last; i++)
		temp+= _array[i];
return temp;
}

template<class T>
vector<T>& Vector<T>::operator+= (const T& t)
{
	if ( _size == _length )
	{
		if( _length == 0)
			_length = 1;
		else
			_length *= 2;

	T* temp = new T[_lenght];
	for(unsigned i=0; i<_size; ++i)
		temp[i] = _array[i];
		delete[] _array;
		_array = temp;
	}
	_array[_size++] = t;

return *this
}

template <class T>
Vector<T>& Vector<T>::operator+= (const Vector& A)
{
  for (unsigned i=0; i<A._length; i++)
    operator+=(A._array[i]);
return *this;
}

template <class T>
unsigned Vector<T>::Length() const
{
  return _length;
}

template<class T>
void Vector<T>::Delete (const int i)
{
	i-=_virtural;
		Vector<T> temp(_virtual);
	for(unsigned j=0; j<size; j++)
	{
		if (j != i)
			temp.operator+=(_array[j]);
	}
	*this=temp;
}

template <class T>
void Vector <T>::Delete (int fst, int last)
{
  int Afst=fst-_virtual;
  int Alast=last-_virtual;
  T* arraySub;
  
  if (Afst < 0 || Alast >= _length || Afst >= Alast)
  {
    throw IOORE("Out of scope", fst, _length, _virtual);
  }
  _length -= (last-fst);
  if(_length == 0)
  {
      delete[] _array;
      _array = NULL;
      _size = 0;
  }
  else 
    while(_size/2 >= _length)
    {
      _size /= 2;
    }
  arraySub = new T[_size];
  for (unsigned i=0; i<Afst; i++)
    arraySub[i] = _array[i];
  for (unsigned i=Afst; i<_length; i++)
    arraySub[i] = _array[i+Alast-Afst];
  delete[] _array;
    _array = arraySub;
  }
}

template <class T>
void Vector<T>::Delete()
{
	Delete(_virtual);
}

template <class T>
void Vector<T>::Insert (const T& t, int i)
{
	i -= _virtural;
	if( i<0 || i>= _size))
	{
		cout <<"error massage";
		cin.get();
		exit(747);
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
void Vector <T>::Insert (const T& w)
{
    Insert(_virtual,w);
}

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

#endif


