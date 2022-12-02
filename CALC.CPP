#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int ch,a,b;
	char cont;
	source :
	clrscr();

	// Print the set of Arithmetic operation
	cout<<"==========================================\n";
	cout<<"1. Addition\n";
	cout<<"2. Subtraction\n";
	cout<<"3. Multiplication\n";
	cout<<"4. Division\n";
	cout<<"5. Modulo\n";
	cout<<"==========================================\n";

	// give user choice
	cout<<"Enter your choice :";
	cin>>ch;
	cout<<"===========================================\n";
	cout<<"Enter Two values :";
	cin>>a>>b;
	cout<<"===========================================\n";

	switch(ch)
	{
	case 1:cout<<"The addition is :"<<a+b;
		break;
	case 2:cout<<"The subtraction is :"<<a-b;
		break;
	case 3:cout<<"The multiplication is :"<<a*b;
		break;
	case 4:cout<<"The division is :"<<a/b;
		break;
	case 5:cout<<"The modulo is :"<<a%b;
		break;
	default:cout<<"Wrong choice";
		break;
	}
	cout<<"\nif u want to continue then press y otherwise press any key for quit\n";
	cin>>cont;
	if(cont == 'y' || cont=='Y')
	{
	goto source;
	}
	else
	{
	cout<<"******************";
	cout<<"\n* Thanks........ *";
	cout<<"\n******************";
	}

	getch();
}