/*#include<iostream>
using namespace std;
int main(){
    int a[5]= {1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}*/
#include <iostream>
using namespace std;
int main()
{
    int age;
    char gender;
    cout << "Enter your age" << endl;
    cin >> age;
    cout << "Enter gender as 'M' and 'F'" << endl;
    cin>>gender;
    if (gender == 'M')
    {
        cout << "Male" << endl;
        if (age < 18)
        {
            cout << "kids" << endl;
        }
        else
        {
            cout << "Adult" << endl;
        }
    }
    else
    {
        cout << "Female" << endl;
        if (age < 18)
        {
            cout << "kids" << endl;
        }
        else
        {
            cout << "Adult" << endl;
        }
    }
}
