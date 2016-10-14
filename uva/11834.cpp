#include<bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(false);

    int l,c,r1,r2;
    cin>>l>>c>>r1>>r2;
    while(l!=0 && c!=0 && r1!=0 && r2!=0){
        int dia1 = (2.0*r1);
        int dia2 = (2.0*r2);
        int x1,y1,x2,y2;
        x1=min(r1,r2);
        y1=x1;
        x2=l-max(r1,r2);
        y2=c-max(r1,r2);
        int a = abs(x2-x1);
        int b = abs(y2-y1);
        double dis = sqrt((a*a) + (b*b));
        int diag = floor(sqrt( (l*l) + (c*c) ));
        if(dia1 > min(l,c) || dia2 > min(l,c))cout<<"N"<<endl;
        else if((r1+r2)<=dis){cout<<"S"<<endl;}
        else cout<<"N"<<endl;
        cin>>l>>c>>r1>>r2;
    }
    return 0;
}
