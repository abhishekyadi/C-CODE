//unary operators in cpp
//#include<iostream>
//using namespace std;
/*int main(){
    int a,b;
    cout<<"enter thr number:"<<endl;
    cin>>a;
    cout<<++a<<endl;
    cout<<"enter thr second number:"<<endl;
    cin>>b;
    //cout<<b++<<endl;
    cout<<++b<<endl;
    cout<<b++;
}*/

//logical operators
/*int main(){
bool a=true;
bool b=false;
cout<< (a&&b)<<endl;;
cout<<(a||b);
return 0;
}*/

//Ternary operator
/*int main(){
    int a=60;
    int b=50;
    cout<<((a>b)?a:b);
    return 0;
}*/

//............STRING.............//
#include<iostream>
#include<cstring>
using namespace std;
int main(){
char c1[]="Great";
char c2[]="Learning";

cout <<"concatenation: "<<strcat(c1,c2)<<endl;
cout<<"copy: "<<strcpy(c1,c2)<<endl;
cout<<strlen(c1);
return 0;
}                
