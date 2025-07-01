let display = document.querySelector("#display");
function sinf() {
    display.value = Math.sin(display.value).toFixed(9);
}
function cosf() {
    display.value = Math.cos(display.value).toFixed(9);
}
function tanf() {
    display.value = Math.tan(display.value).toFixed(9);
}
function sqrf() {
    display.value = Math.sqrt(display.value).toFixed(9);
}