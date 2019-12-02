#include <iostream>
using namespace std;

string decToOctal(unsigned long long n){

    int octNum[100];
    int i =0 ;
    string s = "";
    while (n > 0){

        octNum[i] = n % 8 ;
        n/=8;
        i++;
    }
        for(int j = i -1 ; j >=0 ; j--)
        { cout<<octNum[i];}

        return s ;
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

string decToHex(unsigned long long dec_num){

    int r;
    string hexdec_num="";
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

        while(dec_num>0)
        {
            r = dec_num % 16;
            hexdec_num = hex[r] + hexdec_num;
            dec_num = dec_num/16;
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
     case 2: cout<<"This is case 2 "<<endl; break;
     case 3:cout<<"This is case 3 "<<endl; break;
     case 4:cout<<"This is case 4 "<<endl; break;
        }

    cout<<"\n\n\n\n\n\n\n\n0) Exit \n1) Proceed \n\n";
    cin>>s;
    }
            break ;
    }

}
