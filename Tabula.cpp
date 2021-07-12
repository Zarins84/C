//reizrçíina tabulas izveide 1

#include <iostream>



using namespace std;



int main()

{
	
	int a;
	
	cin>> a;
	
	cout << "ievadiet vienu skaitli";
	
	if (a > 0)cout << "\nskaitlis " << a << " ir pozitivs";
	
	else if (a == 0)cout << "\nnulle";
	    
		else cout << "\nskaitlis " << a << " ir negativs";
	
	for(int a=1; a<=10; a++)
	
	cout <<"\n "<< a<< "\t" << a*1 << "\t" << a*2 << "\t" << a*3 << "\t" << a*4 << "\t" << a*5 << "\t" << a*6 << "\t" << a*7 << "\t" << a*8 << "\t" << a*9 << "\t" << a*10;


}



//reizrçíina tabulas izveide 2

#include <iostream>

using namespace std;

int main()

{
    
	for(int a=1; a<=10; a++) { 
        
		for(int b=1; b<=10; b++)
        
		{
            
			cout << a*b << "\t";
        
		}

        	cout << endl;
   
	}
    
	return 0;



}
