#include <iostream>
#include <string>
using namespace std;
int main ()
{
    double num,kilobytes,bytes,bits,megabytes,gigabytes,terabytes;
    cin>>num;

    bits=num;
    bytes=bits/8;
    kilobytes=bytes/1024;
    megabytes=kilobytes/1024;
    gigabytes=megabytes/1024;
    terabytes=gigabytes/1024;

    cout<<"bytes= "<<bytes<<"\n";
    cout<<"bits= "<<bits<<"\n";
    cout<<"kilobytes= "<<kilobytes<<"\n";
    cout<<"megabytes= "<<megabytes<<"\n";
    cout<<"gigabytes= "<<gigabytes<<"\n";
    cout<<"terabytes= "<<terabytes<<"\n";

    return 0;
} 


