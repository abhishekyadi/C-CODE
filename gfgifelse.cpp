#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    /*if(n%2==0)
    cout<<"the number is even"<<endl;
    else
    cout<<"the number is odd"<<endl;
return 0;
}*/
// ...........POSITIVE NEGATIVE  zero NUMBER .................
/*if(n>0){
    cout<<"the number is positive"<<endl;
}
else if(n<0){
cout<<"the number is negative"<<endl;
}
else{
    cout<<"the number is 0"<<endl;
    }
    return 0;
}
*/
// ..........NESTED IF ELSE ........POSITIVE NEGATIVE OR ODD EVEN NUMBER...................
if(n>0){
    cout<<"positive"<<endl;
    if(n%2==0){
        cout<<"it is even"<<endl;
    }
    else{
        cout<<"it is odd"<<endl;
    }
}
else if(n<0){
    cout<<"negative"<<endl;
    if(n%2==0){
        cout<<"it is even"<<endl;
    }
    else{
        cout<<"it is odd"<<endl;
    }
}
else{
    cout<<"number will be 0"<<endl;
}
return 0;
}
