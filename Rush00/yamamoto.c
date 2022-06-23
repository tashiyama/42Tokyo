void    rush(int width, int length);

int judgmrnt_int(char *str)
{
    int num = 0;
    int err = 0;
    int keta = 0;

    while(*str != '\0'){
        if ((*str < '0') || (*str > '9')) {
            err = 1;
            break;
        }
        if (keta > 5) { /* 最大桁の指定 */
//          err = 1;
            break;
        }
        num += *str - 48;
        num *= 10;
        str++;
        keta++;
    }

    if (err) {
        num = 0;
    }
    else {
        num /= 10;
    }

    return num;
}

int    main(int argc, char** argv)
{
    int length;
    int width;
    if (argc == 3)
    {
    length=judgmrnt_int(argv[1]);
    width=judgmrnt_int(argv[2]);
    if ((length != 0) && (width != 0))
    rush(width,length);
    }
    
    return (0);
}
