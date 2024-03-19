
function customRender(reactElement, container) {
    // const domElement = document.createElement(reactElement.type);
    // domElement.innerHTML = reactElement.children;
    // domElement.setAttribute('href', reactElement.props.href);
    // domElement.setAttribute('target', reactElement.props.target)
    // container.appendChild(domElement);


    const domElement = document.createElement(reactElement.type);
    domElement.innerHTML = reactElement.children;
    for (const prop in reactElement.props) {
       
        domElement.setAttribute(prop, reactElement.props[prop]);
    }

    container.appendChild(domElement);


}


const reactElement = {
    type: 'a',
    props: {
        href: 'https://www.google.com',
        target: '_Blank'
    },
    children: 'Click me to go Google'
}

const mainContiner = document.querySelector(`#root`);


customRender(reactElement, mainContiner);