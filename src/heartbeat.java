
public class heartbeat {

	public static void main(String[] args) {
		long n = 0;
		while(n < 100) {
			try {
				Thread.sleep(1000);
				System.out.println(n + " sec have elapsed");
				n++;
			}
			catch(InterruptedException e) {
				
			}
		}
	}

}
