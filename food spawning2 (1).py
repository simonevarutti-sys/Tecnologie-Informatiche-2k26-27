import time
import random

food = ("mela" , "banana" , "topi" , "pera" , "cioccolato" , "funghi avvelenati")

startTime = time.time()
while True:
  chosenFood = random.choice(food)
  print(chosenFood)
  waitingSpawnTime = 2 + random.random()*8
  print("Aspetto " + str(waitingSpawnTime) + " secondi")
  time.sleep(waitingSpawnTime)