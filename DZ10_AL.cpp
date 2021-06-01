#include <iostream>
#include <string.h>
using namespace std;

void fillString(string &st){
cout << "Insert text "<<endl;
cin >> st;}

void showString(string st){
cout << st <<endl;}

bool fond(string st){
string stack;
int counter = 0;
if ((st[0] == ')') ||
(st[0] == '}') || (st[0] == ']'))
return false;

for (int i=0; i<=st.length(); ++i){
if ((st[i] == '(') ||
(st[i] == '{') || (st[i] == '['))
stack [++counter] = st [i];

if ((st[i+1] == ')') &&
(stack[counter] == '('))
stack[counter--] = NULL;
else if ((st[i+1] == ')') && (stack[counter] != '('))
return false;

if ((st[i+1] == '}') &&
(stack[counter] == '{'))
stack[counter--] = NULL;
else if ((st[i+1] == '}') && (stack[counter] != '{'))
return false;

if ((st[i+1] == ']') &&
(stack[counter] == '['))
stack[counter--] = NULL;
else if ((st[i+1] == ']') &&
(stack[counter] != '['))
return false;
}
if (counter > 0)
return false;
else
return true;
}

int main(int argc, char *argv[]) {
string st;
fillString(st);
cout<<fond(st);
return 0;
}
