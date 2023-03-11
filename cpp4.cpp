/*.........FOR LOOP ......   
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        cout<<i<<" "<<endl;
    };
    return 0;
}*/

/*......WHILE LOOP ........
#include<iostream>
using namespace std;
int main(){
    int i=10;
    while(i<40){
        cout<<i<<endl;
        i=i+1;
    }
    return 0;
}*/

/*..........STAR  PATTERN................... 
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<"*"; //u can either use cout<<j;cout<<j+1;
        }
        cout<<"\n";
    }
    return 0;
}
//.................REVERSE STAR PATTERN ................
#include<iostream>
using namespace std;
int main(){
    for(int i=5;i>=1;--i){
        for(int j=1;j<=i;j++){
            cout<<"*";
        };
        cout<<"\n";
    }
    return 0;
}*/

#include<iostream>
using namespace std;
int main(){
    for(int i=1,k=0;i<=9;++i,k=0){
        for(int j=1;j<=9-i;j++){
            cout<<" ";
        }
        while(k!=2*i-1){
            cout<<"*";
            ++k;
        }
cout<<"\n";

    }
    return 0;
}