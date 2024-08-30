#include<iostream>
#include<conio.h>
using namespace std;
class Mygame{
    private:
   int height;
int width;
int x,y,fx,fy,flag,score,end=0,p=0 ;
int tx[100],ty[100],px,py,py2,px2,len,j,i;
public:
Mygame()
{
    cout<<"Enter height :"<<endl;
    cin>>height;
    cout<<"Enter width :"<<endl;
    cin>>width;
}
void border()
{ 
   
    system("cls");
    for(i=0;i<height;i++)
    {
        for(j=0;j<width;j++)
        {
            if(i==0||i==height-1){
                  cout<<"-";
            }else if(j==0||j==width-1){
                 cout<<"|";
            }
            else{
                if(i==x&&j==y)
                {
                    cout<<"@";
                }
                else if(i==fx&&j==fy){
                 cout<<"#";
                }
                else{
                    bool print=false;
                    for(int k=0;k<len;k++)
                    {
                        if(tx[k]==i&&ty[k]==j)
                    {
                        cout<<"0";
                        print=true;
                    }
                    }
                    if(!print){ cout<<" ";}

                }
            
            }
        }
        cout<<"\n";
    }
 cout<<"Your score: "<<score<<endl;
}
void food()
{
  x=height/2;
  y=width/2;
  lable1:
  fx=rand()%(height-2);
  if(fx==0)
  goto lable1;
  lable2:
  fy=rand()%(width-2);
  if(fy==0)
  goto lable2;
score=0;
len=0;
}
void move()
{
px=tx[0];
py=ty[0];
tx[0]=x;
ty[0]=y;
for(int i=1;i<len;i++)
{
   px2=tx[i];
   py2=ty[i];
   tx[i]=px;
   ty[i]=py;
   px=px2;
   py=py2;
}
if(px==x&&py==y)
{
    end=1;
}
    char ch;
    ch=getch();
    switch(ch)
    {
        case 'w':
            x--;
        break;
        case 's':
              x++;
        break;
        case 'a':
              y--;
        break;
        case 'd':
              y++;
        break;
        }

        if(x==0||x==height||y==0||y==width)
        {
            end=1;
        }
        if(x==fx&&y==fy)
        {
            lable3:
            fx=rand()%(height/2);
            if(fx==0)
            goto lable3;
            lable4:
            fy=rand()%(width/2);
            if(fy==0)
            goto lable4;
            score+=10;
            len++;
        }
        

    }
    void start1()
    {
        
        food();
        while(!end)
        { 
            border();
            move();
        }
        
    }

} start;

int main()
{ 
    start.start1();
    
}