4.Uzdevums!!

#include <iostream>

using namespace std;

int main()
{
    int sk;
    int num;
    do {
        sk= rand()%10+1;
        num++;
        cout << "\n" << num << ". " << sk;
    }
    while(sk != 5);
    
 return 0;   
}


8.uzdevums!!

#include <iostream>

using namespace std;

int main()
{
   int a,b;
   cout << "ievadiet 2 skaitïus\n";
   cin >> a >> b;
   double Y=a/b;
   cout << Y;
 
}


9.udzevums!!

#include <iostream>

using namespace std;

int main()
{
   int a,b,c;
   cout << "ievadiet 3 skaitïus\n";
   cin >> a >> b >> c;
   if (a > b)
   cout << a << " ir lielâkais skaitlis";
   else if (a > c)
   cout << a << " ir lielâkais skaitlis";
   else if (b > c)
   cout << b << " ir lielâkais skaitlis";
   else if (b > a)
   cout << b << " ir lielâkais skaitlis";
   else if (c > a)
   cout << c << " ir lelâkais skaitlis";
   else if (c > b)
   cout << c << " ir lielâkais skaitlis";
}
