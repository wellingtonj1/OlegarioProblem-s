#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a_x,a_y,b_x2,b_y2;
	float result;
	cin>>a_x>>a_y>>b_x2>>b_y2;
	result=sqrt(pow(b_y2-a_y,2)+pow(b_x2-a_x,2));
	cout<<"resultado ==" <<result;
}
