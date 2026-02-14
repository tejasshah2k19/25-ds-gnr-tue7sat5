
import java.util.Stack;

class StackDemo {

    public static void main(String[] args) {

        Stack<Integer> s = new Stack<>(); //5 generic -> Type Safety 

        s.push(10);
        s.push(20);
        s.push(30);

        System.out.println("size =>  " + s.size());//3 
        System.out.println(s.pop());//30 
        System.out.println(s.peek());

        // { { { { } } } } -> valid
        // { {  [  } ] }  -> inValid 
        //  { [ ] } }  -> inValid 
    }
}
