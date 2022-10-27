for  in range(int(input())):
        n=int(input())
        arr=input()
        list =[]
        tmp=""
        flag=True
        list=list(arr.split('W'))
        for item in list:
                if(item):
                    if(('B' not in item)or('R' not in item)):
                        flag = False
                        break
        if(not flag):
            print('NO')
        else:
            print('YES')