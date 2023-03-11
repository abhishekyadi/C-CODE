/* ,......DATA TYPE IN C++
#include<iostream>
using namespace std;
int main(){
    int age=99;
    bool isMarried=true;
    string name="abhi";
    char gender='m';
    float weight =88.9;
cout<<name<<" "<<age<<" "<<gender<<" " <<isMarried<<" "<<weight<<" "<<endl;
return 0;
}*/


#include<iostream>
using namespace std;
int main(){
    cout<<sizeof(int)<<endl;
    cout<<sizeof(char)<<endl;
    cout<<sizeof(float)<<endl;
    cout<<sizeof(long long)<<endl;
    cout<<sizeof(3.4f)<<endl;
    cout<<sizeof(3.4)<<endl;
    int var=5;
    cout<<sizeof(var ++)<<endl;
}