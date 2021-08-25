#include <iostream>
#include <cmath>
using namespace std;
int main(){
    start :
    system("color 0a");
    cout<<"\n\n\n\n\n\t\t\t\t*******************************************************"<<endl;
    cout<<"\t\t\t\t*******************************************************"<<endl;
    cout<<"\t\t\t\t*****                                             *****"<<endl;
    cout<<"\t\t\t\t*****      1) Do Basic Operations                 *****"<<endl;
    cout<<"\t\t\t\t*****                                             *****"<<endl;
    cout<<"\t\t\t\t*****      2) Convert Between Numeric Systems     *****"<<endl;
    cout<<"\t\t\t\t*****                                             *****"<<endl;
    cout<<"\t\t\t\t*******************************************************"<<endl;
    cout<<"\t\t\t\t*******************************************************"<<endl;
    cout<<"\t\t\t\t\t\t\t   ";

    // q is the user's choice
    int q ;
    cin>>q;

    switch(q){

/*******************************************************************
  Basic operations
********************************************************************/

        case 1 :
        {
        bool s = 1 ;
        while(s !=0){
        // change color
        system("color 0a");
        // clear the console
        system("cls");

        // label

        choice1 :
        cout<<"\n\n\n\n\n\t\t\t\t********************************************************"<<endl;
        cout<<          "\t\t\t\t********************************************************"<<endl;
        cout<<"\t\t\t\t*****                                              *****"<<endl;
        cout<<"\t\t\t\t*****    choose the operation                      *****"<<endl;
        cout<<"\t\t\t\t*****    1) Subtraction      2) Addition           *****"<<endl;
        cout<<"\t\t\t\t*****    3) Devision         4) Multiplication     *****"<<endl;
        cout<<"\t\t\t\t*****    5) Factorial        6) Power              *****"<<endl;
        cout<<"\t\t\t\t*****                                              *****"<<endl;
        cout<<"\t\t\t\t*****    0) Go Back                                *****"<<endl;
        cout<<"\t\t\t\t*****                                              *****"<<endl;
        cout<<"\t\t\t\t********************************************************"<<endl;
        cout<<"\t\t\t\t********************************************************"<<endl;
        cout<<"\t\t\t\t\t\t\t   ";

        int z ;
        cin>> z ;

        system("cls");

        if(cin)
        {
          if(z == 0)
          {
              goto start;
          }

          else if (z == 5)
          {


        unsigned int n;
        unsigned long long factorial = 1;
        cout << "\n\n\n\n\n\t\t\t\tEnter a positive integer: ";
        cin >> n;
            if(!cin)
            {
                cin.clear();
                cin.ignore();
                system("cls");
cout<<"\n\n\n\n\n\t\t\t\tInvalid Input";            }
            if(n <0 || n >65)
            {
                system("cls");
                cout<<"\n\n\n\n\n\t\t\t\tInvalid Input";
            }
            else {
        for(int i = 1; i <=n; ++i)
        {
        factorial *= i;
        }
        system("cls");
        cout << "\n\n\n\n\n\t\t\t\t\t\t" << n << "! = " << factorial;
            }
          }

          else if (z == 6)
          {
              if(!cin)
            {
                cin.clear();
                cin.ignore();
                system("cls");
                cout<<"Invalid Input\n\n";

            }
            else {
              double x, y , pow =1 ;
              cout<<"\n\n\n\n\n\n\t\t\t\t\tEnter the base: ";
              cin>>x;
              system("cls");
              cout<<"\n\n\n\n\n\n\t\t\t\t\tEnter the exponent: ";
              cin>>y;
              system("cls");
              for( int i = 1 ; i<=y ; i++)
              {
                  pow*=x;
              }
              cout<<"\n\n\n\n\n\n\t\t\t\t\t"<<x<<"^("<<y<<")"<<" = "<<pow;
              }

          }

          else
                {
                    double x , y ;
                    system("cls");
                    cout<<"\n\n\n\n\n\t\t\t\t\tEnter the First number: ";
                    cin>>x;
                    system("cls");
                    cout<<"\n\n\n\n\n\t\t\t\t\tEnter the second number: ";
                    cin>>y;
                    system("cls");

                    switch(z){

            case 1: cout<<"\n\n\n\n\n\n\t\t\t\t\t\t"<<x<<" - "<<y<<" = "<<x-y<<endl;              break;

            case 2: cout<<"\n\n\n\n\n\n\t\t\t\t\t\t"<<x<<" + "<<y<<" = "<<x+y<<endl;              break;

            case 3:
                    if(y != 0)
                    cout<<"\n\n\n\n\n\n\t\t\t\t\t\t"<<x<<" / "<<y<<" = "<<(double)x/y<<endl;
                    else
                    cout<<"\n\n\n\n\n\n\t\t\t\t\t\tMath Error \n ";                               break;


            case 4: cout<<"\n\n\n\n\n\n\t\t\t\t\t\t"<<x<<" * "<<y<<" = "<<x*y<<endl;              break;


            default : cout<<"You've choosed a Non-existing operation !!";

                    }
                }
        }
            else
                {
                cin.clear();
                cin.ignore();
                goto choice1 ;
                }


    cout<<"\n\n\n\n\n\n****************\n";
                cout<<"****************\n";
                cout<<"**            **\n";
                cout<<"** 0) Exit    **\n";
                cout<<"**            **\n";
                cout<<"** 1) Proceed **\n";
                cout<<"**            **\n";
                cout<<"****************\n";
                cout<<"****************\n";
    cin>>s;
    }


        }
        break;








  /*********************************************************************************************************************
  Numeric systems conversions
  *********************************************************************************************************************/

    case 2:
        {
        bool s = 1 ;
        while(s != 0){
            system("cls");
            system("color 0a");
        numeric :
        cout<<         "\n\n\n\n\n\t\t\t\t*******************************************************"<<endl;
        cout<<                   "\t\t\t\t*******************************************************"<<endl;
        cout<<                   "\t\t\t\t*****                                             *****"<<endl;
        cout<<                   "\t\t\t\t*****          1)Convert from decimal             *****"<<endl;
        cout<<                   "\t\t\t\t*****          2)Convert from binary              *****"<<endl;
        cout<<                   "\t\t\t\t*****          3)Convert from hexadecimal         *****"<<endl;
        cout<<                   "\t\t\t\t*****          4)Convert from octal               *****"<<endl;
        cout<<                   "\t\t\t\t*****                                             *****"<<endl;
        cout<<                   "\t\t\t\t*****          0)Go Back                          *****"<<endl;
        cout<<                   "\t\t\t\t*****                                             *****"<<endl;
        cout<<                   "\t\t\t\t*******************************************************"<<endl;
        cout<<                   "\t\t\t\t*******************************************************"<<endl;
        cout<<"\t\t\t\t\t\t\t   ";
        cin>>q;
        system("cls");

        inpq :

        if(!cin)
        {
            cin.clear();
            cin.ignore();
            system("cls");
            goto numeric ;
        }
        if(q == 0)
        {
            goto start ;
        }
        else if (q >4)
        {
            goto numeric ;
        }
        else if(q==3)
        {
           {
                int f ;
                 cout<<"\n\n\n\n\n\t\t\t\t************************************************"<<endl;
        cout<<          "\t\t\t\t************************************************"<<endl;
        cout<<          "\t\t\t\t*****                                      *****"<<endl;
        cout<<"\t\t\t\t*****    Convert hexadecimal to ...        *****"<<endl;
        cout<<"\t\t\t\t*****    1) binary                         *****"<<endl;
        cout<<"\t\t\t\t*****    2) decimal                        *****"<<endl;
        cout<<"\t\t\t\t*****    3) octal                          *****"<<endl;
        cout<<"\t\t\t\t*****                                      *****"<<endl;
        cout<<"\t\t\t\t************************************************"<<endl;
        cout<<"\t\t\t\t************************************************"<<endl;
        cout<<"\t\t\t\t\t\t\t   ";
        cin>>f;
        inpf :
        if(!cin)
        {
            cin.clear();
            cin.ignore();
            system("cls");
            cout<<"Invalid Input "<<endl;
            goto inpq;
        }

            switch(f) {

            case 1 : {

                  char x[8]  ;

            for(int i= 0 ; i<=7 ; i++)
            {
            system("cls");
            cout<<"Note: this program can handel only -at maximum- 8 digits \n-------------------------------------------------------\n" ;
            cout<<"enter chrachter number "<<i+1<<" From the right \n" ;
            cin>>x[i];

            }
            system("cls");

            cout<<"\n\n\n\n\t\tBIN : ";

            int a = 7 ;
            //bool z = 1;
            while (x[a])
            {
                switch(x[a])
                {
         case '0':
         cout << " 0000";
         break;
      case '1':
         cout << " 0001";
         break;
      case '2':
         cout << " 0010";
         break;
      case '3':
         cout << " 0011";
         break;
      case '4':
         cout << " 0100";
         break;
      case '5':
         cout << " 0101";
         break;
      case '6':
         cout << " 0110";
         break;
      case '7':
         cout << " 0111";
         break;
      case '8':
         cout << " 1000";
         break;
      case '9':
         cout << " 1001";
         break;
      case 'A':
      case 'a':
         cout << " 1010";
         break;
      case 'B':
      case 'b':
         cout << " 1011";
         break;
      case 'C':
      case 'c':
         cout << " 1100";
         break;
      case 'D':
      case 'd':
         cout << " 1101";
         break;
      case 'E':
      case 'e':
         cout << " 1110";
         break;
      case 'F':
      case 'f':
         cout << " 1111";
         break;

      default :

                system("cls");
                cout<<"your invalid inputs have been ignored \n-----------------------------\nthe result of the valid inputs is : ";
                break;
                break ;

            }
    a--;
            }

                break;

                 }

      case 2:
            {        system("cls");

                unsigned long long x9 ;
            cout<<"\n\n\n\n\n\t\t\t\tEnter the hexadecimal number: ";
           cin >> hex >> x9;
        if(!cin)
        {
            cin.clear();
            cin.ignore();
            system("cls");
            cout<<"Invalid Input "<<endl;

        }
                system("cls");




          cout<<         "\n\n\n\n\n\t\t\t\t*******************************************************"<<endl;
        cout<<                   "\t\t\t\t*******************************************************"<<endl;
         cout<<                   "\t\t\t\t                                              "<<endl;
        cout<<                   "\t\t\t\t          DEC  :  "<<x9<<"                 "<<endl;
        cout<<                   "\t\t\t\t                                              "<<endl;
        cout<<                   "\t\t\t\t*******************************************************"<<endl;
        cout<<                   "\t\t\t\t*******************************************************"<<endl;


        break;
            }
      case 3:
        {        system("cls");

            unsigned long long x11;
            cout<<"\n\n\n\n\n\t\t\t\tEnter the hexadecimal number: ";
           cin >> hex >> x11;

        if(!cin)
        {
            cin.clear();
            cin.ignore();
            system("cls");
            cout<<"Invalid Input "<<endl;

        }
           int rem, i = 1, octalNumber = 0;
    while (x11 != 0)
    {
        rem = x11 % 8;
        x11 /= 8;
        octalNumber += rem * i;
        i *= 10;
    }
            system("cls");


  cout<<         "\n\n\n\n\n\t\t\t\t*******************************************************"<<endl;
        cout<<                   "\t\t\t\t*******************************************************"<<endl;
         cout<<                   "\t\t\t\t                                              "<<endl;
        cout<<                   "\t\t\t\t          Octal  :  "<<octalNumber<<"                 "<<endl;
        cout<<                   "\t\t\t\t                                              "<<endl;
        cout<<                   "\t\t\t\t*******************************************************"<<endl;
        cout<<                   "\t\t\t\t*******************************************************"<<endl;

break;
        }



        default : cout<<"Invalid Input "<<endl;
                system("cls");



            }


                }

        }
        else {

        system("cls");
        enternum :
        unsigned long long x ;


        cout<<"\n\n\n\t\t\t\t\t\tEnter the number\n\t\t\t\t\t\t "<<endl;
        cin>>x;


        if(!cin)
                    {
                        cin.clear();
                        cin.ignore();
                        system("cls");
                        goto enternum ;
                    }

                    else if(x < 0)
                    {
                        cout<<"Invalid Input "<<endl;
                        break ;
                    }

                    else {


        switch(q){

            case 1:{
                    if(!cin)
                    {
                        cin.clear();
                        cin.ignore();
                        system("cls");
                        goto enternum ;
                    }

                    else if(x < 0)
                    {
                        cout<<"Invalid Input "<<endl;
                        break ;
                    }

                    else {


          system("cls");

          cout<<"\n\n\n\t\t\t\t\t\tDEC  :  "<<x<<endl;

      {

        int binaryNum[32]; unsigned long long x4 = x ;
	int i = 0;
	while (x4 > 0) {
		binaryNum[i] = x4 % 2;
		x4 = x4 / 2;
		i++; }
    cout<<"\n\t\t\t\t\t\tBIN  :  ";
	for (int j = i -1; j >= 0; j--)
		{cout << binaryNum[j];}
		cout<<endl;

    }
{


            int r2; unsigned long long x5 = x ;
    string hexdec_num="";
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

        while(x5>0)
        {
            r2 = x5 % 16;
            hexdec_num = hex[r2] + hexdec_num;
            x5 = x5/16;
        }

    cout<<"\n\t\t\t\t\t\tHEXA :  "<<hexdec_num<<endl;
}


            {

    int rem, i = 1, octalNumber = 0; unsigned long long x6 = x ;
    while (x6 != 0)
    {
        rem = x6 % 8;
        x6 /= 8;
        octalNumber += rem * i;
        i *= 10;
    }
cout<<"\n\t\t\t\t\t\tOCT :  "<<octalNumber<<endl;
}



        break;
        }
}

            case 2:{



                if(!cin)
                    {
                        cin.clear();
                        cin.ignore();
                        system("cls");
                        goto enternum ;
                    }

                unsigned long long j = x ;
                while(j)
                {
                    if((j%10)>1 )
                    {
                        system("cls");
                        goto enternum ;
                    }

                    j /= 10 ;
                }


          system("cls");
          cout<<"\n\t\t\t\t\t\tBIN  :  "<<x<<endl;



    int decNum = 0 , i =0 , remainder ; unsigned long long x6 = x;
    while(x6!=0)
    {
        remainder = x6 % 10 ;
        x6/= 10 ;
        decNum += remainder*pow(2,i) ;
        i++;
    }
cout<<"\n\t\t\t\t\t\tDEC  :  "<<decNum<<endl;




    int r;
    string hexdec_num="";
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

        while(decNum>0)
        {
            r = decNum % 16;
            hexdec_num = hex[r] + hexdec_num;
            decNum = decNum/16;
        }
    cout<<"\n\t\t\t\t\t\tHEXA :  "<<hexdec_num<<endl;

        {

    int octalNum = 0 , decNum = 0 , i = 0 ; unsigned long long x7 = x ;

    while(x7!=0)
    {
        decNum += (x7%10)*pow(2,i);
        i++;
        x7 /=10;
    }
    i = 1 ;
    while (decNum !=0)
    {
        octalNum += (decNum % 8) * i;
        decNum /= 8 ;
        i *= 10 ;
    }
cout<<"\n\t\t\t\t\t\tOCT :  "<<octalNum<<endl;
}


        break;
            }

            case 4:{
                    if(!cin)
                    {
                        cin.clear();
                        cin.ignore();
                        system("cls");
                        goto enternum ;
                    }

                unsigned long long j = x ;
                while(j)
                {
                    if((j%10)>7 )
                    {
                        system("cls");
                        goto enternum ;
                    }

                    j /= 10 ;
                }
          system("cls");
          cout<<"\n\t\t\t\t\t\tOCT :  "<<x<<endl;

          {

    int decNum = 0 , i = 0 ; unsigned long long x1 = x;
    long long binNum = 0;

    while (x1 != 0)
    {
        decNum += (x1 % 10) * pow(8,i);
        i++;
        x1 /= 10 ;
    }
    i = 1 ;
    while (decNum != 0)
    {
        binNum += (decNum % 2) * i ;
        decNum /= 2 ;
        i *= 10 ;
    }
cout<<"\n\t\t\t\t\t\tBIN  :  "<<binNum<<endl;
}




    unsigned long long decNum2 = 0 , x2 = x; int  i = 0 , remainder ;
    while (x2 !=0)
    {
        remainder  = x2 % 10 ;
        decNum2  += remainder * pow(8,i);
        x2 /= 10;
        ++i;
    }
cout<<"\n\t\t\t\t\t\tDEC  :  "<<decNum2<<endl;





    int r;
    string hexdec_num="";
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

        while(decNum2>0)
        {
            r = decNum2 % 16;
            hexdec_num = hex[r] + hexdec_num;
            decNum2 = decNum2/16;
        }
cout<<"\n\t\t\t\t\t\tHEXA :  "<<hexdec_num<<endl;




        break;


        }
        }
                    }
        }

    cout<<"\n\n\n\n\n\n****************\n";
                cout<<"****************\n";
                cout<<"**            **\n";
                cout<<"** 0) Exit    **\n";
                cout<<"**            **\n";
                cout<<"** 1) Proceed **\n";
                cout<<"**            **\n";
                cout<<"****************\n";
                cout<<"****************\n";
                cout<<"      ";
    cin>>s;
    if(!cin)
    {
        cin.clear();
        cin.ignore();
        cout<<"Invalid Input "<<endl;
    }


    }

            break ;
        }

     default :
         cin.clear();
         cin.ignore();
         system("cls");
         goto start ;

    }

}

/*******************************************

Ahmed Elhady Ahmed Shahin

************************************************/
