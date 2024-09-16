#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class SolutionThree{
public:
	string reverseStr(string s, int k){
		int n=s.size();
		for(int i=0; i<n; i+=2*k){
			if(i+k<=n){
				reverse(s.begin()+i, s.begin()+i+k);
			}else{
				reverse(s.begin()+i, s.end());
			}
		}
		return s;
	}
};

int main(){
	cout<<"cleaning code!"<<endl;
	return 0;
}