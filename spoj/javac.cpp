#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string conv (string str){
    if((str[0]>='A' && str[0]<='Z') || str[0]<'A' || str[0] > 'z' || (str[0]>'Z' && str[0]<'a'))return "Error!";
    int len=str.length();
    if(str[len-1]=='_')return "Error!";
    int uflag =0,cflag=0,uu=0,cc=0;
    string ans ="";
    for(int i=0;i<len;i++){

        if(str[i]=='_'){
            if(str[i+1]=='_' || (str[i+1]>='A' && str[i+1]<='Z')){return "Error!";}
            else{uu=1;uflag=1;}
        }
        else if(str[i]>='A' && str[i]<='Z'){cc=1;cflag=1;}
        if(uflag==1){ans=ans+(char)toupper(str[i+1]); i+=1; uflag=0;}
        else if(cflag==1){ans= ans + '_'; ans=ans+(char)tolower(str[i]); cflag=0;}
        else {ans = ans + str[i];}
        if(uu==1 && cc==1)return "Error!";
    }
    return ans;

}

int main(){
    string str;
    while(cin>>str){
        cout<<conv(str)<<endl;
        //cout<<"hello"<<endl;
    }
    return 0;
}
