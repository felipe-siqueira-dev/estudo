
public class Administrador extends Funcionario implements Autenticavel {

	private AutenticacaoUtil util;
	
	public Administrador() {
		this.util = new AutenticacaoUtil();
	}
	
	public void setSenha(int senha) {
		this.util.setSenha(senha);
	}
	
	public boolean autentica(int senha) {
		return this.util.autentica(senha);
	}
	
	@Override
	public double getBonificacao() {
		return 50;
	}
}
