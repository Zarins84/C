#include <iostream>
#include <chrono>
#include <thread>

 int main(){
    using namespace std;
    using namespace std::this_thread;
    using namespace std::chrono;
    
    char red[]= {0x1b,'[','0',';','3','1','m',0};    
    cout << red << "_______" << endl;                 
    cout << red << "|RED|  " << endl;
    cout << red << "_______" << endl;
    sleep_for(nanoseconds(50));
    sleep_until(system_clock::now() + seconds(3));
    char yellow[]= {0x1b,'[','0',';','3','3','m',0};
    cout << yellow << "_______" << endl;
    cout << yellow << "|YELLOW|" << endl;
    cout << yellow << "_______" << endl;
    sleep_for(nanoseconds(50));
    sleep_until(system_clock::now() + seconds(1));
    if (system("CLS")) system("clear");
    cout << "\n" << "\n" << endl;
    cout << yellow << "_______" << endl;
    cout << yellow << "|YELLOW|" << endl;
    cout << yellow << "_______" << endl;
    sleep_for(nanoseconds(50));
    sleep_until(system_clock::now() + seconds(1));
    if (system("CLS")) system("clear");
    char green[]= {0x1b,'[','0',';','3','2','m',0};
    cout << "\n" << "\n" << "\n" << "\n" << endl;
    cout << green << "_______" << endl;
    cout << green << "|GREEN|" << endl;
    cout << green << "_______" << endl;
    sleep_for(nanoseconds(50));
    sleep_until(system_clock::now() + seconds(3));
    if (system("CLS")) system("clear");
}

