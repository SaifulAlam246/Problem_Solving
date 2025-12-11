import time
import sys

lyrics = """
Jodi biroh thake ami o thaki
Ke bolo shesh hobe age?
Keno je eto bhalobasha more jay
Shudhu shomoy mone rakhe

Eto shunnota e mone rakhi je ami
Dekhe na keu to ar
bole e sobi paglami
Kate na jamini
biroh jeno kete jay
Thame na borosha
tomare daki je ami
"""


for line in lyrics.splitlines():
    for ch in line:
        sys.stdout.write(ch)
        sys.stdout.flush()
        time.sleep(0.02) 
    print()
    time.sleep(2.5)
print("\nKhai dai kam nai, tai Terminal e lyrics likhi.\n-Saiful Alam")    
