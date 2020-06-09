#include <iostream>

using namespace std;



struct point 
{
	char a[50];
	char b[50];
	int x,y,z;
};


int main(){
	int n;
	cin >> n;
	point p[n];

	for(int i = 0; i < n; i++){
		cin >> p[i].a >> p[i].b >> p[i].x >> p[i].y >> p[i].z;
	}

    for (int i = 0;i < n;i++){
    	if(p[i].x >= 4  && p[i].y >= 4 && p[i].z >= 4){
        	cout << p[i].a << " " << p[i].b << endl;
    }
}
	return 0;
}