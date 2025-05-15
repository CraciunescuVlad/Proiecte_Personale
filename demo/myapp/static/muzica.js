function resizeMiddle(action) {
    const left = document.querySelector('.left');
    const middle = document.querySelector('.middle');
    const right = document.querySelector('.right');

    let middleFlex = parseFloat(getComputedStyle(middle).flexGrow);
    let leftFlex = parseFloat(getComputedStyle(left).flexGrow);
    let rightFlex = parseFloat(getComputedStyle(right).flexGrow);

    if (action === 'increase' && middleFlex < 4 && leftFlex > 0.5 && rightFlex > 0.5) {
        middle.style.flexGrow = (middleFlex + 0.5).toFixed(1);
        left.style.flexGrow = (leftFlex - 0.25).toFixed(1);
        right.style.flexGrow = (rightFlex - 0.25).toFixed(1);
    } else if (action === 'decrease' && middleFlex > 1) {
        middle.style.flexGrow = (middleFlex - 0.5).toFixed(1);
        left.style.flexGrow = (leftFlex + 0.25).toFixed(1);
        right.style.flexGrow = (rightFlex + 0.25).toFixed(1);
    }
}