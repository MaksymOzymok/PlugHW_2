
#include<iostream>
#include<ctime>
int main()
{
int l = 1;
int i;
bool game = true;
    while(game)
     {
	std::cout<<"Would you like to play?"<<std::endl;
	std::cout<<"q"<<" - "<<"exit"<<std::endl;
	std::cout<<"p"<<" - "<<"start the game"<<std::endl;
	std::cout<<"l"<<" - "<<"LEVEL menu"<<std::endl;
         std::string v;
	 std::cin>>v;
	if(v == "p")
	    {
 	     std::cout<<"You start the game:"<<std::endl;
		std::cout<<"LEVEL "<<l<<std::endl;
		srand(time(NULL));   
		   int CompChoice =  rand() % (l*10);
			std::cout<<"You have 10 attempts.Let's gooo!!!"<<std::endl;
			std::cout<<"Please, Enter the number..."<<std::endl;
			int number;
			bool rezult = false;
			while((rezult == false)&&(i<10))
			{
				std::cin>>number;
				if(number>CompChoice){ std::cout<<"Greater!"<<std::endl;}
				if(number<CompChoice){std::cout<<"Less!"<<std::endl;}
				if(number == CompChoice)
				{
				   std::cout<<"You wiiiin!"<<std::endl;
				   rezult = true;
				}
				i++;
			   
			}
			if(rezult == false){std::cout<<"You loooosee!"<<std::endl;}
				rezult = false;
				i = 1;

	     }
	 if(v == "q"){std::cout<<"Game finished"; game = false;}  
	if (v =="l"){ std::cout<<"Please, Enter level from 1 to 10"<<std::endl;
		std::cin>>l;
        std::cout<<"You start the game:"<<std::endl;
	std::cout<<"LEVEL "<<l<<std::endl;
		srand(time(NULL));   
		   int CompChoice =  rand() % (l*10);
			std::cout<<"You have 10 attempts.Let's gooo!!!"<<std::endl;
			std::cout<<"Please, Enter the number..."<<std::endl;
			int number;
			bool rezult = false;
			while((rezult == false)&&(i<10))
			{
				std::cin>>number;
				if(number>CompChoice){ std::cout<<"Greater!"<<std::endl;}
				if(number<CompChoice){std::cout<<"Less!"<<std::endl;}
				if(number == CompChoice)
				{
				   std::cout<<"You wiiiin!"<<std::endl;
				   rezult = true;
				}
				i++;
			   
			}
			if(rezult == false){std::cout<<"You loooosee!"<<std::endl;}
				rezult = false;
				i = 1;
				l = 1;}
	
    }


}
