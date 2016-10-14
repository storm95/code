#include<bits/stdc++.h>

using namespace std;
int main(){
    //ios::sync_with_stdio(false);
    int t;
    char gr;
    scanf("%d%c",&t,&gr);
    fflush(stdin);
    while(t>0){
        //cout<<"test case : "<<t<<endl;
        fflush(stdin);
        string str;
        getline(cin,str);
        int len = str.length();
        string tmp="";
        for(int i=0;i<len;i++){
            if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u')continue;
            else tmp+=str[i];
        }
        //tmp+=" ";
        len = tmp.length();
        //cout<<len<<endl;
        string ans ="$"; //ans+= tmp[0];
        int j=0;

        for(int i=0;i<len;i++){
               //cout<<(int)tmp[i]<<endl;
            if(tmp[i]==' '){ans+=tmp[i];j+=1;}
            else if(tmp[i]==ans[j])continue;
            //else if(tmp[i]=='\0' || tmp[i]=='\n' )continue;
            else {ans+=tmp[i]; j+=1;}

        }

        len = ans.length();
        cout<<len-1<<endl;
        //cout<<tmp<<endl;
        //cout<<ans<<endl;

        fflush(stdin);
        t-=1;

    }
    return 0;
}


