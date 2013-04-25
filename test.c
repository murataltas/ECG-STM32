unsigned char Buffercmp(u8* pBuffer1, u8* pBuffer2, u16 BufferLength)
{
  while(BufferLength--)
  {
    if(*pBuffer1 != *pBuffer2)
    {
      return 0;
    }
    
    pBuffer1++;
    pBuffer2++;
  }

  return 1;  
}
