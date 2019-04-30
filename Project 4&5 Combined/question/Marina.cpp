#include "Marina.h"

char _main_menu();

Marina:: Marina()
{
	_num_boats = 0 ;
	for( unsigned i = 0 ; i < MAX_BOAT ; i++ )
	{
		_m[i] = NULL ;
	}
}
Marina:: ~Marina()
{
	for ( unsigned i = 0 ; i < _num_boats ; i++ )
	{
		delete _m[i] ;
	}
}

void Marina:: Run()
{
	char choice = _main_menu() ;
	while (choice < '5' && choice > = '1')
	{
		cout << "choice:" << choice << endl ;
		switch(choice)
		{
			case '1':
				_add_boat() ;
				break ;
			case '2':
				_emerg() ;
				break ;
			case '3':
				_prop() ;
				break ;
			case '4':
				_disp() ;
				break ;
		} ;
		choice = _main_menu() ;
	}


}