package bytebank;

public class TesteReferencias {
	public static void main(String[] args) {
		Conta primeiraConta = new Conta();
		primeiraConta.saldo = 300;
		
		System.out.println("Saldo da primeira: " + primeiraConta.saldo);
		
		/* segundaConta tem a referência da primeiraConta
		 *ou seja, como as duas fazem referência para o mesmo objeto 
		 */
		Conta segundaConta = primeiraConta;
		segundaConta.saldo += 100;
		primeiraConta.saldo += 100;
		System.out.println(primeiraConta.saldo);
		System.out.println(segundaConta.saldo);
		
		Conta terceiraConta = new Conta();
		System.out.println(primeiraConta +"\n"+ segundaConta + "\n" + terceiraConta);
	}
}
