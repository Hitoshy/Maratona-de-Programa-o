import numpy as np
x = np.array([9, 3, 4, 4, 0])
bool_x = x == 7
print(bool_x) #F F F F F
x = np.array([7, 3, 4, 7, 0])
bool_x = x == 7
print(bool_x) #T F F T F