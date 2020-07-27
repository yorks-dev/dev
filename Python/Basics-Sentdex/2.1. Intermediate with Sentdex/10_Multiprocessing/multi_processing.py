import multiprocessing, timeit

def spawn(num1):
    print("Spawned !! {}".format(num1))

if __name__ == "__main__":
    for i in range(10000):
        p = multiprocessing.Process(target=spawn, args=(i,))
        p.start()
    #    p.join()    # It makes the processes to wait for the prev one to start
        
# If join() is not used then CPU Usage will maxout to 100%
# --> Also when we print the value of 'i' and did not use join(), we see that they are 
#     not following any order, its because all of the processes are performed at once as long as the
#     CPU is not full