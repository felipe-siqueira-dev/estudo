
public class TestaGetESet {
	public static void main(String[] args) {
		
		Conta conta = new Conta(24226,1337);
		//conta.numero = 1337 já não ocorre mais
		conta.setNumero(1337);
		System.out.println(conta.getNumero());
		
		conta.setAgencia(1234);
		System.out.println(conta.getAgencia());
		
		Cliente paulo = new Cliente();
		//conta.titular = paulo
		conta.setTitular(paulo);
		
//		paulo.setNome("Paulo Silveira");
		conta.getTitular().setNome("Paulo Silveira");
		conta.getTitular().setProfissao("Programador");
		
		System.out.println(conta.getTitular().getNome());
		System.out.println(conta.getTitular().getProfissao());
	}
}
