#include<iostream>
using namespace std;
void functionone();
void functiontwo();
bool functionthree();
string n1,n2;
bool drop=false;
char s[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row;
int column;
char token='x';
int main()
{
    cout<<"Enter 1st player name:"<<endl;
	getline(cin,n1);
    cout<<"Enter 2nd player name:"<<endl;
    getline(cin,n2);
     cout<<n1<< " is player1 se she will play first \n";
     cout<<n2<< " is player2 se she will play second \n";

    while(!functionthree())
    {
      functionone();
      functiontwo();
    functionthree();
    }
    if(token=='x' && drop==false)
    {
        cout<<n2<<" Wins!!"<<endl;
    }
    else if(token=='0' && drop==false)
    {
        cout<<n1<<" Wins!!"<<endl;
    }
    else{
        cout<<"It's a draw!"<<endl;
}
}
void functionone()
{
	
	
	cout<<"    |    |    "<<endl;
	cout<<"  "<<s[0][0]<<" | "<<s[0][1]<<"  |  "<<s[0][2]<<"  "<<endl;
	cout<<"____|____|____"<<endl;
	cout<<"    |    |    "<<endl;
	cout<<"  "<<s[1][0]<<" | "<<s[1][1]<<"  |  "<<s[1][2]<<"  "<<endl;
	cout<<"____|____|____"<<endl;
    cout<<"    |    |    "<<endl;
    cout<<"  "<<s[2][0]<<" | "<<s[2][1]<<"  |  "<<s[2][2]<<"   "<<endl;
    cout<<"    |    |    "<<endl;
    
}
void functiontwo()
{
	int number;
    if(token=='x')
    {
	cout<<n1<<" "<<"please enter: ";
	cin>>number;
    }
     if(token=='0')
    {
	cout<<n2<<" "<<"please enter: ";
	cin>>number;
    }
if(number==1)
{
	row=0;
	column=0;
}
if(number==2)
{
	row=0;
	column=1;
}
if(number==3)
{
	row=0;
	column=2;
}
if(number==4)
{
	row=1;
	column=0;
}
if(number==5)
{
	row=1;
	column=1;
}
if(number==6)
{
	row=1;
	column=2;
}
if(number==7)
{
	row=2;
	column=0;
}
if(number==8)
{
	row=2;
	column=1;
}
if(number==9)
{
	row=2;
	column=2;
}
else if(number<1 || number>9)
cout<<"invalid Number"<<endl;

if(token=='x'&&s[row][column]!='x'&&s[row][column]!='0')
{
	s[row][column]='x';
	token='0';
}
else if(token=='0'&&s[row][column]!='x'&&s[row][column]!='0')
{
	s[row][column]='0';
	token='x';
}
else{
    cout<<"There is no empty space!"<<endl;
    functiontwo();
}
}
bool functionthree()
{
for(int i=0;i<3;i++)
    {
        if(s[i][0]==s[i][1] && s[i][0]==s[i][2] || s[0][1]==s[1][i] && s[0][i]==s[2][i])
        return true;

    }
    if(s[0][0]==s[1][1] && s[1][1]==s[2][2] || s[0][2]==s[1][1] && s[1][1]==s[2][0])
    {
        return true;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(s[i][j]!='x' && s[i][j]!='0')
            {
                return false;
            }
        }
    }
 drop=true;
 return false;
}

