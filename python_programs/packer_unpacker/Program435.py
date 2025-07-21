import os

def main():
    file_name = input("Enter the name of the file that you want to create.")
    
    filename = os.path.basename(file_name)
    filesize = os.path.getsize(file_name)

    print("File name is ", filename)
    print("File size is ", filesize)

if __name__ == "__main__":
    main()
