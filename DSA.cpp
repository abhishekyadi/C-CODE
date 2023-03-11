//insert operation  in an array

/*  #include <iostream>
#include <cmath>
using namespace std;

int insert(int arr[], int n, int x, int cap, int pos)
{
	if(n == cap)
		return n;

	int idx = pos - 1;

	for(int i = n - 1; i >= idx; i--)
	{
		arr[i + 1] = arr[i];
	}

	arr[idx] = x;

	return n + 1;
} 


    
int main() {
	
       int arr[5], cap = 5, n = 3;

       arr[0] = 5; arr[1] = 10; arr[2] = 20;

       cout<<"Before Insertion"<<endl;

       for(int i=0; i < n; i++)
       {
       	cout<<arr[i]<<" ";
       }

       cout<<endl;

       int x = 7, pos = 2;

       n = insert(arr, n, x, cap, pos);

       cout<<"After Insertion"<<endl;

       for(int i=0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
    
}*/

//  SEARCHING an element in an unsorted array
/*#include<iostream>
#include<cmath>
using namespace std;
int search(int arr[],int n,int x){
       for(int i=0;i<n;i++){
              if (arr[i]==x)
                  return i;       }
                  return -1;
}


int main(){
       int arr[]={12,23,11,23,56},x=56;
       cout<<search(arr,5,x);
}*/
//      SUM OF N DIGIT NUMBER 
/*#include<iostream>
using namespace std;
int getsum(int n){
       if(n==0)
       return 0;
       return n+getsum(n-1);
}
int main(){
       int n=4;
       cout<<getsum(n);
       return 0;
}*/
//
#include<iostream>
using namespace std;
int fun(int n){
       if(n<10)
       return n;
       return fun(n/10)+n%10;
}
int main(){
      cout<< fun(3456)<<endl;
}












