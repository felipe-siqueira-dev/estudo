
public class Rectangle extends Shape {
	
	public Rectangle(double width, double height) {
		super.setBase(width);
		super.setAltura(height);
	}
	
	public double getArea() {
		return super.getBase() * super.getAltura();
	}
}
