import java.util.Scanner;

public class Coordenadas {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Digite as coordenadas (x y):");

        int x = sc.nextInt();
        int y = sc.nextInt();
   

        while (x != 0 && y != 0) {
            
            if (x > 0 && y > 0) {
                System.out.println("primeiro");
            } else if (x < 0 && y > 0) {
                System.out.println("segundo");
            } else if (x < 0 && y < 0) {
                System.out.println("terceiro");
            } else {
                System.out.println("quarto");
            }
            System.out.println("Digite as proximas coordenadas (x y):( 0 0 para sair)");
            x = sc.nextInt();
            y = sc.nextInt();
        }
        System.out.println("Fim do programa");
        sc.close();
    }
}