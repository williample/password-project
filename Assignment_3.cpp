#include <iostream>
#include <string>

using namespace std;

int  main()

{
   // user-provided values;
   string airline_name;
   string description_flight;

   double roundTripDistance=0; 
   double totalDistance=0;
  
   double roundTripCost; 
   double totalCost=0;

   double avgPerMile=0;
   
   // Ask for user input;
   
   cout << "\n ------------ Flight I ------------ \n" ;
   cout << "What airline are you using for this trip? \n" ;
   cin >> airline_name;
   cout << "What is the description and flight number of any leg? \n" ;
   cin >> description_flight; 
   cout << "What is the cost of round trip flight? \n" ;
   cin >> roundTripCost;
   totalCost = totalCost + roundTripCost ;
   cout << "How many miles is the round trip? \n" ;
   cin >> roundTripDistance; 
   totalDistance = totalDistance + roundTripDistance ;
   cout << endl ;

    // testing  airline_name characters
   if (airline_name.length() < 2 || description_flight.length() < 4 || roundTripDistance < 20 || roundTripCost < 1)
   {
      return 1;
   }  

   cout << "\n ----------- Flight II ----------- \n";
   cout << "What airline are you using for this trip? \n" ;
   cin >> airline_name ;
   cout << "What is the description and flight number of any leg? \n";
   cin >> description_flight;
   cout << "What is the cost of round trip flight? \n";
   cin >> roundTripCost;
   totalCost = totalCost + roundTripCost;
   cout << "How many miles is the round trip? \n";
   cin >> roundTripDistance; 
   totalDistance = totalDistance + roundTripDistance;
   cout << endl;

 
   // testing  airline_name characters
   if (airline_name.length() < 2 || description_flight.length() < 4 || roundTripDistance < 20 || roundTripCost < 1)
   {
      return 1;
   }  

   cout << "\n ---------- Flight III----------- \n";
   cout << "What airline are you using for this trip? \n" ;
   cin >> airline_name;
   cout << "What is the description and flight number of any leg? \n";
   cin >> description_flight;
   cout << "What is the cost of round trip flight? \n";
   cin >> roundTripCost;
   totalCost = totalCost + roundTripCost;
   cout << "How many miles is the round trip? \n";
   cin >> roundTripDistance;
   totalDistance = totalDistance + roundTripDistance;
   cout << endl;

   // testing  airline_name characters
   if (airline_name.length() < 2 || description_flight.length() < 4 || roundTripDistance < 20 || roundTripCost < 1)
   {
      return 1;
   }  

   // add total cost and distance round trip of flight I, flight II, flight III;
   // give results

   cout << " \n -------- Results ----------- \n" ;
   cout << "Total Cost: $" << totalCost << endl;
   cout << "Total Distance: " << totalDistance << endl;
 
   avgPerMile = totalCost/totalDistance;

   // avg Per Mile = total Cost / total Distant;
   cout << "Average cost per miles: $" << avgPerMile << endl;

   // projection cost of round trip between  Monterey, CA and Monterrey, MEX;
   cout << "\n ---------- Flight IV ---------- \n";
   cout << "Projection cost of round trip between  Monterey, CA and Monterrey, MEX is: \n";
   cout << 2958 * avgPerMile << endl;

   system("PAUSE");

   return 0;
}
/* --------------- Paste of Run -----------------

 ------------ Flight I ------------
What airline are you using for this trip?
AmericanAirlines
What is the description and flight number of any leg?
SanFrancisco/Houston:AAflight#2542
What is the cost of round trip flight?
563
How many miles is the round trip?
3426


 ----------- Flight II -----------
What airline are you using for this trip?
AmericanAirlines
What is the description and flight number of any leg?
LosAngelos/Denver:AAflight#3671
What is the cost of round trip flight?
262
How many miles is the round trip?
1698


 ---------- Flight III-----------
What airline are you using for this trip?
AmericanAirlines
What is the description and flight number of any leg?
SanJoseCity/NewOrleans:AAflight#1759
What is the cost of round trip flight?
656
How many miles is the round trip?
3768


 -------- Results -----------
Total Cost: $1481
Total Distance: 8892
Average cost per miles: $0.166554

 ---------- Flight IV ----------
Projection cost of round trip between  Monterey, CA and Monterrey, MEX is:
492.667
Press any key to continue . . .

---------------------------------------------- */
