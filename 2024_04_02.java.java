import java.util.Scanner;
import java.util.HashSet;
import java.util.Set;
import java.util.*;

public class main {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		String S = sc.nextLine();
		
		Set<String> set = new HashSet<>();
		
		
		for(int i=0; i < S.length(); i++) {
			for(int j= i+1; j<=S.length(); j++) {
				set.add(S.substring(i, j));
			}
		}
		
		System.out.println(set.size());
	}
}
