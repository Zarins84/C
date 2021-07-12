#include <iostream>

using namespace std;

int main()
{
   int sk;
   string men[13];
   cout << "ievadiet mçnesi pçc skaitïa ";
   cin >> sk;
   men[0]="Nav tâds";
   men[1]="Janvâris";
   men[2]="Februâris";
   men[3]="Marts";
   men[4]="Aprîlis";
   men[5]="Maijs";
   men[6]="Jûnijs";
   men[7]="Jûlijs";
   men[8]="Augusts";
   men[9]="Septembris";
   men[10]="Oktobris";
   men[11]="Novembris";
   men[12]="Decembris";
   cout << "Mçnesis " << sk << " ir " << men[sk];
   switch(sk)
   {
    case 1: cout << " un ir ziema" << "\nlîdz gada beigâm ir 12 mçneði";break;
   case 2: cout << " un ir ziema" << "\nlîdz gada beigâm ir 11 mçneði";break;
   case 3: cout << " un ir pavasaris" << "\nlîdz gada beigâm ir 10 mçneði";break;
   case 4: cout << " un ir pavasaris" << "\nlîdz gada beigâm ir 9 mçneði";break;
   case 5: cout << " un ir pavasaris" << "\nlîdz gada beigâm ir 8 mçneði";break;
   case 6: cout << " un ir vasara" << "\nlîdz gada beigâm ir 7 mçneði";break; 
   case 7: cout << " un ir vasara" << "\nlîdz gada beigâm ir 6 mçneði";break;
   case 8: cout << " un ir vasara" << "\nlîdz gada beigâm ir 5 mçneði";break;
   case 9: cout << " un ir rudens" << "\nlîdz gada beigâm ir 4 mçneði";break;
   case 10: cout << " un ir rudens" << "\nlîdz gada beigâm ir 3 mçneði";break;
   case 11: cout << " un ir rudens" << "\nlîdz gada beigâm ir 2 mçneði";break;
   case 12: cout << " un ir ziema" << "\nlîdz gada beigâm ir 1 mçneði";break;
}
return 0;
}
