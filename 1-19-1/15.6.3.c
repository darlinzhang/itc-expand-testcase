/*
From:ITC
15
Control flow defects
15.6
Loop and if bodies
15.6.3
Empty For Statement
*/
void loop_and_if_bodies_003()
{
    int i ;
    for (i=0;i<10;i++)                // empty for statement
    {/*Tool should detect this line as error*/ /*ERROR:control flow error*/
    }
}
