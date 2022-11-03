package org.example;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int init = scanner.nextInt();
        int n = scanner.nextInt();

        for (int i = 0; i < n; i++) {
            int movement = scanner.nextInt();
            switch (movement) {
                case 1:
                    if (init == 1 || init == 2) {
                        if (init == 1) {
                            init = 2;
                        } else {
                            init = 1;
                        }
                    }
                    break;
                case 2:
                    if (init == 1 || init == 3) {
                        if (init == 1) {
                            init = 3;
                        } else {
                            init = 1;
                        }
                    }
                    break;
                case 3:
                    if (init == 1 || init == 4) {
                        if (init == 1) {
                            init = 4;
                        } else {
                            init = 1;
                        }
                    }
                    break;
                case 4:
                    if (init == 2 || init == 3) {
                        if (init == 2) {
                            init = 3;
                        } else {
                            init = 2;
                        }
                    }
                    break;
                case 5:
                    if (init == 2 || init == 4) {
                        if (init == 2) {
                            init = 4;
                        } else {
                            init = 2;
                        }
                    }
                    break;
                case 6:
                    if (init == 3 || init == 4) {
                        if (init == 3) {
                            init = 4;
                        } else {
                            init = 3;
                        }
                    }
                    break;
                default:
            }
        }
        System.out.println(init);
    }
}