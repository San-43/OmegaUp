package org.example;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt() - 1;
        int tamales = 0;

        if (a % 2 == 0) {
            tamales = a / 2;
        } else {
            tamales = (a + 1) / 2;
        }

        int temp = a - tamales;

        do {
            if (temp % b == 0) {
                break;
            } else {
                temp--;
                tamales++;
            }
        } while (true);

        System.out.println(tamales);
    }
}