package org.example;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c;
        int days = 0;
        int tmp = 0;

        for (int i = 0; i < a; i++) {
            c = scanner.nextInt();
            if (b > tmp) {
                tmp += c;
                days++;
            }
        }
        System.out.println(days);
    }
}