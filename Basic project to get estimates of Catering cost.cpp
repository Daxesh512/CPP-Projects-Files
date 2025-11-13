#include &lt;iostream&gt;
#include &lt;string&gt;
#include &lt;iomanip&gt;
#include &lt;cmath&gt;

using namespace std;

int main()
{
string NameOfEvent, CustomerName;	// Name of Event + Customer Name
double NumberOfGuests;	// Number of Guests in attendance
int NumberOfMinutes;	// Number of Minutes in the event

// Information input (Events name and amounts)

cout &lt;&lt; "Enter the name of the event " &lt;&lt; endl;
getline(cin, NameOfEvent);
cout &lt;&lt; "Enter the customer's first and last name " &lt;&lt; endl;
getline(cin, CustomerName);
cout &lt;&lt; "Enter the number of guests " &lt;&lt; endl;
cin &gt;&gt; NumberOfGuests;
cout &lt;&lt; "\n\nEnter the number of minutes in the event " &lt;&lt; endl;
cin &gt;&gt; NumberOfMinutes;

cout &lt;&lt; "Fall Dinner     " &lt;&lt; endl;
cout &lt;&lt; "Event estimate for  " &lt;&lt; CustomerName &lt;&lt; endl;

int NumberOfServers, Cost1;
double CostForOneServer,Test, TotalFoodCost, AverageCost, Cost2, DepositAmount,TotalCost;

const double CostPerHour = 18.50;
const double CostPerMinute = .40;
const double CostOfDinner = 20.70;

// Get Number Of Servers
Test = NumberOfGuests / 20;
NumberOfServers = ceil(Test);

// Get Cost Of One Server
Cost1 = (NumberOfMinutes / 60) * CostPerHour;
Cost2 = (NumberOfMinutes % 60) * CostPerMinute;
CostForOneServer = Cost1 + Cost2;

// Get Cost For Food
TotalFoodCost = NumberOfGuests * CostOfDinner;

// Get Average Cost Per Person
AverageCost = TotalFoodCost / NumberOfGuests;

// Get Total Cost
TotalCost = TotalFoodCost + (CostForOneServer * NumberOfServers);

// Get Deposit Amount (25%)
DepositAmount = TotalCost * .25;

// Print values above
cout &lt;&lt; "Number Of Server: " &lt;&lt; NumberOfServers &lt;&lt; fixed &lt;&lt; setprecision(2) &lt;&lt; endl;
cout &lt;&lt; "The Cost for Servers: " &lt;&lt; setw(5) &lt;&lt; CostForOneServer &lt;&lt; endl;
cout &lt;&lt; "The Cost for Food is: " &lt;&lt; setw(5) &lt;&lt; TotalFoodCost &lt;&lt; endl;
cout &lt;&lt; "Avergae Cost Per Person: " &lt;&lt; setw(5) &lt;&lt; AverageCost &lt;&lt; endl;
cout &lt;&lt; "\nTotal cost is: " &lt;&lt; setw(5) &lt;&lt; TotalCost &lt;&lt; endl;

cout &lt;&lt; "Please deposite a 25% deposit to reserve the event" &lt;&lt; endl;
cout &lt;&lt; "The deposit needed is: " &lt;&lt; setw(5) &lt;&lt; DepositAmount &lt;&lt; endl;

return 0;
}