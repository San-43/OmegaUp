package org.example;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int i = 0;
        float n;
        Scanner scanner = new Scanner(System.in);
        do {
            n = scanner.nextFloat();
            i++;
        } while (n != 8);
        System.out.println(i);
    }
}