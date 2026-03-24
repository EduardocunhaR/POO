import java.util.Scanner;
public class senha {
 public static void main(String[] args){ 
    Scanner scanner = new Scanner(System.in);
    System.out.println("Digite a senha:");
    int senha = scanner.nextInt();
 while ( senha!= 2002){
     System.out.println("Senha Invalida");
     System.out.println("Tentar novamente");
     senha = scanner.nextInt();

 }
 System.out.println("Acesso Permitido");
 scanner.close();
}
}