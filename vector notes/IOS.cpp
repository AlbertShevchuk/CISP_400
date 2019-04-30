bool fail() const;// can recover from a fail


bool bad() const; //gets set when something bad happends, can not recover from a bad


bool eof() const; //

bool good() const;// good is the absentce of fail bad and eof

bool clear(); // will set all 3 bits to fail (fail, bad, and eof)

char get();
{
	char c;
	c = cin.get();
}

int get();
{
	cin.get(c);
}

void get(char&);
{

}

istream& get(char&); // there are 3 of these

istream& get(char*, int, char = '\n');

istream& getline(char*, int, char = '\n');

istream& ignore(int=1, char=EOF); 

char peek(); // peak alows to to look at but not remove the next character that in the iostream

istream& putback(char); //put back puts a charecter in the iostream so its the next carecter to be read out of the iostream

getline(cin, Sname);

