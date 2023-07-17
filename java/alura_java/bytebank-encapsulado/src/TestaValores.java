
public class TestaValores {

	public static void main(String[] args) {
		Conta conta = new Conta(24226,1337);
		Conta conta2 = new Conta(24227,1338);
		
		//conta está incosistente em relação a regra de negócios
		//conta.setAgencia(-50);
		//conta.setNumero(-330);
		
		System.out.println(Conta.getTotal());
	}
}
