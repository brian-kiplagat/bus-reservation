import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class RentalAgency {
    private Map<String, Car> cars;
    private Map<String, Customer> customers;
    private List<Rental> rentals;

    public RentalAgency() {
        cars = new HashMap<>();
        customers = new HashMap<>();
       
