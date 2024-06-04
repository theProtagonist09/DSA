import java.util.HashMap;
public class Map{
    public static void main(String[] args) {
        //method 1 for creating HashMap
        HashMap<String ,Integer>numbers=new HashMap<>();
        numbers.put("Alpha",1);
        numbers.put("Beta",2);
        System.out.println(numbers);

        //method two
        HashMap m=new HashMap();
        m.put("harry",1);
        m.put("sejal",2);
        m.put("Hi",3);
        m.put("bye",26);

        System.out.println(m);
        System.out.println(m.get("sejal"));      //using key to get the value
        m.remove("Hi");                          //using key to remove the value
        System.out.println(m);

        System.out.println(m.containsKey("byee"));  //checks whether a key is contained or not 
        System.out.println(m.containsValue(26));  //checks whether a value is contained or not

        System.out.println(m.isEmpty());                //checks whether a Map is empty or not
    }
}