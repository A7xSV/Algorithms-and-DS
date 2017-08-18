def ask_ok(prompt, retries = 4, complaint = "Yes or no, please !"):
    while True:
        ok = raw_input(prompt)
        if ok in ("Yes", "yes", "Y", "y"):
            return True
        if ok in ("No", "no", "N", "n"):
            return False
        retries -= 1
        if retries < 0:
            raise IOError("refusenik user")
        print complaint

ask_ok("Do you really want to quit ?", 2)

""" 
This function can be called in several ways:

giving only the mandatory argument: ask_ok('Do you really want to quit?')
giving one of the optional arguments: ask_ok('OK to overwrite the file?', 2)
or even giving all arguments: ask_ok('OK to overwrite the file?', 2, 'Come on, only yes or no!')

"""