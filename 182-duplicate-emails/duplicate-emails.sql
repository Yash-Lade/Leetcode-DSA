
SELECT email
FROM Person
GROUP BY email
HAVING COUNT(DISTINCT id) > 1 # here distinct ain't necessary as id is primary key
# it will keep only those id whose count is more than one