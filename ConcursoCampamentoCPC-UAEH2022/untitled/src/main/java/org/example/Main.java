package org.example;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int a = scanner.nextInt();
        String[] s = new String[n];
        for (int i = 0; i < n; i++) {
            s[i] = scanner.nextLine();
        }
        for (int i = 0; i < a; i++) {
            String s1 = scanner.nextLine();
            int ini = 0;
            int end = s.length;
            int count;
            while (ini <= end) {
                int mitad = (ini + end) >> 1;
                if (s[mitad].startsWith(s1)) {
                    System.out.println(mitad);
                } else {
                    ini = mitad
                }
            }
        }
    }
}