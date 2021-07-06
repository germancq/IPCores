'''
 # @ Author: German Cano Quiveu, germancq
 # @ Create Time: 2021-05-03 12:41:32
 # @ Modified by: Your name
 # @ Modified time: 2021-05-03 12:41:59
 # @ Description:
 '''
import sys
import os
import itertools
import re
from pwd import getpwnam  


home = os.getenv("HOME")

def _read(fn, *args):
    kwargs = {'encoding': 'iso-8859-1'}
    with open(fn, *args, **kwargs) as f:
        return f.read()

def main():
    '''
        parameters
            param1 : results.xml
            param2 : output.txt
    '''     
    
    pattern_time = r'\s+time=\"\d+\.\d+\"'
    
    total_time = 0
    with(open(sys.argv[1],"r")) as input_file:
        with(open(sys.argv[2],"w")) as output_file:
            lines = input_file.readlines()
            for line in lines:
                matches = re.findall(pattern_time,line)
                if(len(matches) > 0): 
                    match = re.sub(r'\"','',matches[0])
                    match = re.sub(r'=','',match)
                    match = re.sub(r'[a-z]+','',match)
                    output_file.write(match+'\n')
                    total_time = total_time + float(match)
                    
    print(total_time)

if __name__ == "__main__":
    main()
