#include <iostream>
#include <fstream>
#include "main.h"

using namespace std;


int main(int argc, char** argv)
{
	ofstream file("/tmp/indata.txt", ios::app);
	if (file.is_open())
    {
    	for(int i = 1; i < argc; i++){
    		file << argv[i] << endl;
    	}
    	cout << "Вписал в indata" << endl;
    }
   else cout<<"Ded"<<endl;

   

   file.close();

   data();
   return 0;
} 
 
