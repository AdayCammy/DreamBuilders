#include <iostream>
#include <string>

using namespace std;

// Struct for storing details of houses.
struct HouseDetails 
{ 
    string name; 
    string location; 
    int numRooms; 
    int area; 
    float budget; 
    bool customBuilt; 
    string type;  
};

// Prototype functions 
void getHouseDetails(HouseDetails *obj); 
void printHouseDetails(HouseDetails obj);
void AddHouseDetails(HouseDetails *obj);

int main() 
{ 
    HouseDetails obj; 
    
    // Get House details 
    getHouseDetails(&obj); 
    cout<<"\nDetails entered are\n"; 
    
    // Print house details 
    printHouseDetails(obj);
    
    // Add House details 
    AddHouseDetails(&obj); 

    cout<<"\nUpdated House details are\n"; 
    
    // Print House Details
    printHouseDetails(obj);

    return 0;
}

/* Function to get user entered data */
void getHouseDetails(HouseDetails *obj) 
{ 
    cout<<"Enter the House Details:"<<endl;
    cout<<"Name: ";
    cin >> obj->name;
    cout<<"Location: ";
    cin >> obj->location;
    cout<<"Number of Rooms: ";
    cin >> obj->numRooms;
    cout<<"Area (in sqft): ";
    cin  >> obj->area;
    cout<<"Budget (in USD): ";
    cin  >> obj->budget;
    cout<<"Customized(yes/no): ";
    cin >> obj->customBuilt;
    cout<<"Type of House (New/Remodel/Addition): ";
    cin >> obj->type;
}  

/* Function for printing details */
void printHouseDetails(HouseDetails obj) 
{ 
    cout<<"\nName : "<< obj.name;
    cout<<"\nLocation : "<< obj.location;
    cout<<"\nNumber of Rooms : "<< obj.numRooms;
    cout<<"\nArea (in sqft) : "<< obj.area;
    cout<<"\nBudget (in USD) : "<< obj.budget;
    cout<<"\nCustomized : "<< obj.customBuilt;
    cout<<"\nType of House : "<< obj.type; 
    cout << "\n"; 
}

/* Function to add new house details */
void AddHouseDetails(HouseDetails *obj) 
{ 
    cout<<"\nEnter the additional house details:";
    cout << "\nName: "; 
    cin >> obj->name; 
    cout << "Location: "; 
    cin >> obj->location; 
    cout << "Number of Rooms: "; 
    cin >> obj->numRooms; 
    cout << "Area (in sqft): "; 
    cin >> obj->area; 
    cout << "Budget (in USD): "; 
    cin >> obj->budget; 
    cout << "Customized (yes/no): "; 
    cin >> obj->customBuilt; 
    cout << "Type of House (New/Remodel/Addition): "; 
    cin >> obj->type; 
}