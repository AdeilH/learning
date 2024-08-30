def isEven(x: int):
    return x%2 == 0

def testPred(predicate, x: int):
    if predicate(x):
        print(True)
    else:
        print(False)

testPred(isEven, 2)
testPred(isEven, 5)

testPred(lambda x: x%2 != 0, 3)