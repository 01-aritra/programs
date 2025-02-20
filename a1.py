import os

try:
    # get the current script file path
    script_path = os.path.abspath(__file__)

    # delete the script file
    os.remove(script_path)

    print("Script has been deleted.")
    
except Exception as e:
    print("An error occurred while deleting the script: ", e)
