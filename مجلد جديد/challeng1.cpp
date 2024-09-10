#include <bits/stdc++.h>
using namespace std; 
int main(){
    int next, fibonacci, first = 0, second = 1; 
    
    cin >> fibonacci ; 
    if(fibonacci==1)
    {
    next =0 ;
    cout << next;
    }
    else if(fibonacci==2)
    {
    next =1 ;
    cout << next;
    }
    
     else 
    {
     for (int i = 2; i <fibonacci; i++)
    {
    next = first + second;
    first = second;
    second = next; 
    }
    cout   << "    the next num " << next << endl; 
    } 
    
    return 0;
    } 