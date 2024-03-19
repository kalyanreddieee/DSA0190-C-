#include <iostream>
#include <string>
#include <vector>
using namespace std;
class PersonalInfo {
protected:
    string name;
    string email;
    string phone;
public:
    PersonalInfo(const string& name, const string& email, const string& phone)
        : name(name), email(email), phone(phone) {}
    virtual void displayInfo() const = 0;
};
class RequirementDetail {
protected:
    string source;
    string destination;
    string date;
public:
    RequirementDetail(const string& source, const string& destination, const string& date)
        : source(source), destination(destination), date(date) {}
    virtual void displayRequirements() const = 0;
};
class BusBookingRequirement : public RequirementDetail {
    int numberOfPassengers;
public:
    BusBookingRequirement(const string& source, const string& destination, const string& date, int numberOfPassengers)
        : RequirementDetail(source, destination, date), numberOfPassengers(numberOfPassengers) {}

    void displayRequirements() const override {
        cout << "Booking Requirements:" << endl;
        cout << "Source: " << source << endl;
        cout << "Destination: " << destination << endl;
        cout << "Date: " << date << endl;
        cout << "Number of Passengers: " << numberOfPassengers << endl;
    }
};
class UserPersonalInfo : public PersonalInfo {
public:
    UserPersonalInfo(const string& name, const string& email, const string& phone)
        : PersonalInfo(name, email, phone) {}

    void displayInfo() const override {
        cout << "Personal Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Email: " << email << endl;
        cout << "Phone: " << phone << endl;
    }
};
int main() {

    UserPersonalInfo userInfo("John Doe", "johndoe@gmail.com", "1234567890");
    BusBookingRequirement bookingRequirement("City A", "City B", "2024-03-18", 2);

    userInfo.displayInfo();
    cout << endl;
    bookingRequirement.displayRequirements();

    return 0;
}
