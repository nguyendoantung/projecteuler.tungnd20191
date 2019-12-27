package object.pkg57;
import java.math.BigInteger;
public class Object57 {
    public static void main(String[] args) {
        BigInteger tuso = BigInteger.valueOf(3);
        BigInteger mauso = BigInteger.valueOf(2);
        BigInteger a ;
        BigInteger b ;
        int count = 0;
        for(int i = 2; i<= 1000; i++){
            a = tuso;
            b = mauso; 
            mauso = a.add(b);   //mauso(moi)  = mauso + tuso
            tuso = a.add(b.multiply(BigInteger.valueOf(2)));// tuso(moi) = 2*mauso +tuso
            if(tuso.toString().length() > mauso.toString().length() ) count++;
        }
        System.out.print(count);       
    }   
}
