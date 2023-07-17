
public class TestaEscopo {
	public static void main(String[] args) {
		int idade = 20;
		int quantidadePessoas = 3;
		
		if (quantidadePessoas >= 2) {
			boolean acompanhado = true;
			//existe a variavel acompanhado
		}//deixou de existir
		else {
			boolean acompanhado = false;
			//existe a variável acompanhado
		}//deixou de existir
	}
}

/*
 * As variáveis quando declaradas dentro de um escopo existem unicamente a partir do momento que o escopo
 *foi criado e deixam existir quando ele é encerrado
 * */
 