class Solution(object):

    
    def numberToWords(self, num):
        """
        :type num: int
        :rtype: str
        """
        d={0:"Zero", 1:"One", 2:"Two",3:"Three",4:"Four",5:"Five",6:"Six",7:"Seven",8:"Eight",9:"Nine",10:"Ten",11:"Eleven",12:"Twelve",13:"Thirteen",14:"Fourteen",15:"Fifteen",16:"Sixteen",17:"Seventeen",18:"Eighteen",19:"Nineteen",20:"Twenty",30:"Thirty",40:"Forty",50:"Fifty",60:"Sixty",70:"Seventy",80:"Eighty",90:"Ninety",100:"Hundred"}

        def get_words(n):
            if n<20:
                return d[n]
            elif n<100:
                return d[n//10 * 10] + ('' if n%10==0 else ' '+d[n%10])
            elif n<1000:
                return d[n//100] + " Hundred"+ ("" if n%100==0 else " "+get_words(n%100))
            elif n<1000000:
                return get_words(n//1000) + " Thousand"+ (""if n%1000==0 else " "+get_words(n%1000))
            elif n<1000000000:
                return get_words(n//1000000) + " Million" + (""if n%1000000==0 else " "+ get_words(n%1000000))
            else:
                return get_words(n//1000000000) + " Billion" + ("" if n%1000000000==0 else " "+get_words(n%1000000000))

        if num==0:
            return d[0]
        return get_words(num)

