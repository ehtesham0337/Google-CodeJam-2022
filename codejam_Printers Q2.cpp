#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int max=1000000;
    int t;
    cin>>t;
    int inputarray[t*3][4]={};
    
    for (int i = 0; i < t*3; i++){
        for (int j = 0; j < 4; j++)
        {
            cin>>inputarray[i][j];
        }
        
    }
    int r=0;
    for (int i = 0; i < t; i++)
    {
        int CYAN[3],MAGENTA[3],YELLOW[3],BLACK[3];

        for (int j = 0; j < 3; j++)
        {
            CYAN[j]=inputarray[r+j][0];
            MAGENTA[j]=inputarray[r+j][1];
            YELLOW[j]=inputarray[r+j][2];
            BLACK[j]=inputarray[r+j][3];
        }
        r+=3;
        int minC = *min_element(CYAN, CYAN + 3);
        int minM = *min_element(MAGENTA, MAGENTA + 3);
        int minY = *min_element(YELLOW, YELLOW + 3);
        int minB = *min_element(BLACK, BLACK + 3);
        int summ=minC+minM+minY+minB;
        int answer[4]={minC,minM,minY,minB};
        string imp;
        if(summ==max){
            imp="";
        }
        else if(summ<max){
            imp =" IMPOSSIBLE";
        }
        else{

            int diff=summ-max;
            
            if(answer[0]-diff<0){
                diff-=answer[0];
                answer[0]=0;
            }else{
                answer[0]-=diff;
                diff=0;
            }
            if(diff!=0){
                if(answer[1]-diff<0){
                    diff-=answer[1];
                    answer[1]=0;
                }else{
                    answer[1]-=diff;
                    diff=0;
                }
            }
            if(diff!=0){
                if(answer[2]-diff<0){
                    diff-=answer[2];
                    answer[2]=0;
                }else{
                    answer[2]-=diff;
                    diff=0;
                }
            }
            if(diff!=0){
                if(answer[3]-diff<0){
                    diff-=answer[3];
                    answer[3]=0;
                }else{
                    answer[3]-=diff;
                    diff=0;
                }
            }

            
        //     int diff_each=diff/4;
        //     for (int a = 0; a < 4; a++)
        //     {
        //         answer[a]-=diff_each;
        //         cout<<answer[a]<<endl;
        //     }
            
        // if(answer[0]<0){
        //     answer[0]+=minM-answer[1];
        //     answer[1]-=minM-answer[1];
        //     if(answer[0]<0){
        //         answer[0]+=minY-answer[2];
        //         answer[2]-=minY-answer[2];
        //     }
        //     if(answer[0]<0){
        //         answer[0]+=minB-answer[3];
        //         answer[3]-=minB-answer[3];
        //     }
        // }
        // if(answer[1]<0){
        //     answer[1]+=minC-answer[0];
        //     answer[0]-=minC-answer[0];
        //     if(answer[1]<0){
        //         answer[1]+=minY-answer[2];
        //         answer[2]-=minY-answer[2];
        //     }
        //     if(answer[1]<0){
        //         answer[1]+=minB-answer[3];
        //         answer[3]-=minB-answer[3];
        //     }
        // }
        // if(answer[2]<0){
        //     answer[2]+=minC-answer[0];
        //     answer[0]-=minC-answer[0];
        //     if(answer[2]<0){
        //         answer[2]+=minM-answer[1];
        //         answer[1]-=minM-answer[1];
        //     }
        //     if(answer[2]<0){
        //         answer[2]+=minB-answer[3];
        //         answer[3]-=minB-answer[3];
        //     }
        // }
        // if(answer[3]<0){
        //     answer[3]+=minC-answer[0];
        //     answer[0]-=minC-answer[0];
        //     if(answer[3]<0){
        //         answer[3]+=minM-answer[1];
        //         answer[1]-=minM-answer[1];
        //     }
        //     if(answer[3]<0){
        //         answer[3]+=minY-answer[2];
        //         answer[2]-=minY-answer[2];
        //     }
        // }
        }
        cout<<"Case #"<<i+1<<":";
        if(imp!=" IMPOSSIBLE"){
        for(int a=0;a<4;a++){
            cout<<" "<<answer[a];
        }
        cout<<endl;
        }else{
            cout<<imp<<endl;
        }
    }
    return 0;
}