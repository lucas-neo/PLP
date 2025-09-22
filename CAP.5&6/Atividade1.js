let x = 10; // global

function f() {
    console.log(x);
}

function g() {
    let x = 20;
    f();
}

g();
