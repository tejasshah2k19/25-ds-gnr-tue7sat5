
import java.util.LinkedList;

public class LinkedListDemo {

    public static void main(String[] args) {

        LinkedList<Integer> list = new LinkedList<>();

        list.add(10);
        list.add(20);//
        list.addFirst(30);
        //30 10 20 

        System.out.println(list);
    
        list.add(2,2000);

        System.out.println("List Items ==> ");
        for(Integer x : list){
            System.out.println(x);
        } 
        
        // list.removeLast();
        // list.removeFirst();
        // list.remove(3); 


    }
}
