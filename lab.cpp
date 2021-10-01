#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){
    
    int i, j;
    int matrix[4][4];
    srand(time(NULL));

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            matrix[i] [j]= rand()%100;
        }
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){

            cout << matrix[i][j] <<" ";
            
          if (matrix[i][j]>matrix[i][j+1]){
            int N=matrix[i][j];
            matrix[i][j]=matrix[i][j+1];
            matrix[i][j+1]=N;
          }
        }
        
        
        cout << endl;
        
        
    }
    
    return 0;
}