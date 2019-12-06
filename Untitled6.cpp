6)conditional op or ternary op
exp1?exp2:exp3;
----
if(exp1)
exp2;
else
exp3;
