

public class Conta {
	private double saldo;
	int agencia;
	int numero;
	Cliente titular;
	//Cliente titular = new Cliente();
	
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
	
}
