#include <fstream> // deffinitions of iostream fstream ofstream ifstream

// ifstream 
// below are the file position pointers

app //opens the file if it exists, alowes you to append to the file
ate //alows you to move around in the file but it starts at the end
binary // in text your writing formated data, but if your writing it in binary it becomes (10101)
in //ifstream you can make it stricly in
out //ofstream you can make it strictly out
trunc// will emply the file

// 2 ways to open a stream

//by constructor

ifstream fin("Filename", // by default in 
ofstream fout("Filename", ios::binary | iso::app);// by defauly out and trunk 

//if you alreay have a stream(already exists)

	ofstream fout;
	ifstream fin("Filename");
	fout.open("Filename", ios::binary|ios::app);




fin.seakg(10); //move the pointer 10 bytes
fin.seakg(10,iso::beg);//move 10 bytes from the beggining
fin.seekg(10,iso::cur);//move 10 bytes foward from the current position
fin.seakg(-10,iso::cur);//move 10 bytes backwards from the current position
fin.seekg(10,iso::end);//moves 10 bytes back from the end of the file
 
