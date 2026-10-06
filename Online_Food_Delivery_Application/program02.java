/*
    Online Food Delivery System

    Step 1  : Create required enums (OrderStatus, PaymentStatus, FoodCategory, AvailabilityStatus)
    Step 2  : Address class
    Step 3  : FoodItem class
    Step 4  : Menu class
    Step 5  : Restaurant class
    Step 6  : User class (abstract)
    Step 7  : Customer class (extends User)
    Step 8  : DeliveryPartner class (extends User)
    Step 9  : CartItem class
    Step 10 : Cart class
    Step 11 : OrderItem class (price snapshot)
    Step 12 : PaymentStrategy interface with UPIPayment, CardPayment, CashOnDelivery (Strategy Pattern)
    Step 13 : PaymentFactory class (Factory Pattern, optional)
    Step 14 : Payment class
    Step 15 : OrderObserver interface, implemented by Customer, Restaurant, DeliveryPartner (Observer Pattern)
    Step 16 : Order class (status transitions, cancel rules)
    Step 17 : DeliveryAssignmentStrategy interface (Strategy Pattern)
    Step 18 : DeliveryService class
    Step 19 : FoodDeliveryApp class (Singleton Pattern, optional)
    Step 20 : Main class (Controller, runs the Rahul scenario)

*/

class program01
{
    public static void main(String A[])
    {
        
    }
}

//////////////////////////////////////////////////////////////////////////
// Step 1 : Create required enums
//////////////////////////////////////////////////////////////////////////

enum OrderStatus
{
    PLACED,
    ACCEPTED,
    PREPARING,
    READY_FOR_PICKUP,
    PICKED_UP,
    OUT_FOR_DELIVERY,
    DELIVERED,
    CANCELLED,
    REJECTED
}

enum PaymentStatus
{
    PENDING,
    SUCCESS,
    FAILED,
    REFUNDED
}

enum FoodCategory
{
    VEG,
    NON_VEG,
    BEVERAGE,
    DESSERT
}

enum AvailabilityStatus
{
    AVAILABLE,
    BUSY
}