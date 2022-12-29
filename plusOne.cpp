#include<bits\stdc++.h>
using namespace std;
vector<int> plusOne(vector<int> digits) {
        long int n=0;
       int  size=digits.size();
        for(int i=0;i<size;i++){
            n=(n*10)+digits[i];
        }
        n=n+1;
        vector<int> x;
     long long  int temp=n, rem;
      while(temp>0)
      {
          rem=temp%10;
          x.push_back(rem);
          temp=temp/10;

      }
    
    reverse(x.begin(), x.end());
    
    return x;
    }
int main(){
	int n;
	cin>>n;
	int y;
	vector<int> x;
	for(int i=0;i<n;i++){
		cin>>y;
		x.push_back(y);
		
	}
    plusOne(x);
}


