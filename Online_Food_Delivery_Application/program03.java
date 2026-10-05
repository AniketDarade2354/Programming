import java.util.*;

/*
    Online Food Delivery App

    Step 1 : Create FoodItem Class (Abstract class)
    Step 2 : Create Panner and Chicken class
    Step 3 : Create Factory Class
 */

class program02
{
    public static void main(String A[])
    {
        
    }
}

enum Category
{
    VEG,
    NON_VEG,
    BEVERAGES,
    DESSERT
}

enum IsAvailable
{
    YES,
    NO
}

enum Item
{
    Panner,
    Chiken
}


abstract class FoodItem
{
    private int ItemID;
    private String ItemName;
    private double price;
    private Category category;
    private IsAvailable isAvailable;

    public FoodItem(    int ItemID,
                        String ItemName,
                        double price,
                        Category category,
                        IsAvailable isAvailable
                    )
    {
        this.ItemID = ItemID;
        this.ItemName = ItemName;
        this.price = price;
        this.category = category;
        this.isAvailable = isAvailable;
    }

    public int getItemID()
    {
        return this.ItemID;
    }

    public String getItemName()
    {
        return this.ItemName;
    }
    
    public double getPrice()
    {
        return this.price;
    }
    
    public Category getCategory()
    {
        return this.category;
    }
    
    public IsAvailable getIsAvailable()
    {
        return this.isAvailable;
    }
    
    public void setItemID(int ItemID)
    {
        this.ItemID = ItemID;
    }

    public void setItemName(String ItemName)
    {
        this.ItemName = ItemName;
    }

    public void setPrice(double price)
    {
        this.price = price;
    }

    public void setCategory(Category category)
    {
        this.category = category;
    }

    public void setIsAvailable(IsAvailable isAvailable)
    {
        this.isAvailable = isAvailable;
    }

    public abstract void display();
}

class Panner extends FoodItem
{
    public Panner   (   int ItemID,
                        String ItemName,
                        double price,
                        Category category,
                        IsAvailable isAvailable
                    )
    {
        
        super   (       ItemID,
                        ItemName,
                        price,
                        category,
                        isAvailable
                );
    }

    public void display()
    {
        System.out.println();

        System.out.println("Item Name  : " + getItemName());
        System.out.println("Item Price : " + getPrice());
        System.out.println("Item Category : " + getCategory());
        System.out.println("Item Availability : " + getIsAvailable());

        System.out.println();
    }
}

class Chiken extends FoodItem
{
    public Chiken   (   int ItemID,
                        String ItemName,
                        double price,
                        Category category,
                        IsAvailable isAvailable
                    )
    {
        
        super   (       ItemID,
                        ItemName,
                        price,
                        category,
                        isAvailable
                );
    }

    public void display()
    {
        System.out.println();

        System.out.println("Item Name  : " + getItemName());
        System.out.println("Item Price : " + getPrice());
        System.out.println("Item Category : " + getCategory());
        System.out.println("Item Availability : " + getIsAvailable());

        System.out.println();
    }
}

class ItemFactory
{
    public static FoodItem createItem(  int ItemID,
                                        String ItemName,
                                        double price,
                                        Category category,
                                        IsAvailable isAvailable,
                                        Item item
                    )
                    {
                        switch(item)
                        {
                            case Panner:
                                return new Panner( 101, "Panner", 150.0, Category.VEG, IsAvailable.YES);
                            
                            case Chiken:
                                return new Chiken( 102, "Chicken", 200.0, Category.NON_VEG, IsAvailable.YES);

                            default:
                                throw new IllegalArgumentException("Invalid FoodItem type");
                        }
                    }
}

