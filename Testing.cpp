#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int i;
    string vert[10];
    cout<<"ievadiet 1 atzimi"<<endl;
    cin>>i;
    vert[0]="ïoti slikti";
    vert[1]="ïoti slikti";
    vert[2]="slikti";
    vert[3]="slikti";
    vert[4]="sekmîgi";
    vert[5]="vidçji";
    vert[6]="gandrîz labi";
    vert[7]="labi";
    vert[8]="ïoti labi";
    vert[9]="teicami";
    cout << i << "(" << vert[i] << ")";
return 0;
}

uzd 2
#include <iostream>

using namespace std;

int main()
{
   int a; // definç mainîgo veselo skaitli a
   int vert[4]; // definç masîvu veselo skaitli vert[4]
   string vards[4]; // definç masîvu tekstu vards[4]
   vards[0]=" Uvis "; // nulltajam masîvam dod tekstu "Uvis"
   vards[1]=" Kristians "; // pirmajam masîvam dod tekstu "Kristians"
   vards[2]=" Ìirts "; // otrajam masîvam dod tekstu "Ìirts"
   vards[3]=" Linards "; // treðajam masîvam dod tekstu "Linards"
   for (a=0; a<4; a++){ // nosaka skolçnu skaitu
   	cout << "\nievadiet atzimi" << vards[a]; // izvada tekstu programmâ, kas liek ievadît atzîmi
   	cin >> vert[a]; // ïauj ievadît atzîmi
	
   }
    for (a=0; a<4; a++){ // nosaka skolçnu skaitu, lai varçtu izvadît samestra atzîmi
   cout <<"\n"  << vards[a] << " - semestra atzime " << vert[a];} // izvada tekstu, kas izvada arî semestra atzîmi katram skolçnam
   
   
}
