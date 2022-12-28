#include<iostream>
using namespace std;
int romantoint(string s){
	 int  x=0;
        int size=s.length();
        for(int i=0;i<size;i++){
            if(s[i]=='I'){
               
               x=x+1;
            }
            else if(s[i]=='V'){
                x=x+5;
                if(s[i-1]=='I'){
                    x=x-1-5+4;
                }
                
                
            }
            else if(s[i]=='X'){
                x=x+10;
                if(s[i-1]=='I'){
                    x=x-1-10+9;
                }
            }
            else if(s[i]=='L'){
                x=x+50;
                if(s[i-1]=='X'){
                    x=x-10-50+40;
                }
            }
            else if(s[i]=='C'){
                x=x+100;
                  if(s[i-1]=='X'){
                    x=x-10+90-100;
                    }
            }
            else if(s[i]=='D'){
                x=x+500;
                  if(s[i-1]=='C'){
                    x=x-100-500+400;
                }
            }
            else if(s[i]=='M'){
                x=x+1000;
                   if(s[i-1]=='C'){
                    x=x-100+900-1000;
                }
            }
            
        }
        cout<<x;
        return x;
}
int main (){
	string s;
	 getline(cin, s);
	 romantoint(s);
}
