#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
 srand(time(NULL));
 int k,z;
    int sk[10],sk1[10],sk2[10];
    //z=0;
    for(k=0; k<10; k++){
        sk[k]=rand()%100;
        sk1[k]=rand()%100;
        sk2[k]=sk[k]+sk1[k];
        cout << sk[k] << "\t"<< sk1[k] << "\t"<< sk2[k] << "\n" ;
    }
    for(k=0; k<10; k++){
        cout << sk[k] << "\t" ; }
    cout <<endl;
    for(k=0; k<10; k++){
        cout << sk1[k] << "\t" ; }
    cout <<endl;
    for(k=0; k<10; k++){
        cout << sk2[k] << "\t" ; }
    return 0;
}
