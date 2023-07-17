
public class TestaCondicional2 {
	public static void main(String[] args) {
		System.out.println("testando condicionais");
		int idade = 20;
		int quantidadePessoas = 1;
		boolean acompanhado = quantidadePessoas >= 2 ? true : false ;
		
		if (idade >= 18 && acompanhado) {
			System.out.println("Seja bem vindo");
		} else {
			System.out.println("Infelizmente você não pode entrar");
		}
	}
}

/*
 * && boolean E
 * || boolean OU
 * ! boolean NOT
 * O valor atribuído ao boolean só pode ser true ou false
 */