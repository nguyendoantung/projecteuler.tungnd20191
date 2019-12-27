/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package object.pkg46;
import static java.lang.Math.sqrt;
import java.util.ArrayList;
class number{
    public int giatri;
    public int isPrime(){
        int x = this.giatri;
        int i;
	if (x<2) return 0;
	if( (x==2)||(x==3) ) return 1;
	if( (x%2 == 0)||(x%3 == 0)) return 0;
	for(i=5; i<=sqrt(x);i+=6){
		if( (x%i==0)||(x%(i+2)==0)) return 0;
	}
	return 1;
    }
    public int isTwicesquare(){
        int i = this.giatri;
        double squareTest = sqrt(i/2);
        if( squareTest == ((int)squareTest)) return 1;
        else return 0;
    }
}
public class Object46 {
    public static void main(String[] args) {
        ArrayList list = new ArrayList();
        number n = new number();
        for(int i = 2; i< 10000; i++){
            n.giatri = i;
            if(n.isPrime() == 1) list.add(i);
        }
        number result = new number();
        number n2 = new number();
        result.giatri = 3;
        int notFound = 1;
        while(notFound == 1){
            result.giatri += 2;
            int temp;
            temp = result.giatri ; 
            notFound = 0;
            int j = 0;
            while(temp >= (int)list.get(j)){
                n2.giatri = temp - (int)list.get(j);
                if(n2.isTwicesquare() == 1){
                    notFound = 1;
                    break;
                }
                j++;
            }
        }
        System.out.print("ket qua la:  "+result.giatri);   
    }    
}
