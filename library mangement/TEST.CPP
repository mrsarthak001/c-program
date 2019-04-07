#include<iostream>
using namespace std;


int main()
{		

			cout<<"\n\n\n\t\t\t\t\t*****ADVANCE DATA STRUCTURE PROJECT-1*****\n";	

			int i, opt1, opt2, opt3, ride, ind, chi, th, ita, opt4, opt5; int price=0;


			next:
			cout<<"\n\n\t\t\t\t\t\t----RIDE SELECTION----\n";
			cout<<"1.Adult\n2. Kids \n3. Family \n";
		

			for(i=0;i<15;++i)
			{	
				//next:
				cout<<"\n\n\t\t\tENTER YOUR CHOICE:";
				cin>>ride;
	
				//to restrict user's input
				try
				{ 
		      			if (ride != 1 && ride != 2 && ride != 3 && ride != 4) 
		      			{ 
		        			throw ride;  
		      			} 
		   		} 
		   		catch (int ride) 
				{ 
		      			cout << "Wrong choice opted\n"; 
					goto next; 
		   		}
		
			//inside specific ride  
			switch(ride)
			{
				case 1:
					cout<<"\n<<<<<<<<<<<<<<<<<<<<Ride and Slides>>>>>>>>>>>>>>>>>>>>\n";
					
			//next:
			cout<< "only for Adult\n RIDE***\n\t1. Aqua Dive\t\t   \n\t2. Dragon Jet\t\t \n\t3. Dragon Jet\t\t \n\t4. Bull fight \t\t  \n\t5. Swing it\t\t  \n\t6. Gaming Adventure Zone\t\t\n\t7. Cricket zone\t\t   \n\t8. Parachute Tower\t\t  \n\t9. Swing Chair\t\t  \n SLIDES***\n\t10.Wildwood Jungle Zone\t\t    \n\t11. Gorilla Slide\t\t  \n\t12. Elephant Slide\t\t  \n\t13. Dragon Slide\t\t   \n\t14. Family Pirates\t\t  \n\t15. Pirate Pool\t\t   \nENTER YOUR CHOICE:";
				for(i=0;i<15;++i)
				{
					cin>>ind;

					try
					{ 
		      				if (ind != 1 && ind != 2 && ind != 3 && ind != 4 && ind != 5 && ind != 6 && ind != 7 && 	ind != 8 && ind != 9 && ind != 10 && ind != 11 && ind != 12 && ind != 13 && ind != 14 && ind != 15) 
		   	   			{ 
		   		     			throw ind;  
		   	   			} 
		   			} 
		   			catch (int ind) 
					{ 
		   	   			cout << "Wrong choice opted\n"; 
						//goto next; 
		   			}

					switch (ind)
					{
				
					case 1:
						price = price + 50;break;
					case 2:
						price = price + 80;break;
					case 3:
						price = price + 70;break;
					case 4:
						price = price + 50;break;
					case 5:
						price = price + 40;break;
					case 6:
						price = price + 80;break;
					case 7:
						price = price + 50;break;
					case 8:
						price = price + 70;break;
					case 9:
						price = price + 80;break;
					case 10:
						price = price + 20;break;
					case 11:
						price = price + 30;break;
					case 12:
						price = price + 50;break;
					case 13:
						price = price + 60;break;
					case 14:
						price = price + 40;break;
					case 15:
						price = price + 30;break;
					}
					cout<<"\n\nPrice is-"<<price<<endl;
					
	
					if(opt2 == 1)
					{
						continue;
						cout<<"Enter Your Choice";
					}
				
					else 
						break;

				}	
					break;





