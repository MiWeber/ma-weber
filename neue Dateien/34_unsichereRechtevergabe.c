    #include <unistd.h>
    #include <sys/types.h>

    int main()
    {
        seteuid(geteuid());

        return 0;
    }
