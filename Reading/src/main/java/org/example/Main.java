package org.example;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        int s;
        int t;
        int r;
        int pages;
        int[] minutes = new int[k];

        for (int i = 0; i < k; i++) {
            pages = 0;
            s = scanner.nextInt();
            t = scanner.nextInt();
            r = scanner.nextInt();
            for (int j = 0; pages < n; j++) {
                pages += s;
                if (j == t) {
                    minutes[i] += r + 1;
                    j = 0;
                    continue;
                }
                minutes[i]++;
            }
        }
        for (int a : minutes) {
            System.out.println(a);
        }
    }
}