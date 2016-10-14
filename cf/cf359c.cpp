        #include<iostream>
        #include<bits/stdc++.h>

        using namespace std;

        int cnt =0;
        int n,m,lpos,rpos;

        bool valid(string str1, string str2){
            vector<bool>chk(7,false);
            int str1len = str1.length();
            int str2len = str2.length();

            int valhr = 0;
            int valmn = 0;

            for(int i=0;i<str1len;i++){
                if(chk[(int)(str1[i]-'0')])return false;
                chk[(int)(str1[i]-'0')] = true;
                valhr=(valhr*7)+(str1[i]-'0');
                if(valhr>n)return false;
            }
            for(int i=0;i<str2len;i++){
                if(chk[(int)(str2[i]-'0')])return false;
                chk[(int)(str2[i]-'0')] = true;
                valmn=(valmn*7)+(str2[i]-'0');
                if(valmn>m)return false;
            }
            if(valhr<=n && valmn<=m)return true;
            return false;
        }
        char ele[]={'0','1','2','3','4','5','6'};

        void checkall(string hr,string mn){
            int hlen = hr.length();
            int mlen =mn.length();
            if(hlen>lpos|| mlen > rpos )return;
            else if(hlen==lpos && mlen==rpos){
                if(valid(hr,mn)){cnt+=1;}
                //cout<<hr<<" "<<mn<<endl;}
                return;
            }
            else if(mlen==rpos){
                for(int i=0;i<=6;i++){
                    string tmp1 = hr+ele[i];
                    checkall(tmp1,mn);
                }
            }
            else if(hlen==lpos){
                for(int j=0;j<=6;j++){
                    string tmp2 = mn+ele[j];
                    checkall(hr,tmp2);
                }
            }
            else {
                 for(int i=0;i<=6;i++){
                    for(int j=0;j<=6;j++){
                        string tmp1 = hr+ele[i];
                        string tmp2 = mn+ele[j];
                        checkall(tmp1,tmp2);
                    }
                }
            }
        }

        int main(){
            ios::sync_with_stdio(false);
            cnt=0;
            cin>>n>>m;
            n-=1;
            m-=1;
            lpos=0,rpos=0;
            int tmp;
            tmp=n;
            if(tmp==0)lpos=1;
            while(tmp!=0){
                tmp=tmp/7;
                lpos+=1;
            }
            tmp=m;
            if(tmp==0)rpos=1;
            while(tmp!=0){
                tmp=tmp/7;
                rpos+=1;
            }
            if(rpos+lpos >7){
                cout<<0<<endl;
                return 0;
            }
            //cout<<lpos<<" "<<rpos<<endl;

            string hour="",minutes="";
            checkall(hour,minutes);
            cout<<cnt<<endl;

            return 0;
        }
