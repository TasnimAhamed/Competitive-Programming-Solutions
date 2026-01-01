class Solution {
public:
    string intToRoman(int num) {
        string ans;

        while(num > 0){
            if( num >= 1000){
                int tmp = num/1000;
                num %= 1000;
                while(tmp--){
                    ans += "M";
                }
            }
            else if(num >= 900){
                ans += "CM";
                num %= 900;
            }
            else if(num >= 500){
                ans += "D";
                num %= 500;
            }
            else if(num >= 400){
                ans += "CD";
                num %= 400;
            }
            else if(num >= 100){
                int tmp = num/100;
                while(tmp--){
                    ans += "C";
                }
                num %= 100;
            }
            else if( num >= 90){
                ans += "XC";
                num %= 90;
            }
            else if(num  >= 50){
                ans += "L";
                num %= 50;
            }
            else if(num >= 40){
                ans += "XL";
                num %= 40;
            }
            else if(num >= 10){
                int tmp = num/10;
                while(tmp--){
                    ans += "X";
                }
                num %= 10;
            }
            else if(num >= 9){
                ans+= "IX";
                num %= 9;
            }
            else if(num>= 5){
                ans += "V";
                num %= 5;
            }
            else if(num >= 4){
                ans += "IV";
                num %= 4;
            }
            else{
                while(num-- ){
                    ans += "I";
                }
            }
        }

        return ans;
    }
};

/*
    Another solution:


    class Solution {
    public:
        string intToRoman(int num) {
            string ans;
            int nums[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
            string roman[]={"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

            for(int i = 0; i < 13; i++){
                while(num >= nums[i]){
                    ans += roman[i];
                    num -= nums[i];
                }
            }        

            return ans;
        }
    };


*/