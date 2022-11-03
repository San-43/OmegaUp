package org.example;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int c = scanner.nextInt();
        int p = scanner.nextInt();
        int sons = 1 + scanner.nextInt();
        int temp = c - p;
        do {
            if (temp % sons == 0) {
                break;
            } else {
                temp--;
                p++;
            }
        } while (true);
        System.out.println(p);
    }
}