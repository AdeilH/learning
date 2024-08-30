def command(cmd):
    match cmd:
        case "ls":
            print("lists directory")
        case "rm":
            print("removes files and directory")
        case int():
            print("Is a number not a command")
        case float():
            print("Is a number not a command")
        case _:
            print("no such command")


command("ls")
command("test")
command(33.0)