//================= 객체 =================//

let bookOBJ = {
    name: "Nature of Code",
    price: 30000,
    author: "다니엘 쉬프만",
    isbn: "9788968481901",
    page: 620 
};

console.log(bookOBJ);



//================= 클래스 =================//

class Product
{
    constructor(name, weight, price)
    {
        this.name = name;
        this.weight = weight;
        this.price = price;
    }

    calculate(weight)
    {
        return (weight / this.weight) * this.price;
    }
}

let pork1 = new Product("돼지고기", 100, 1600);
console.log(pork1.calculate(200));



//================= for -> while =================//

//for(let i = 0; i < 10; i++) console.log("출력"); <-- 이걸 while로

let i = 0;
while(i < 10)
{
    console.log("출력");
    i++;
}



//================= 별찍기-피라미드 =================//

let num1 = 3;
let output = "";
for(let i = 0; i < num1; i++) 
{
    for(let l = i; l < num1 - 1; l++) output += " ";
    for(let l = 0; l < i * 2 + 1; l++) output += "*";
    output += "\n";
}

console.log(output);



//================= for of -> for in =================//

let arr1 = [52, 273, 32, 93, 103];

//for(let i of arr1) console.log(i);
for(let i in arr1) console.log(arr1[i]);



//================= max and min =================//

let min = arr1[0], max = arr1[0];
for(let i of arr1)
{
    if(i < min) min = i;
    if(i > max) max = i;
}
console.log(`최댓값: ${max}\n최솟값: ${min}`);



//================= reverse output =================//

let arr2 = [52, 71, 32, 103, 273, 93];
for(let i = arr2.length; i >= 0; i--) console.log(arr2[i]);



//================= check output results =================//

function test1(a, b, c)
{
    console.log(a); // 10
    console.log(a * b); // 1000
    console.log(a * b * c); // NaN
}

test1(10, 100);



//================= power and multiply =================//

function power(x, y)
{
    return (!y) ? x ** x: x ** y;
}

function multiply(...args)
{
    let output = 1;
    for(let i of args) output *= i;
    return output;
}

console.log(`case1: ${power(2)}\ncase2: ${power(2, 3)}\ncase3: ${multiply(1, 2, 3, 4, 5)}`);



//================= "this" =================//

// 아 시발 모르겠다;; 제발 안쳐나오기를



//================= if calculate =================//

function test2(n1, n2)
{
    if(n1 > 4)
    {
        if(n2 > 2) console.log(n1 * n2);
        else console.log();
    }
}
console.log(test2(2, 10), test2(1, 4), test2(10, 2));



//================= if -> switch =================//

//let level = prompt("값을 입력☆(1~4)");
let level = 1;
// if(level == 1) console.log("수강해야하는 전공 학점: 12학점");
// else if(level == 2) console.log("수강해야하는 전공 학점: 18학점");
// else if(level == 3) console.log("수강해야하는 전공 학점: 10학점");
// else if(level == 4) console.log("수강해야하는 전공 학점: 18학점");
// else console.log("그. 없.");

switch(Number(level))
{
    case 1:
        document.write("수강해야하는 전공 학점: 12학점");
        break;
    case 2:
        document.write("수강해야하는 전공 학점: 18학점");
        break;
    case 3:
        document.write("수강해야하는 전공 학점: 10학점");
        break;
    case 4:
        document.write("수강해야하는 전공 학점: 18학점");
        break;
    default:
        document.write("값을 잘못 입력하셨습니다!!!");
        break;
}
document.write("<br><br>");


//================= array type checking =================//

let arr3 = [];
console.log(`typeof: ${typeof arr3}\nArray.isArray: ${Array.isArray(arr3)}\ninstanceof: ${arr3 instanceof Array}\n`);



//================= fill array data =================//

function fillArrData(n)
{
    var arr = [];
    for (var i = 1; i <= n; i++) arr.push(i);
    return arr;
}
var arrData = fillArrData(6);

console.log(`arrData: ${arrData}`);



//================= array space delete =================//

// arrayname.length = 0;



//================= factorial button =================//

document.write(`<input id = "factoInput" type = "text">&nbsp;`);
document.write(`<button type = "button" onclick = "getNumber()">팩토리얼 계산☆</button><p id = "sysAnswer"></p>`);


function factorialCal(num)
{
    let factorial =1;
    for(let i = 1; i <= num; i++) factorial *= i;
    return `${num}! 계산 결과는 ${factorial}입니다.`;
}

function getNumber()
{
    var num = document.getElementById("factoInput").value;
    document.getElementById("sysAnswer").innerHTML = factorialCal(num);
}



//================= multiplication tables =================//

const createDataButton = `<br><button type="button" onclick="printData()">구구단 배열 데이터 보기</button>`;
const createBackButton = `<br><button><a href='index.html' style='color: black; text-decoration: none;'>돌아가기</a></button>`;

const table = Array.from({ length: 9 }, (_, row) => 
    Array.from({ length: 9 }, (_, col) => (row + 1) * (col + 1)));

    document.write("<table border=1>");

    for (let x = 1; x <= 9; x++)
        document.write(`<td><b>${x}단</b></td>`);

    for (let x = 1; x <= 9; x++) 
    {
        document.write("<tr>");
        for (let y = 1; y <= 9; y++)
            document.write(`<td>${y}*${x}=${table[x - 1][y - 1]}</td>`);
        document.write("</tr>");
    }
    document.write("</table>");

    function printData()
    {
        for (const row of table)
            document.write(row.join(" ") + "<br/>");
        document.write(createBackButton);
    }

    document.write(createDataButton);




//================= login event (button) =================//

document.write(`<br><br><button type = "button" onclick = "loginEV()">로긴</button>`);
function loginEV() {
    var id = prompt('아이디를 입력해주세요.');
    var password = prompt('비밀번호를 입력해주세요.');
    var locLogin = "login.html", locError = "error.html";
    let loginList = ["std01", "1111", "std02", "2222", "std03", "3333"];

    return location.href = (loginList.some((value, index) => 
        index % 2 === 0 && value === id && loginList[index + 1] === password)) ? locLogin: locError;
}



//================= odd even check =================//

let arrs = [52, 15, 70, 48, 10, 31, 5, 29, 63, 88];
function odd_even_reader(arr)
{
    let odd = [];
    let even = [];
    for(let num of arr)
        num % 2 == 0 ? even.push(num): odd.push(num);
    return `홀수: ${odd} :: 총${odd.length}\n짝수: ${even} :: 총${even.length}`;    
}

console.log(odd_even_reader(arrs));



//================= max and min 2 =================//

console.log(`최댓값: ${Math.max(...arrs)}\n최솟값: ${Math.min(...arrs)}`);



//================= input multiplication  =================//

document.write(`<br><br>`);
let num2 = prompt("출력할 구구단 입력:");
for(let i = 1; i <= 9; i++) document.write(`${num2}*${i}=${num2*i}<br>`);
document.write("수고하셨스므니다!!!!");



//================= insert array =================//

let arrT = ["서울", "부산", "광주", "대구", "인천"];
arrT.push("대전", "청주");
console.log(arrT);



//================= sort array =================//

arrT.pop();
arrT.sort();
console.log(arrT);