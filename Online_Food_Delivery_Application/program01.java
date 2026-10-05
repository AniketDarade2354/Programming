import java.util.*;

/*
    Online Food Delivery App

    Step 1 : Creat FoodItem Class (Abstract class)

 */

class program01
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
