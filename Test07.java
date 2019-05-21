import java.util.Scanner;

public class Test07 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		while(true){
			String tmp = scan.nextLine();
			int cnt = 0;
			int sum = 0;
			while(cnt < tmp.length())
				{
					sum += Integer.parseInt((String)tmp.charAt(cnt));
					cnt++;
				}
		}
	}
}
