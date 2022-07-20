#include <iostream>

using namespace std;

int main()
{
    //variabl declaration:
    /*int n1,n2,hcf,temp,lcm;


    cout<<"Enter the two numbers: \n";
    cin>>n1>>n2;
    hcf=n1;
    temp=n2;
    while(hcf!=temp)
    {

        if (hcf>temp)
            hcf-=temp;
            else
                temp-=hcf;
    }
    //outside the while loop print the lcm of the number
        lcm=(n1*n2)/hcf;
        cout<<"LCM Using HCF is :"<<lcm;

*/
//program will find the sum of positive numbers:
/*int  number;
int sum=0;
//take input from the user:
cout<<"Enter the number";
cin>>number;
while(number>=0){
      //add all the positive numbers
      sum+=number;
      //take the input again from the user if the number is positive})
cout<<"Enter the number:";
    cin>>number;
}
cout<<"\nThe sum is :"<<sum<<endl;
*/
//program to generate the fibbonachi sequence upto certain number:
int t1=0,t2=1,next_term=0,n;
cout<<"Enter the positive number:";
cin>>n;
//Displays the first two terms which is always 0 and 1;
next_term=t1+t2;
while(next_term<=n){
    cout<<next_term<<", ";
t1=t2;
t2=next_term;
next_term=t1+t2;
}
    return 0;
}
