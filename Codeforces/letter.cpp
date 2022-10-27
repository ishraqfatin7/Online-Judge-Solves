#include<bits/stdc++.h>
using namespace std; 
int main() {

     char arr[50][50]; 

    int row, column; 
    int starCount = 0;
    cin >>row>>column; 

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
        
    }


    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
               
                if (arr[i][j] == '*')
                {
                    while (arr[i++][j++ ] =='*')
                    {
                      starCount++;   
            
                    }
                    
                    
                }
                
        }
       
    }
    
     cout <<starCount <<endl;

}