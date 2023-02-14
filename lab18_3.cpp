#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int);
void showVector(vector<int>);
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}

vector<int> randomVector(unsigned int N){	
    vector<int> v(N);
    for(unsigned int i = 0; i < N; i++) v.at(i)=(rand()%10);
    return v;
}

void showVector(vector<int> v){
	cout << "[";
	for(unsigned int i = 0; i<v.size();i++){
		cout << v.at(i);
		if(i == v.size()-1) cout << "]";
		else cout << " ";
	}
}

int dotProduct(vector<int> v1,vector<int> v2){
	int sum = 0;
	for(unsigned int i=0; i<v1.size(); i++) sum += v1.at(i)*v2.at(i);	
	return sum;
}