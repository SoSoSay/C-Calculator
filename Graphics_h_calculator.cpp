#include<iostream>
#include<dos.h>
#include<stdio.h>
#include<string>
#include<windows.h>
#include<math.h>
#include<conio.h>
#include<graphics.h>


using namespace std;

int cnt;
char ch;
char c;
int ax = 1;
string row = "-#################################-";
string col = "-#";
string col2 = "#-";
bool trig = false;
bool graphics = false;
bool nN;
int x,y;
float sizex,sizey;


  void draw(int x, int y, int (six),int (siy))
    {
    int xx = x;
    int yy = y;
    int size_x = six;
    int size_y = siy;

    int gdriver = DETECT, gmode;



    initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");

    outtextxy(220,360,"X");
    line(10,380,230,380);
    outtextxy(8,80,"Y");
    line(10,150,10,380);

    line(xx+4,yy+4,xx+size_x+4,yy+4);
    line(xx+4,yy+4,xx+4,yy-size_y+4);
    line(xx+4,yy-size_y+4,xx+size_x+4,yy+4);





    getch();
    closegraph();



    }



int main()
{


    float num1;
    float num2;


    int op;
    float result;
    do{




        cout<<"Enable TRIG functions(Y/N)?"<<endl;
        init:
        cin>>c;
        cout<<"###########################"<<endl;
        switch(c)
        {
            case 'y':
            trig = true;
            break;

            case 'Y':
            trig = true;
            break;

            case 'N':
            trig = false;
            break;

            case 'n':
            trig = false;
            break;

            default:
                cout<<"Enter Y or N"<<endl;
                goto init;
            break;

        }




        if(!trig)
        {
        cout<<"Enter a number, then a operand, then the second number..."<<endl;
        cout<<"INPUT:";
        cin>>num1>>c>>num2;

        cout<<num1<<c<<num2<<endl;


            switch(c)
            {
                case '+':
                result = num1+num2;
                break;

                case '-':
                result = num1-num2;
                break;

                case '*':
                result = num1*num2;
                break;

                case '/':
                result = num1/num2;
                break;

                case 'q':
                   return 0;

                break;

                default:
                    cout<<"Enter a number, then a operand, then the second number..."<<endl;
                break;
            }

                cout<<row<<endl;
                cout<<result<<endl;
                cout<<row<<endl;
            }


        else
            {

                char opp;
                int func;
                ci:
                char _C;


                 cout<<"Input 1, for single number operation."<<endl;
                 cout<<"Input 2, for multi number operations."<<endl;
                 cin>>_C;
                    switch(_C)
                    {
                        case '1':
                        nN = false;
                        break;

                        case '2':
                        nN = true;
                        break;

                        default:
                          goto ci;
                        break;

                    }

                  cout<<"If you chose multiple numbers in one function, type the X + Y coords of the triangle. Ex: '10,10'"<<endl;





                    if(nN)
                    {    s:

                        cout<<"(x,y:";cin>>num1>>opp>>num2;cout<<")"<<endl;
                        sizex = num1;
                        sizey = num2;


                    cout<<"                      "<<endl;
                       switch(opp)
                    {
                        case ',':

                        break;

                        default:

                        cout<<"Separate the number by comma."<<endl;
                        goto s;
                        break;

                    }
                    }else
                    {
                        cout<<"Choose a Function."<<endl;
                        cout<<"'1'=sin;'2'=cos;'3'=tan"<<endl;
                        cin>>opp;
                        switch(opp)
                        {
                            case '1':

                            cout<<"sin#:";cin>>num1;cout<<endl;
                            cout<<sin(num1)<<endl;
                            break;

                            case '2':

                            cout<<"cos#:";cin>>num1;cout<<endl;
                            cout<<cos(num1)<<endl;
                            break;

                            case '3':

                            cout<<"tan#:";cin>>num1;cout<<endl;
                            cout<<tan(num1)<<endl;
                            break;
                        }





                    }







                    if(trig)
                    {
                    int hip;


                    hip = (num1*num1)+(num2*num2);
                    hip = (double)hip;

                    hip = sqrt(hip);


                    if(nN)
                    {


                    cout<<row<<endl;
                    cout<<"    #HIPOTENUSE#   "<<endl;
                    cout<<"    #"<<hip<<"#"<<endl;
                    cout<<row<<endl;
                    cout<<"COS 1: "<<cos(num1/hip)<<endl;
                    cout<<"SIN 1: "<<sin(num2/hip)<<endl;
                    cout<<"TAN 1: "<<tan(num1/num2)<<endl;
                    cout<<"COS 2: "<<cos(num2/hip)<<endl;
                    cout<<"SIN 2: "<<sin(num1/hip)<<endl;
                    cout<<"TANH: "<<tan(num2/num1)<<endl;

                    cout<<"Enable Graphics?(Y-N)"<<endl;
                    gra:
                    cin>>c;

                    switch(c)
                    {
                    case 'y':
                    graphics = true;
                    break;

                    case 'Y':
                    graphics = true;
                    break;

                    case 'N':
                    graphics = false;
                    break;

                    case 'n':
                    graphics = false;
                    break;

                    default:
                    cout<<"Enter Y or N"<<endl;
                    goto gra;
                    break;

                    }
                    }







                    if(!graphics)
                    {
                        cout<<"Triangle wasn't drawn..."<<endl;

                    }
                   else if(ax == 1)
                    {
                        ax = 2;


                        draw(20,300,sizex*5,sizey*5);

                    }










            }



        cout<<"INPUT 'c' AND ENTER TO CONTINUE. INPUT 'q' TO EXIT"<<endl;
        sw:

        cin>>c;


        switch(c)
        {
            case 'c':
                system("cls");
            break;

            case 'q':
                return 0;
            break;

            default:
                 system("cls");
                cout<<"INPUT 'c' AND ENTER TO RESTART. INPUT 'q' TO EXIT"<<endl;

                goto sw;
            break;

        }






    }
    }
    while(c != 'q');



    return 0;

 }




