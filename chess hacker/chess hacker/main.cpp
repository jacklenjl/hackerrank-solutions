//
//  main.cpp
//  chess hacker
//
//  Created by Kunal Baghel on 6/23/17.
//  Copyright © 2017 Kunal Baghel. All rights reserved.
//

#include <iostream>

using namespace std;


int main(){
    int n;
    int k;
    cin >> n >> k;
    string a[n][n];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            a[i][j]="o";
    
    }
    int rQueen;
    int cQueen;
    cin >> rQueen >> cQueen;
    rQueen-=1;
    cQueen-=1;
    //cout<<"rqueen"<<rQueen<<endl;
    a[rQueen][cQueen]="queen";
    for(int a0 = 0; a0 < k; a0++){
        int rObstacle;
        int cObstacle;
        cin >> rObstacle >> cObstacle;
        rObstacle-=1;
        cObstacle-=1;
        
        a[rObstacle][cObstacle]="ob";
        
    }
    int count=0;
    for(int i=rQueen-1;i>=0;i--)
    {
        int y=cQueen;
        if(a[i][y]=="ob")
            break;
       else
        count++;
    
    }
    for(int i=rQueen+1;i<n;i++)
    {
        int y=cQueen;
        if(a[i][y]=="ob")
            break;
        else
            count++;
        
    }
    for(int i=rQueen-1;i>=0;i--)
    {
        int y=rQueen;
        if(a[y][i]=="ob")
            break;
        else
            count++;
        
    }
    for(int i=rQueen+1;i<n;i++)
    {
        int y=rQueen;
        if(a[y][i]=="ob")
            break;
        else
            count++;
        
    }
    cout<<"coutud:"<<count<<endl;
    
    int temp1r=rQueen;
    int temp1q=cQueen;
    
    for(int i=rQueen-1;i>=0;i--)
    {
        
        if(a[temp1r-i][temp1q-i]=="ob")
            break;
        else
            count++;
    
    }
    cout<<"up left :"<<count<<" n2 :"<<n<<endl;
   
    int temp2r=rQueen;
    int temp2q=cQueen;
    for(int i=rQueen+1;i<n;i++)
    {
        
        if(a[temp2r+i][temp2q+i]=="ob")
            break;
        else
            count++;
        
    }
    
    cout<<count;
    
    
    
    return 0;
}
