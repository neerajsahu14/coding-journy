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
select name from customers where customer_id <> (select custumer_id form order);

-- find employees who belong to the department 