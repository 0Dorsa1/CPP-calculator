#include<iostream>
#include<math.h>
#include<conio.h>
#include<string>
#include<unistd.h>
using namespace std;
#include<windows.h>
void gotoxy(int, int);
void clrscr();
int factorial(int);
int main(){
	clrscr();
	string op;
	char ch;
	int l,m1,m2,b,ans;
	float n1,n2;
	double a;
	const int password=564;
	system("color F5");
	gotoxy(38,14);
	cout<<"Please enter 1 to start or 0 to exit: ";
    cin>>l;
    clrscr();
    while(l==1 && l!=0){
    	gotoxy(36,14);
    	cout<<"Please enter the password to enter the application: ";
    	gotoxy(53,15);
    	cout<<"HINT: Try 564 !";
    	gotoxy(88,14);
        cin>>ans;
        clrscr();
        if(ans==password)
        {
        	clrscr();
    	    gotoxy(44,12);
	        cout<<"Welcome to my calculator!";
	        sleep(3);
	        clrscr();
	        gotoxy(40,12);
	        cout<<"Created by: Dorsa Macky Al-e-agha";
	        sleep(3);
	        clrscr();
	        break;
        }
        else{
        	gotoxy(26,12);
            cout<<"Sorry! The password you have entered is wrong! Please try again.";
	        sleep(3);
            clrscr();
        }
	}
	while(l=1 && l!=0){
		gotoxy(35,8);
	    cout<<"These are the available operators to use: ";
	    gotoxy(42,11);
        cout<<"-----------------------";
    	gotoxy(44,12);
        cout<<"+";
        gotoxy(48,12);
        cout<<"-";
        gotoxy(52,12);
        cout<<"x";
        gotoxy(56,12);
        cout<<"/";
        gotoxy(60,12);
        cout<<"sin";
        gotoxy(43,14);
        cout<<"cos";
        gotoxy(47,14);
        cout<<"tan";
        gotoxy(51,14);
        cout<<"cot";
        gotoxy(56,14);
        cout<<"ln";
        gotoxy(60,14);
        cout<<"log";
        gotoxy(42,15);
        cout<<"----------------------";
        gotoxy(43,16);
        cout<<"arcsin";
        gotoxy(55,16);
        cout<<"arccos";
        gotoxy(43,18);
        cout<<"arctan";
        gotoxy(55,18);
        cout<<"arccot";
        gotoxy(42,19);
		cout<<"----------------------";
		gotoxy(43,20);
		cout<<"sinh";
		gotoxy(57,20);
		cout<<"cosh";
		gotoxy(43,22);
		cout<<"tanh";
		gotoxy(57,22);
		cout<<"coth";
        gotoxy(42,23);
		cout<<"----------------------";
        gotoxy(43,24);
        cout<<"reminder";
        gotoxy(55,24);
        cout<<"quotient";
        gotoxy(42,25);
		cout<<"----------------------";
        gotoxy(44,26);
        cout<<"floor";
        gotoxy(55,26);
        cout<<"ceiling";
        gotoxy(42,27);
		cout<<"----------------------";
		gotoxy(43,28);
		cout<<"absolute";
		gotoxy(53,28);
		cout<<"exponential";
		gotoxy(42,29);
		cout<<"----------------------";
		gotoxy(43,30);
		cout<<"radical";
		gotoxy(53,30);
		cout<<"%";
		gotoxy(57,30);
		cout<<"^";
		gotoxy(61,30);
		cout<<"!";
		gotoxy(42,32);
        cout<<"-----------------------";
        gotoxy(42,12);
        cout<<"|";
        gotoxy(42,13);
        cout<<"|";
        gotoxy(42,14);
        cout<<"|";
        gotoxy(42,15);
        cout<<"|";
        gotoxy(42,16);
        cout<<"|";
        gotoxy(42,17);
        cout<<"|";
        gotoxy(42,18);
        cout<<"|";
        gotoxy(42,19);
        cout<<"|";
        gotoxy(42,20);
        cout<<"|";
        gotoxy(42,21);
        cout<<"|";
        gotoxy(42,22);
        cout<<"|";
        gotoxy(42,23);
        cout<<"|";
        gotoxy(42,24);
        cout<<"|";
        gotoxy(42,25);
        cout<<"|";
        gotoxy(42,26);
        cout<<"|";
        gotoxy(42,27);
        cout<<"|";
        gotoxy(42,28);
        cout<<"|";
        gotoxy(42,29);
        cout<<"|";
        gotoxy(42,30);
        cout<<"|";
        gotoxy(42,31);
        cout<<"|";
        gotoxy(64,12);
        cout<<"|";
        gotoxy(64,13);
        cout<<"|";
        gotoxy(64,14);
        cout<<"|";
        gotoxy(64,15);
        cout<<"|";
        gotoxy(64,16);
        cout<<"|";
        gotoxy(64,17);
        cout<<"|";
        gotoxy(64,18);
        cout<<"|";
        gotoxy(64,19);
        cout<<"|";
        gotoxy(64,20);
        cout<<"|";
        gotoxy(64,21);
        cout<<"|";
        gotoxy(64,22);
        cout<<"|";
        gotoxy(64,23);
        cout<<"|";
        gotoxy(64,24);
        cout<<"|";
        gotoxy(64,25);
        cout<<"|";
        gotoxy(64,26);
        cout<<"|";
        gotoxy(64,27);
        cout<<"|";
        gotoxy(64,28);
        cout<<"|";
        gotoxy(64,29);
        cout<<"|";
        gotoxy(64,30);
        cout<<"|";
        gotoxy(64,31);
        cout<<"|";
        gotoxy(38,34);
        cout<<"Please enter your chosen operator: ";
        cin>>op;
        if(op!="sin" && op!="cos" && op!="tan" && op!="cot" && op!="+" && op!="-" && op!="x" && op!="/" && op!="ln" && op!="log" && op!="reminder" && op!="quotient" && op!="floor" && op!="absolute" && op!="arcsin" && op!="arccos" && op!="arctan" && op!="arccot" && op!="sinh" && op!="cosh" && op!="tanh" && op!="coth" && op!="ceiling" && op!="exponential" && op!="radical" && op!="!" && op!="^" && op!="%"){
	        gotoxy(28,36);
			cout<<"The operator you entered is not supported by this calculator.";
			gotoxy(38,38);
     	    cout<<"Please enter 1 to continue or 0 to exit: ";
            cin>>l;
            clrscr();	
		}
        if(op=="sin" || op=="cos" || op=="tan" || op=="cot" || op=="arcsin" || op=="arccos" || op=="arctan" || op=="arccot" || op=="sinh" || op=="cosh" || op=="tanh" || op=="coth"){
    	    gotoxy(38,36);
            cout<<"Please enter the argument (in radians): ";
            cin>>a;
            gotoxy(44,36);
            if(op=="sin"){
    		    gotoxy(50,38);
		        cout<<op<<"("<<a<<")="<<sin(a);
		    }
			else if(op=="cos"){
			    gotoxy(50,38);
		        cout<<op<<"("<<a<<")="<<cos(a);
		    }
		    else if(op=="tan"){
		        gotoxy(50,38);
		        cout<<op<<"("<<a<<")="<<tan(a);
	        }
		    else if(op=="cot"){
			    gotoxy(50,38);
		        cout<<op<<"("<<a<<")="<<cos(a)/sin(a);
		    }
		    else if(op=="arcsin"){
			    gotoxy(50,38);
		        cout<<op<<"("<<a<<")="<<asin(a);
		    }
		    else if(op=="arccos"){
			    gotoxy(50,38);
		        cout<<op<<"("<<a<<")="<<acos(a);
		    }
		    else if(op=="arctan"){
			    gotoxy(50,38);
		        cout<<op<<"("<<a<<")="<<atan(a);
		    }
		    else if(op=="arccot"){
			    gotoxy(50,38);
		        cout<<op<<"("<<a<<")="<<acos(a)/asin(a);
		    }
		    else if(op=="sinh"){
			    gotoxy(50,38);
		        cout<<op<<"("<<a<<")="<<sinh(a);
		    }
		    else if(op=="cosh"){
			    gotoxy(50,38);
		        cout<<op<<"("<<a<<")="<<cosh(a);
		    }
		    else if(op=="tanh"){
			    gotoxy(50,38);
		        cout<<op<<"("<<a<<")="<<tanh(a);
		    }
		    else if(op=="coth"){
			    gotoxy(50,38);
		        cout<<op<<"("<<a<<")="<<cosh(a)/sinh(a);
		    }
		gotoxy(38,40);
     	cout<<"Please enter 1 to continue or 0 to exit: ";
        cin>>l;
        clrscr();
        }
        else if(op=="ln" || op=="log" || op=="floor" || op=="absolute" || op=="exponential" || op=="ceiling" || op=="radical"){
        	gotoxy(38,36);
        	cout<<"Please enter the number/argument: ";
    	    cin>>a;
		    gotoxy(44,36);
		    if(op=="ln"){
		    	gotoxy(50,38);
		    	cout<<op<<a<<"="<<log(a);
	        }
		    else if(op=="log"){
			    gotoxy(50,38);
			    cout<<op<<"10("<<a<<")="<<log10(a);
				}
		    else if(op=="floor"){
				gotoxy(50,38);
				cout<<op<<"("<<a<<")="<<floor(a);
			}
		    else if(op=="absolute"){
			    gotoxy(50,38);
			    cout<<"|"<<a<<"|="<<abs(a);
			}
			else if(op=="exponential"){
			    gotoxy(50,38);
			    cout<<op<<"("<<a<<")="<<exp(a);
			}
			else if(op=="ceiling"){
			    gotoxy(50,38);
			    cout<<op<<"("<<a<<")="<<ceil(a);
			}
			else if(op=="radical"){
			    gotoxy(50,38);
			    cout<<op<<"("<<a<<")="<<sqrt(a);
			}
		gotoxy(38,40);
     	cout<<"Please enter 1 to continue or 0 to exit: ";
        cin>>l;
        clrscr();	
	    } 
    	else if(op=="+" || op=="-" || op=="x" || op=="/" || op=="%" || op=="^"){
            gotoxy(38,36);
            cout<<"Please enter the first number: ";
            cin>>n1;
            gotoxy(38,38);
            cout<<"Please enter the second number: ";
            cin>>n2;
            if(op=="+"){
    	        gotoxy(50,40);
		        cout<<n1<<op<<n2<<"="<<n1+n2;
	        }
		    else if(op=="-"){
		    	gotoxy(50,40);
		        cout<<n1<<op<<n2<<"="<<n1-n2;
		    }
		    else if(op=="x"){
		    	gotoxy(50,40);
		        cout<<n1<<op<<n2<<"="<<n1*n2;
		    }
		    else if(op=="/"){
		     	gotoxy(50,40);
		        cout<<n1<<op<<n2<<"="<<n1/n2;
		    }
		    else if(op=="%"){
		    	gotoxy(50,40);
		        cout<<n1<<op<<n2<<"="<<(n1/100)*n2;
		    }
		    else if(op=="^"){
		    	gotoxy(50,40);
		        cout<<n1<<op<<n2<<"="<<pow(n1,n2);
		    }
     	    gotoxy(38,42);
     	    cout<<"Please enter 1 to continue or 0 to exit: ";
            cin>>l;
            clrscr();
        }
    	else if(op=="reminder" || op=="quotient"){
    		gotoxy(38,38);
	    	cout<<"Please enter the dividend: ";
		    cin>>m1;
		    gotoxy(38,40);
		    cout<<"Please enter the divisor: ";
		    cin>>m2;
		    if(op=="reminder"){
				gotoxy(38,42);
			    cout<<"The reminder of the division "<<m1<<"/"<<m2<<" is "<<m1%m2<<".";
			}
		    else if(op=="quotient"){
			    gotoxy(38,42);
			    cout<<"The integer part of quotient is "<<m1/m2<<".";
			}
		gotoxy(38,44);
     	cout<<"Please enter 1 to continue or 0 to exit: ";
        cin>>l;
        clrscr();	
	    }
	    else if(op=="!"){
	    	gotoxy(38,36);
	    	cout<<"Please enter n for n!: ";
	    	cin>>b;
	    	factorial(b);
	    	gotoxy(50,38);
	    	cout<<b<<op<<"="<<factorial(b);
	    	gotoxy(38,40);
     	    cout<<"Please enter 1 to continue or 0 to exit: ";
            cin>>l;
            clrscr();	
		}
	}
	gotoxy(44,10);
	cout<<"Thanks for visiting! Good bye!";
	sleep(3);
	return 0;
}
void gotoxy(int x, int y)
{
  HANDLE hConsoleOutput;
  COORD dwCursorPosition;
  cout.flush();
  dwCursorPosition.X = x;
  dwCursorPosition.Y = y;
  hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}
void clrscr()
{
  system("cls");
}
int factorial(int b){
	if(b==0){
		return 1;
	}
	else{
		return (b*factorial(b-1));
	}
}
