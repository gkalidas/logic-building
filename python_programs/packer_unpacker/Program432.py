




def main():
    try:
        with open("marvellous.txt", "w") as fobj:
            fobj.close()
    except Exception as e:
        print("Exception while creating a new file ", e)


if __name__ == "__main__":
    main()