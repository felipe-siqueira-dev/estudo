
public class Exercicio1Teste {
	public static void main(String[] args) {
		Exercicio1 person = new Exercicio1();
		person.setName("Donkey Kong");
		person.setAge(25);
		person.setCountry("Donkey Island");
		
		System.out.println("Name: " + person.getName());
		System.out.println("Age: " + person.getAge());
		System.out.println("Country: " + person.getCountry());
	}
}
