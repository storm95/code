#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t,n;
    cin>>t;
    while(t--){
        int sum=0;
        cin>>n;
        int arr[200][200]={0};
        int dist[200][200]={0};
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
                if(i==j){
                    dist[i][j]=0;
                    sum+=arr[i][j];
                }
                else if(dist[i][j]==0 && dist[j][i]==0)dist[i][j]=arr[i][j];
                else dist[i][j]=min(arr[i][j],dist[j][i]);
                //dist[j][i]=dist[i][j];
            }
        }


        /*for (int k = 0; k < n; k++){
            for (int i = 0; i < n; i++){
                    cout<<arr[k][i]<<"   ";
            }
            cout<<endl;
        }
        cout<<endl;

        for (int k = 0; k < n; k++){
            for (int i = 0; i < n; i++){
                    cout<<dist[k][i]<<"   ";
            }
            cout<<endl;
        }*/


        //floyd warshall
        //int dsum =0 ;
        for(int k = 0; k < n; k++){
            for (int i = 0; i < n; i++){
                for (int j = 0; j < n; j++){
                    if(i==j)continue;
                    if (dist[i][k] && dist[k][j]) {
                        if(dist[i][j]==0){
                            dist[i][j] = dist[i][k] + dist[k][j];
                            dist[j][i]=dist[i][j];
                        }
                        else if(dist[i][k] + dist[k][j] < dist[i][j]){
                            sum+=dist[i][j];
                            dist[i][j] = dist[i][k] + dist[k][j];
                            dist[j][i]=dist[i][j];
                        }
                    }
                }
            }
        }

        int flag=0;
        for(int i=0;i<n;i++){
            if(flag==1)break;
            for(int j=i;j<n;j++){
                if(i==j)continue;
                else{
                    if(dist[i][j]==0 && dist[j][i]==0){
                        flag =1;
                        break;
                    }
                }
            }
        }

        if(flag==1){cout<<-1<<endl;}
        else{cout<<sum<<endl;}

    }
    return 0;
}
