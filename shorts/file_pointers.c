FILE POINTERS

The ability to read data from and write data to files is the primary means of storing persistent data,
data that does not disapear when your program stops runing.

The abstraction of files that C provides is implemented in a data structire known as FILE.
    Almost universally when working with files, we will be using pointers to them, FILE*.

The file manipulation functions all live in sdtio.h
    All of them accept FILE* as one of their parameters, execpt for the function fopen(), wich is used to get a file pointer in the first place.

Some of the most common file input/output (I/O) functions that we will be working with are:

fopen() fclose() fgetc() fputc() fread() fwrite()

    fopen()
        Opens a file and returns a file pointer to it.
        Always check the return value to make sure you dont get back NULL.

            FILE* ptr = fopen(<filename>, <operation>);

            FILE* ptr1 = fopen("file1.txt", "r"); // read
            FILE* ptr1 = fopen("file2.txt", "w"); // write
            FILE* ptr1 = fopen("file3.txt", "a"); //append

    fclose()
        Closes the file pointed to by the given file pointer.

            fclose(ptr1);

    fgetc()
        Reads and returns the next character from the file pointed to.
        Note: The operation of the file pointer passed in as a parameter must be "r" for read, or you will suffer an error.

            char ch = fgetc(<file pointer>);

        The ability to get single characters from files, if wrapped in a loop,
        means we could read all the characters from a file and print them to the screen,
        one-by-one, essentially.

            char ch;
            while((ch = fgetc(ptr)) ! = EOF)
            printf("%c", ch);

    We might out this in a fille called cat.c, after the Linux command "cat" wich essentially does just this.

    fputc()
        Writes or appends the specified character to the pointed-to-file.
        Note: The operation of the file pointer passed in as a parameter must be "w" for writer or "a" for append, or you will suffer an error.

            fputc(<character>, <file pointer>);

        Now we can read characters from files and write characters to them. Lets extend our previous example to copy one file to another,
        instead of printing to the screen.

            char ch;
            while ((ch = fgetc(ptr)) != EOF)
                fputc(ch, ptr2);

        We might put this in a file called cp.c, after the Linux command "cp" which essentially does just this.

        fread()
            Reads <qty> units of size <size> from the file pointed to and stores them in memory in a buffer (usually an array) pointed to by <buffer>.

            Note: The operation of the file pointer passed in as a parameter must be "r" for read, or you will suffer an error.

            char c;
            fread(&c, sizeof(char), 1, ptr);


        fwrite()
          Writes <qty> units of size <size to the file pointed to by reading them from a buffer (udually an array) pointed to by <buffer>.

          Note: The operation of the file pointer passed in as a parameter must be "w" for write or "a" for appenf, or you will suffer an error.

          int arr[10];
          fwrite(arr, sizeof(double), 10, ptr);


Lots of other useful functions abound in stdio.h for you to work with. Here are some of the ones you may find useful!

  fgets()   Reads a full string from a file.
  fputs()   Writes a full string to a file.
  fprintf() Writes a formatted string to a file.
  fseek()   Allows you to rewind or fast-forward within a file.
  ftell()   Tells you at at what (byte) position you are at within a file.
  feof()    Tells you whether you've read to the end of a file.
  ferror()  Indicates whether an error has occurred in working with a file.
