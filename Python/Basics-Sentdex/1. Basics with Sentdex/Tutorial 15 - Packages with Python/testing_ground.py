'''
import examplemod as mod           # Here we have to used object.function() format
mod.do_a_thing()                 
'''

from mod_dir.examplemod import do_a_thing, do_another_thing    # Here we have to used object.function() format
# thr examplemod.py is in directory mod_dir  --> this is basically working with modules


do_a_thing()
do_another_thing()
