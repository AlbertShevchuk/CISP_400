// 

public:
	vector(int i= 0);
	vector (T*, unsigned, int = 0);
	vector(const Vector&);
	Template<class OT>
	freind ostream& operator<<(ostream&, const vector<OT>&)
	vector& operator= (const vector& );

	Void Delete(const )
	Vector operator() (int first, int last) const






// to write

template <class OT>
ostream& operator<<(ostream& os, const Vector<OT>& v)
{
if (v._lengths == 0)
	os<< "Not Occupied" << "  ";
else
for (unsigned i=0; i<v.Length(); ++i)
	os << v._array[i]<<" ";

return os;
}


template<class T>
vector<T>& Vector<T>::operator+= (const T& )
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

int main()
{
	Vector<int> v;
	cout<< v <<endl;
	for(usigned i=0; i<34; i++)
	{
		v += i;
		cout<< v<<endl; 
	} 
	v.Insert(99,5);
	v.Dellete(5)
	
}

template<class OT>
ostream



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
void Vector<T>::Delete ()
{
	Delete(_virtual);
}

Vector operator() (int first, int last) const
{
	first -= _virtual;
	last -= _virtual
	//range check

	Vector<T> temp(_virtural);
	for(unsigned i=first; i<last; i++)
		temp+= _array[i];
return temp;
}
