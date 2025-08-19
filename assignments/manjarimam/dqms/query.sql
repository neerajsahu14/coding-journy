-- 1.This query selects the names of employees who joined after the year 2020 and have a salary greater than 50,000, ordering the results by their hire date.
select name form employees where joining_date > 2020 and salary >50000 order by hire_date; 

-- 2. find products whose price is b/w 500 -1500, and display name in upercase
select upercase(name) form products where price between 500 and 1500;

-- 3. show custumer names along with the lenght of thier names who is from delhi
select name, length(name) from customers where city = 'Delhi';

-- 4. Display employee names and thier salary increased by 10%.
select name, salary * 1.10 as increased_salary from employees;

-- 5. display department department id and total salary paid in each department
select department_id, sum(salary) from employee group by department_id;

-- 6. find departments having average salary greater than 60000
select department_id from employees group by department_id having avg(salary) > 60000;

-- 7. display product category and number of products in each category
select category, count(*) form products group by category;

-- 8. display cities having more then 5 coustumer
select city form coustumer group by city having count(*) >5;

-- 9. display employees who having salary more the avrage salary of all employees
select name from employees where salary > (select avg(salary) from employees);

-- 10. find product(s) with the highest price.
select name from products where price = (select max(price) from products);

-- 11. select all customers who never placed any order
select name from customers where
customer_id != (select custumer_id form order group by customer_id);
select name form customers c left join order o on c.customer_id = o.customer_id where o.customer_id is null;
select name from customers not in(select custumer from order);

-- 12. find employees who belong to the department with minimum total salary paid
select name from employee 
group by department_id =
 (select department_id from employee group by department_id order by sum(salary) limit 1);

-- 13. display employeeId, name, and numbers olf year they have worked(use current date)
select id, name, DATEDIFF(current_date,joining_date)/365 form employee;

-- 14. fingf custumers whose name starts with 'A' and end with 'n'
select * from coustumers where name like "A%n";

-- 15. display total sales amount for each product 
select product_name, amount from sales where sales_date ='2025-07-01';
select product_name, sum(amount) from sales where sales_date = '2025-07-01' group by product_name;

-- 16. show the maximum,minimum and avg amount of all orders
select avg(amount), minimum(amount),max(amount) form order;

-- 17. diplay the names of product sold more then 50 times(use Sales table)
select product_name form sales order by product_name having count(*) > 50;

-- 18. display the employees who have salary more then average salary.
select * from employee where salary > (select)

-- find the highest paid employee from each department
SELECT *
FROM employees
WHERE (department_id, salary) IN (
    SELECT department_id, MAX(salary)
    FROM employees
    GROUP BY department_id
);

--  find the second highest salary in the employee table.

select * FROM employee salary IN (select salary from order by Desc limit 2 offset 1);

--  find the thirth highest salary in the employee table.

select * FROM employee salary IN (select salary from order by Desc limit 3 offset 2);

-- display employees whose salary  is greater then salary 'Amit'
select * from employee salary > (select salary from employee where name in 'Amit');

--  display emplioyees whose department located in 'delhi'.
select * 
from employee 
where department_id IN (
    select department_id from employee
    where localtion = 'Delhi' group by department_id);

select * department
