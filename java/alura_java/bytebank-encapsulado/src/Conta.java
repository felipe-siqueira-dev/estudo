public class Conta {
	private double saldo;
	private int agencia;
	private int numero;
	private static int total = 0 ;
	private Cliente titular;
	//Cliente titular = new Cliente();
	
	//Criando construtores
	public Conta(int agencia, int numero) {
		//total é um atributo da classe diferente dos outros atributos que são do objeto
		Conta.total++;
		
		this.agencia = agencia;
		this.numero = numero;
		System.out.println("Estou aprendendo construtores");
		System.out.println("O total de contas abertas é " + Conta.total);
	}
	
	
	void deposita(double valor) {
		this.saldo += valor;
	}
	
	public boolean saca(double valor){
		if(valor<= this.saldo) {
			this.saldo -= valor;
			return true;
		}else {
			return false;
		}
	}
	
	public boolean transfere(double valor, Conta destino){
		if(valor <= this.saldo) {
			this.saldo-= valor;
			destino.deposita(valor);
			return true;
		}else {
			return false;
		}
	}
	
	public double getSaldo() {
		return this.saldo;
	}
	
	public int getNumero() {
		return this.numero;
	}
	
	public void setNumero(int numero) {
		if(numero <= 0) {
			System.out.println("não pode valor menor ou igual a zero!");
			return;
		}
		this.numero = numero;
	}
	
	public int getAgencia() {
		return this.agencia;
	}
	
	public void setAgencia(int agencia) {
		if(agencia <= 0) {
			System.out.println("não pode valor menor ou igual a zero!");
			return;
		}
		this.agencia = agencia;
	}
	
	public Cliente getTitular() {
		return titular;
	}
	
	public void setTitular(Cliente titular) {
		this.titular = titular;
	}
	
	public static int getTotal() {
		return Conta.total;
	}
}
