#include <iostream>
#include <fstream>
#include "less.h"


using namespace std;

void data()
{
		ofstream file;
		file.open("/tmp/outdata.txt");
		if (file.is_open())
    {
    	cout << "Создал outdata" << endl;
    }
    else cout<<"Ded2"<<endl;
		file.close();

		if (_less() == 0) 
		{
			remove("/tmp/outdata.txt");
			exit(0);
		}
		

}
