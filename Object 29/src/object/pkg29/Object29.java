/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package object.pkg29;
import java.math.BigInteger;
import java.util.HashSet;
import java.util.Set;
public class Object29 {
    public static void main(String[] args) {
        Set<BigInteger> generated = new HashSet<>();
		for (int a = 2; a <= 100; a++) {
			for (int b = 2; b <= 100; b++)
				generated.add(BigInteger.valueOf(a).pow(b));
		}
	System.out.print(generated.size());
    }
}
