#include<iostream>
using namespace std;
/*int firstdignum(int n){
    while(n>10){
        n=n/10;
    }
    return n;
}
int main(){
    int n;
    cin>>n;
    cout<<firstdignum(n)<<endl;
}*/

/*#include<iostream>
using namespace std;

int firstDigit(int n)
{
    while(n>10)
    {
        n/=10;
    }
    return n;
}

int main()
{
    int n;
    cin>>n;
    cout<< "First Digit is: " << firstDigit(n);
    return 0;
}*/

//................LEAP YEAR
int main(){
    int n;
    cin>>n;
    if((n%4==0 && n%100!=0)||n%400==0){
        return 1;
    }
        else 
        return 0;
    };
