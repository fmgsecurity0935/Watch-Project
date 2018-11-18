#include <iostream>

using namespace std;

class Watch{
public:
int hour;
int minute;
int second;

Watch(int h, int m, int s);
void getTime();
~Watch();};

Watch::Watch(int h, int m, int s){hour=h; minute=m; second=s;};
Watch::~Watch(){hour=0; minute=0; second=0;};
void Watch::getTime(){cout<< hour << "시" << minute << "분" << second << "초" << endl;};

int main(){
class Watch *TIME = new Watch(1,30,25);
TIME->getTime();
TIME->~Watch();
return 0;
}