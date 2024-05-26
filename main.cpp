#include <iostream>
#include "vector"
using namespace std;

int main() 
{
    // int favorite_number;
    
    // std::cout << "Enter your favorite number between 1 and 100: ";
    // std::cin >> favorite_number;
    // std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    
    // vectors 
    vector<int> v1;
    v1.push_back(10);

    return 0;

    /* factory design pattern*/
    class vehicle{
        public:
          virtual void createvehicle()= 0;     // pure virtual fun 
    }
    class car: public vehicle{
        public:
         void createvehicle(){
            cout << "car class create";
         }
    }
    class bike: public vehicle{
        public:
            void createvehicle(){
            cout << "bike class create";
         }
    }
    class vehiclefactory(){
        public:
        static vehicle* getvehicle (string vehicletype);
    }
    vehicle* vehiclefactory :: getvehicle(string vtype)
    {
        vehicle *v;
        v=new car();

    }
    int main()
    {
          vehiclefactory::getvehicle(vehicletype);
    }

   // singletone desing pattern
   class logger{
      static logger *loggerinstance;
      logger();
    public:
      static logger* getlogger();
   }

   logger *logger :: getlogger()
   {
    loggerinstance = new logger();
   } 

   // copy constructor
   class sample{
    public:
       int x;
       sample();
       sample(sample &obj)
       {
        x=obj.x;
       }
   }

   sample obj1;
   obj1(obj2);

}
