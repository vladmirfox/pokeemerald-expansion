import os
import subprocess

# Define the paths to the scripts
rse_script_path = 'migration_scripts/1.10/rse_triple_layer_converter.py'
frlg_script_path = 'migration_scripts/1.10/frlg_triple_layer_converter.py'

# Ask the user to select a mode
print("Select the mode:")
print("1. RSE Mode")
print("2. FRLG Mode")
mode = input("Enter your choice (1 or 2): ")

# Determine the script to run based on the user's choice
if mode == '1':
    script_path = rse_script_path
elif mode == '2':
    script_path = frlg_script_path
else:
    print("Invalid selection, aborting.")
    exit(1)

# Check if the script file exists
if not os.path.exists(script_path):
    print(f"[ERR] The script {script_path} does not exist, aborting.")
    exit(1)

# Run the selected script
try:
    subprocess.run(['python3', script_path], check=True)
except subprocess.CalledProcessError as e:
    print(f"[ERR] Failed to run {script_path}: {e}")

