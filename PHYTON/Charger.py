import psutil
import time
import os

file60_path = r"C:\Qres\60Hz - Shortcut.lnk"
file144_path = r"C:\Qres\144Hz - Shortcut.lnk"

def is_charger_plugged():
    battery = psutil.sensors_battery()
    if battery:
        return battery.power_plugged
    return False

def check_charger_events():
    charger_status = is_charger_plugged()
    while True:
        time.sleep(1)
        new_charger_status = is_charger_plugged()
        if new_charger_status != charger_status:
            charger_status = new_charger_status
            if charger_status:
                os.system(f'start "" "{file144_path}"')
            else:
                os.system(f'start "" "{file60_path}"')

if __name__ == '__main__':
    print("Monitoring charger events. Press Ctrl+C to exit.")
    try:
        check_charger_events()
    except KeyboardInterrupt:
        pass