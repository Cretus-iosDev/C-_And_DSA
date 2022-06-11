//Learning if and else

#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two number"<<endl;
    cin>>a>>b;

    //if else if
    if(a==b){
        cout<<"these are equal: "<<endl;
    } else if (a<b){
        cout<<"a is smaller"<<endl;
    }else{
        cout<<"a is greater"<<endl;
    }

    //nested if else
    /* 
    if(a==b){
        cout<<"these are equal: "<<endl;
    } else{
        if (a<b){
            cout<<"a is greater: "<<endl;
        } else{
            cout<<"a is greater: "<<endl;
        }
    }
    */


    /*
    if(a==b)
    {
        cout<<"hey these are equal: "<<endl;
    }

    if(a == b){
        cout<<"are equal"<<endl;
    } else{
        cout<<"Not Equal"<<endl;
    } 
    */

    return 0;
}