#include <iostream> 
using namespace std;
int main()
{
int r,k;
float vid[4];
float sum,i;
string sk[4]= {" Kristianam Brikmanim", " Girtam Kalejam"," Uvim Kirsim"," Linardam Zarinam"};
     int vert[4][10];
for (r=0; r<4; r++)
{
    cout << "Ievadiet Atzimes pa vienai, ja vairak nav, tad ievadiet 0" << sk[r] << endl;
    k=-1;
    sum=0;
    i=0.0;
    do 
    {
        k+=1;    
IEZ: cin >> vert[r][k]; 
    if (vert[r][k]>10 or vert[r][k]<0)
        {
            cout << "ievadiet atkartoti, jo nepareizi ievadits" << endl;
            goto IEZ;
        }
        sum+=vert[r][k];
        i++;
    } while (vert[r][k]!=0);
    vid[r]= sum/(i-1);
}
   
cout << endl;
for (r=0; r<4; r++)
{
    cout << endl<< sk[r]<< " vidçjâ atzîme ir " << vid[r] << " no atzimem:" << endl;
     k=0;
    do 
    {
    cout << vert[r][k] << "\t"; 
    k+=1;
    } while (vert[r][k]!=0);
    cout << endl;
}
    return 0;
}
