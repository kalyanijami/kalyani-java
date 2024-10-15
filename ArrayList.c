import java.io.*;
import java.util.*;
public class ArrayListDemo{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        ArrayList<Integer> al=new ArrayList<Integer>();
        int sum=0;
        float avg=0;
        System.out.println("Enter integer elements into Arraylist");
        while(sc.hasNextInt()){
            al.add(sc.nextInt());
        }
        for(int i=0;i<al.size();i++){
            sum=sum+al.get(i);
        }
        avg=sum/al.size();
        System.out.println("The sum of ArrayList elemts is "+sum);
        System.out.println("Average of ArrayList elements is "+avg);
    }
}
