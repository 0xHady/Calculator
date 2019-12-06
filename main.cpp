#include <iostream>
#include <cmath>
using namespace std;

/*string hexToBin (string hexa){

    long int i = 0 ;
    string s = "";
     while (hexa[i])
        {
      switch (hexa[i]){
      case '0':
         cout << "0000";
         break;
      case '1':
         cout << "0001";
         break;
      case '2':
         cout << "0010";
         break;
      case '3':
         cout << "0011";
         break;
      case '4':
         cout << "0100";
         break;
      case '5':
         cout << "0101";
         break;
      case '6':
         cout << "0110";
         break;
      case '7':
         cout << "0111";
         break;
      case '8':
         cout << "1000";
         break;
      case '9':
         cout << "1001";
         break;
      case 'A':
      case 'a':
         cout << "1010";
         break;
      case 'B':
      case 'b':
         cout << "1011";
         break;
      case 'C':
      case 'c':
         cout << "1100";
         break;
      case 'D':
      case 'd':
         cout << "1101";
         break;
      case 'E':
      case 'e':
         cout << "1110";
         break;
      case 'F':
      case 'f':
         cout << "1111";
         break;
      default:
         cout <<hexa[i];
      }
   i++;
   }
   return s;
}
*/
long long octalToBin(unsigned long long n){

    int decNum = 0 , i = 0 ;
    long long binNum = 0;

    while (n != 0)
    {
        decNum += (n % 10) * pow(8,i);
        i++;
        n /= 10 ;
    }
    i = 1 ;
    while (decNum != 0)
    {
        binNum += (decNum % 2) * i ;
        decNum /= 2 ;
        i *= 10 ;
    }
    return binNum ;
}

int octalToDec(unsigned long long n){

    int decNum = 0 , i = 0 , remainder ;
    while (n !=0)
    {
        remainder  = n % 10 ;
        n /= 10;
        decNum  += remainder * pow(8 , i);
        i++;
    }
    return decNum ;
}

int binToOctal(unsigned long long n){

    int octalNum = 0 , decNum = 0 , i = 0 ;

    while(n!=0)
    {
        decNum += (n%10)*pow(2,i);
        i++;
        n /=10;
    }
    i = 1 ;
    while (decNum !=0)
    {
        octalNum += (decNum % 8) * i;
        decNum /= 8 ;
        i *= 10 ;
    }
    return octalNum ;
}

int binToDec(unsigned long long n){

    int decNum = 0 , i =0 , remainder ;
    while(n!=0)
    {
        remainder = n % 10 ;
        n/= 10 ;
        decNum += remainder*pow(2,i) ;
        i++;
    }
    return decNum ;
}

int decToOctal(unsigned long long n){

    int rem, i = 1, octalNumber = 0;
    while (n != 0)
    {
        rem = n % 8;
        n /= 8;
        octalNumber += rem * i;
        i *= 10;
    }
    return octalNumber;
}

string decToBin(unsigned long long n){


	int binaryNum[32];
	int i = 0;
	string s = "";

	while (n > 0) {
		binaryNum[i] = n % 2;
		n = n / 2;
		i++; }

	for (int j = i -1; j >= 0; j--)
		{cout << binaryNum[j];}
		return s;


}

string decToHex(unsigned long long n){

    int r;
    string hexdec_num="";
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

        while(n>0)
        {
            r = n % 16;
            hexdec_num = hex[r] + hexdec_num;
            n = n/16;
        }
        return hexdec_num;
}

int main(){

    int q ;
    cout<<"1) Do basic operations "<<endl;
    cout<<"2) convert between numeric systems "<<endl;
    cin>>q;
    switch(q){

        case 1 :
        {
        bool s = 1 ;
        while(s !=0){
        system("color 0d");
        system("CLS");

        cout<<"choose the operation \n" ;
        cout<<"1) subtraction      2) addition         "<<endl;
        cout<<"3) devision         4) multiplication   "<<endl;
        int z ;
        cin>> z ;
        system("CLS");
        double x , y ;
        cout<<"Enter the two numbers \n";
        cin>>x>>y ;
        system("CLS");

            switch(z){

            case 1: cout<<"\n\n\n\n\n\n\t\t\t\t\t\t"<<x<<" - "<<y<<" = "<<x-y<<endl; break;
            case 2: cout<<"\n\n\n\n\n\n\t\t\t\t\t\t"<<x<<" + "<<y<<" = "<<x+y<<endl; break;
            case 3: cout<<"\n\n\n\n\n\n\t\t\t\t\t\t"<<x<<" / "<<y<<" = "<<(double)x/y<<endl; break;
            case 4: cout<<"\n\n\n\n\n\n\t\t\t\t\t\t"<<x<<" * "<<y<<" = "<<x*y<<endl; break;

    }

    cout<<"\n\n\n\n\n\n\n\n0) Exit \n1) Proceed \n\n ";
    cin>>s;
    }


        }
        break;

    case 2:
        bool s = 1 ;
        while(s != 0){
            system("CLS");
            system("color 0a");

        cout<<"  1)Convert from decimal        "<<endl;
        cout<<"  2)Convert from binary        "<<endl;
        cout<<"  3)Convert from hexadecimal        "<<endl;
        cout<<"  4)Convert from octal        "<<endl;
        cin>>q;
        system("CLS");
        unsigned long long x ;
        cout<<"\n\n\n\t\t\t\t\t\tEnter the number\n\t\t\t\t\t\t "<<endl;
        cin>>x;
        system("CLS");
        switch(q){
     case 1:
          cout<<"\n\n\n\t\t\t\t\t\tDEC  :  "<<x<<endl;
          cout<<"\n\t\t\t\t\t\tBIN  :  "<<decToBin(x)<<endl;
          cout<<"\n\t\t\t\t\t\tHEXA :  "<<decToHex(x)<<endl;
          cout<<"\n\t\t\t\t\t\tOCT :  "<<decToOctal(x)<<endl;
      break;
     case 2:
          cout<<"\n\t\t\t\t\t\tBIN  :  "<<x<<endl;
          cout<<"\n\t\t\t\t\t\tDEC  :  "<<binToDec(x)<<endl;
          cout<<"\n\t\t\t\t\t\tHEXA :  "<<decToHex(binToDec(x))<<endl;
          cout<<"\n\t\t\t\t\t\tOCT :  "<<binToOctal(x)<<endl;
        break;
     case 3:
         /*string hex = "" ;
         cin>>hex;
          cout<<"\n\t\t\t\t\t\tHEXA :  "<<x<<endl;
          cout<<"\n\t\t\t\t\t\tOCT :  "<<endl;
          cout<<"\n\t\t\t\t\t\tBIN  :  "<<hexToBin(hex)<<endl;
          cout<<"\n\t\t\t\t\t\tDEC  :  "<<endl; */
          cout<<"Test ......... "<<endl;


        break;
     case 4:
          cout<<"\n\t\t\t\t\t\tOCT :  "<<x<<endl;
          cout<<"\n\t\t\t\t\t\tBIN  :  "<<octalToBin(x)<<endl;
          cout<<"\n\t\t\t\t\t\tDEC  :  "<<octalToDec(x)<<endl;
          cout<<"\n\t\t\t\t\t\tHEXA :  "<<decToHex(octalToDec(x))<<endl;

     break;
        }

    cout<<"\n\n\n\n\n\n\n\n0) Exit \n1) Proceed \n\n";
    cin>>s;
    }
            break ;
    }

}
