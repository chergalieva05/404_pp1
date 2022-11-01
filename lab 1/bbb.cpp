 #include<iostream>
using namespace std;
int main(){
	string s,s2;
	cin>>s;
	int cnt=0;
	string t1=">>-->";
	string t2="<--<<";
	for (int i=0;i<=s.size();i++){
		s2=s.substr(i);
		if (s2== ">>-->" || s2=="<--<<")
		cnt++;
	}
	cout<<cnt;
}
