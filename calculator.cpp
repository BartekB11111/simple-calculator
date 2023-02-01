#include <iostream>

using namespace std;

float add(float a,float b) {
    return a+b;
}
float decrease(float a,float b) {
    return a-b;
}
float multiply(float a,float b) {
    return a*b;
}
float divide(float a,float b) {
    return a/b;
}
int main()
{
    float a,b;
    bool check=false;
    string symbol;
    while(check==false) {
        cout <<"Input +,-,x or /"<< endl;
        cin>>symbol;
        if(symbol=="+"||symbol=="-"||symbol=="x"||symbol=="/")
        check=true;
        else
        cout<<"Invalid character"<<endl;
    }
    while(a!=0||b!=0) {
    cout<<"Input 2 numbers"<<endl;
    cin>>a>>b;
    if(a!=0&&b!=0)
    break;
    else
    cout<<"Division by zero or invalid number."<<endl;
    continue;
    }
    if(symbol=="+")
        cout<<add(a,b);
    if(symbol=="-")
        cout<<decrease(a,b);
    if(symbol=="x")
        cout<<multiply(a,b);
    if(symbol=="/")
        cout<<divide(a,b);
}
