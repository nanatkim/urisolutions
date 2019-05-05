import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class Main{
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine()), n;
		ArrayList<Integer> pares = new ArrayList<>();
		ArrayList<Integer> impares = new ArrayList<>();
		while(t-- > 0){
			n = Integer.parseInt(br.readLine());
			if(n % 2 == 0)
				pares.add(n);
			else
				impares.add(n);
		}
		Collections.sort(pares);
		Collections.sort(impares, Collections.reverseOrder());
		for(int i : pares)
			System.out.println(i);
		for(int i : impares)
			System.out.println(i);
	}
}