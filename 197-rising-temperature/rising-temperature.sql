# Write your MySQL query statement below

SELECT w1.id as Id
FROM Weather w1
INNER JOIN Weather w2
WHERE DATEDIFF(w1.recordDate, w2.recordDate) = 1 # it calcualtes the diff b/w any two given dates
AND w1.temperature > w2.temperature   
