if(Serial.available()>0)  //وجود دیتا در پنل
{
 char incominByte=Serial.read();  //خواندن کاراکتر پنل 
 if( incominByte =='h‌‌‌‌') //چک کردن اینکه h  کاراکتر هست.
{
  digitalWrite (ledPin,HIGH); //دستور روشن کردن led
}
else if ( incominByte =='l')   >>چک کردن ال کاراکتر بودن
{
  digitalWrite (ledPin,LOW); دستور خاموش شدن 
    }
   }
}