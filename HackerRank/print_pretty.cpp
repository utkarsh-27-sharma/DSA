

		/* Enter your code here */
                typedef long long llint;
        llint AA = llint(A);
        printf("0x%llx\n", AA);

        char tmp[100];
        sprintf(tmp, "%s%.2f", B >= 0? "+": "-", B);
        string sb(tmp);

        for (int i = 0; i + sb.size() < 15; i++) {
            printf("_");
        }
        puts(tmp);

        printf("%.9E\n", C);
