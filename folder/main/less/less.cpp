#include <iostream>
#include <fstream>

using namespace std;

int _less()
{
		string line;
		ofstream file;
		file.open("/tmp/outdata.txt");
		ifstream out;
		out.open("/tmp/indata.txt");
		if (file.is_open())
	    {
	       while (getline(out, line))
	        {
	            file << line << endl;
	        }
	        cout << "Вписал в outdata" << endl;
	    }
	   else cout<<"Ded3"<<endl;
	   file.close();
		out.close();
		return 0;
} 
