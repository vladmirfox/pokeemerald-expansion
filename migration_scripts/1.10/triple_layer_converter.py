import os
import subprocess

# Ask the user to select a mode
print("Select the mode:")
print("1. RSE Mode")
print("2. FRLG Mode")
mode = input("Enter your choice (1 or 2): ")

if mode == '1':
    script_name = 'rse_triple_layer_converter.py'
elif mode == '2':
    script_name = 'frlg_triple_layer_converter.py'
else:
    print("Invalid selection, aborting.")
    exit(1)

# Check if the script file exists
if not os.path.exists(script_name):
    print(f"[ERR] The script {script_name} does not exist, aborting.")
    exit(1)

# Run the selected script
try:
    subprocess.run(['python', script_name], check=True)
except subprocess.CalledProcessError as e:
    print(f"[ERR] Failed to run {script_name}: {e}")

