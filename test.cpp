#include <iostream>



using namespace std;



int main()

{

char a;

int b;

do

{

    

	do
	{
       
		cout << "Ievadiet jebkadu skaitli" << endl;
        
		cin >> b;

                cout << b << " reiz " << b << " ir:" <<endl;
        
		b=b*b;
    
		}while (b == 0);
    
		cout << b << "\n" << "Velaties atkartot? Ievadiet j, ja velaties."<< endl; 
    
		cin >> a;

} while (a == 'j')
;
return 0;

}
