#include <iostream>
 class student {
 	public:
 		
 		void walk();
 		void talk();
 		 
 };
   void student::walk()
{
 	std::cout << "I can walk" << std::endl;
   } 
   void student::talk(){
   	std::cout << "I can talk"; 	
   }
   
    main() {
    	
   	student g;
   	
   	g.talk();
   	g.walk();
   	
   }
