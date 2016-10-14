#include<bits/stdc++.h>

using namespace std;

int main(){
    int budget,n;
    int cst[105],fun[105];
    scanf("%d %d",&budget,&n);
    for(int i=1;i<=n;i++){
        scanf("%d%d",&cst[i],&fun[i]);
    }
    while(budget!=0 || n!=0){
        int table[502][502]={0};
        //int aux[502][502]={0};
        for(int i=1; i<=n;i++){
            for(int j=1;j<=budget;j++){
                if(j>=cst[i]){
                    if(fun[i]+table[i-1][j-cst[i]] >= table[i-1][j]){
                        table[i][j]=fun[i]+table[i-1][j-cst[i]];
                        //aux[i][j]=1;
                    }

                    else{
                        table[i][j]=table[i-1][j];
                       //a/ux[i][j]=0;
                    }
                }
                else{
                    table[i][j]=table[i-1][j];
                    //aux[i][j]=0;
                }
            }
        }
        /*
        cout<<table[n][budget]<<endl;
        for(int i=0 ;i<=n;i++){
            for(int j=0;j<=budget;j++){
                cout<<table[i][j]<<" ";
            }
            cout<<endl;
        }*/
        int tot = 0;
        for(int i=1;i<=budget;i++){
            if(table[n][i]==table[n][budget]){
                tot=i;
                break;
            }
        }

        printf("%d %d\n",tot, table[n][budget]);
        scanf("%d %d",&budget,&n);
        for(int i=1;i<=n;i++){
            scanf("%d%d",&cst[i],&fun[i]);
        }
    }
    return 0;

}
/*cout<<table[n][budget]<<endl;
        for(int i=0 ;i<=n;i++){
            for(int j=0;j<=budget;j++){
                cout<<table[i][j]<<" ";
            }
            cout<<endl;
        }
        */
