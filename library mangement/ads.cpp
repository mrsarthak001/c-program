#include<iostream>
using namespace std;


int main()
{		

			cout<<"\n\n\n\t\t\t\t\t*****ADVANCE DATA STRUCTURE PROJECT-1*****\n";	

			int i, opt1, opt2, opt3, ride, adult, kids, th, family, opt4, opt5; int price=0;


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
					cout<<"\n<<<<<<<<<<<<<<<<<<<<Adult Ride and Slides>>>>>>>>>>>>>>>>>>>>\n";
					
			//next:
			cout<< "Only for Adult\n RIDE***\n\t1. Aqua Dive\t\t   \n\t2. Dragon Jet\t\t \n\t3. Dragon Jet\t\t \n\t4. Bull fight \t\t  \n\t5. Swing it\t\t  \n\t6. Gaming Adventure Zone\t\t\n\t7. Cricket zone\t\t   \n\t8. Parachute Tower\t\t  \n\t9. Swing Chair\t\t  \n SLIDES***\n\t10.Wildwood Jungle Zone\t\t    \n\t11. Gorilla Slide\t\t  \n\t12. Elephant Slide\t\t  \n\t13. Dragon Slide\t\t   \n\t14. Family Pirates\t\t  \n\t15. Pirate Pool\t\t   \nENTER YOUR CHOICE:";
				for(i=0;i<15;++i)
				{
					cin>>adult;

					try
					{ 
		      				if (adult != 1 && adult != 2 && adult != 3 && adult != 4 && adult != 5 && adult != 6 && adult != 7 && 	adult != 8 && adult != 9 && adult != 10 && adult != 11 && adult != 12 && adult != 13 && adult != 14 && adult != 15) 
		   	   			{ 
		   		     			throw adult;  
		   	   			} 
		   			} 
		   			catch (int adult) 
					{ 
		   	   			cout << "Wrong choice opted\n"; 
						//goto next; 
		   			}

					switch (adult)
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




				case 2:
					cout<<"\n<<<<<<<<<<<<<<<<<<<<Kids Ride and Slides >>>>>>>>>>>>>>>>>>>>\n";
					//next:
				cout<<"Only for Kides\n RIDE***\n\t1. Sky Train\t\t   \n\t2. Photo Points\t\t \n\t3. Mini Merry Go Round\t\t \n\t4. Boating \t\t  \n\t5. Baby Train\t\t  \n\t6. Uncle Sam's wheel\t\t\n\t7. Jump n Joy\t\t   \n\t8. Bouncing Dragon\t\t  \n\t9. Swing Chair\t\t  \n SLIDES***\n\t10.Water Play Zone Zone\t\t    \n\t11. Gorilla Slide\t\t  \n\t12. Elephant Slide\t\t  \n\t13. Wave pool\t\t   \n\t14. Multi Slide Tower\t\t  \n\t15. Pirate Pool\t\t   \nENTER YOUR CHOICE:";
				for(i=0;i<15;++i)
				{
					cin>>kids;
		
					try
					{ 
      						if (kids != 1 && kids != 2 && kids != 3 && kids != 4 && kids != 5 && kids != 6 && kids != 7 && kids != 8 && kids != 9 && kids != 10 && kids != 11 && kids != 12 && kids != 13 && kids != 14 && kids != 15) 
   	   					{ 
   				     			throw kids;  
   	   					} 
   					} 
   					catch (int kids) 
					{ 
   	   					cout << "Wrong choice opted\n"; 
						//goto next; 
   					}

					switch (kids)
					{
				
					case 1:
						price = price + 70;break;
					case 2:
						price = price + 80;break;
					case 3:
						price = price + 80;break;
					case 4:
						price = price + 90;break;
					case 5:
						price = price + 50;break;
					case 6:
						price = price + 60;break;
					case 7:
						price = price + 50;break;
					case 8:
						price = price + 80;break;
					case 9:
						price = price + 50;break;
					case 10:
						price = price + 30;break;
					case 11:
						price = price + 20;break;
					case 12:
						price = price + 50;break;
					case 13:
						price = price + 30;break;
					case 14:
						price = price + 70;break;
					case 15:
						price = price + 90;break;
					}
					cout<<"\n\nPrice is- "<<price<<endl;
					
					if(opt5 == 1)
					{
						continue;
						cout<<"Enter Your Choice";
					}

					else 
						break;
				}	
				break;
				




case 3:
					cout<<"\n<<<<<<<<<<<<<<<<<<<<Family Ride and Slides>>>>>>>>>>>>>>>>>>>>\n";
					//next:
				cout<<"Family\n RIDE***\n\t1. Family Picnic Zone\t\t   \n\t2. Striking Car\t\t \n\t3. Sky Train\t\t \n\t4. Boating \t\t  \n\t5. 5D RideI\t\t  \n\t6. 5D Movie\t\t\n\t7. Mini Twister\t\t   \n\t8. Tsunami\t\t  \n\t9. Swing Chair\t\t  \n SLIDES***\n\t10.Water Play Zone Zone\t\t    \n\t11. Water Slide\t\t  \n\t12. Fountain Dance\t\t  \n\t13. Wave pool\t\t   \n\t14. Multi Slide Tower\t\t  \n\t15. Pirate Pool\t\t   \nENTER YOUR CHOICE:";
				for(i=0;i<15;++i)
				{
					cin>>family;
	
					try
					{ 
      						if (family != 1 && family != 2 && family != 3 && family != 4 && family != 5 && family != 6 && family != 7 && family != 8 && family != 9 && family != 10 && family != 11 && family != 12 && family != 13 && family != 14 && family != 15) 
   	   					{ 
   				     			throw family;  
   	   					} 
   					} 
   					catch (int family) 
					{ 
   	   					cout << "Wrong choice opted\n"; 
						//goto next; 
   					}
	
					switch (family)
					{
						
					case 1:
						price = price + 70;break;
					case 2:
						price = price + 80;break;
					case 3:
						price = price + 80;break;
					case 4:
						price = price + 90;break;
					case 5:
						price = price + 50;break;
					case 6:
						price = price + 60;break;
					case 7:
						price = price + 50;break;
					case 8:
						price = price + 80;break;
					case 9:
						price = price + 50;break;
					case 10:
						price = price + 30;break;
					case 11:
						price = price + 20;break;
					case 12:
						price = price + 50;break;
					case 13:
						price = price + 30;break;
					case 14:
						price = price + 70;break;
					case 15:
						price = price + 90;break;
					}
					cout<<"\n\nPrice is- "<<price<<endl;
				

					
					if(opt4 == 1)
					{
						continue;
						cout<<"Enter Your Choice";
					}
				
					else 
						break;
				}	
		
					break;
				default:
					cout<<"Wrong option\n";
					break;
			}
	
			//asking users for other ride options
			cout<<"Do you want to try other rides also?\tClick 1 to continue:";
			cin>>opt1;
	
			if(opt1 == 1)
				continue;
			
			else 
				break;

		}
	return 0;
}

