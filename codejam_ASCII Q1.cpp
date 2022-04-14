#include <iostream>
#include <vector>
using namespace std;

void rows_plus_minus(int row_num){
    for (int i = 0; i < row_num + 1;i++){
        cout<<"+";
        if(i != row_num)
            cout<< "-"; 
    }
}

void columns_print(int col_num){
    for (int i = 0; i < col_num + 1;i++){
        cout<<"|";
        if(i != col_num)
            cout<< "."; 
    }
}


int main(){
    int num,row,col;
    cout<<"";
    cin>>num;
    
    vector<int>row_vec, col_vec;

    for(int k=1;k<=num;k++){
        cout<<"";
        cin>>row;
        cin>>col;
        row_vec.push_back(row);
        col_vec.push_back(col);
    }
 


    for(int j=1;j<=num;j++){    
        cout<<"Case #"<<j<<":\n";
        printf("..");
        rows_plus_minus(col_vec[j-1] -1);
        printf("\n..");
        columns_print(col_vec[j-1] - 1);
        printf("\n");
        rows_plus_minus(col_vec[j-1] );
        printf("\n");
    int i = row_vec[j-1] -1;
        while(i!=0)
        {
            columns_print(col_vec[j-1]  );
            printf("\n");
            rows_plus_minus(col_vec[j-1] );
            printf("\n");
            i--; 
            
        }
    }
    return 0;
}