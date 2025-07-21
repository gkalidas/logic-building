def main():
    try:

        file_name = input("Enter the name of the file that you want to create.")
        with open(file_name, "x") as fobj:
            fobj.close()
            print("File created successfully.")
    except FileExistsError:
        print("File already exists.")
    except Exception as e:
        print("Exception while creating a new file ", e)


if __name__ == "__main__":
    main()