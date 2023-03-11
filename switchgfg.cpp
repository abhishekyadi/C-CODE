/*#include<iostream>
using namespace std;
int main(){
    int x=0;
    int y=0;
    cout<<"Enter the choice"<<endl;
    char move;
    cin>>move;
    switch(move){
        case 'L': x++;
        break;
        case 'R': x--;
        break;
        case 'U': y++;
        break;
        case 'D': y--;
        break;
        default:cout<<"Invalid choice";
    }
    cout<<x<<" "<<y<<" "<<endl;
    
}*/

//.............LARGEST OF THREE NUMBERS .....................
/*#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the number"<<endl;
    cin>>a>>b>>c;
    if(a>=b && a>=c){
        cout<<"a is largest"<<endl;
    }
    else if(b>=a && b>=c){
        cout<<"b is largest"<<endl;
    }
    else{
     cout<<" c is the largest number"<<endl;
    }
*/
// ....................LEAP YEARS......PROMBLEMS.......................
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the year"<<endl;
    cin>>n;
    if(n%4==0 && n%100!=0){
        cout<<"leap year"<<endl;
    }
    else if(n%400==0){
        cout<<"leap year"<<endl;
    }
    else{
        cout<<"not a leap year"<<endl;
}
return 0;
}