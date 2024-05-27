import Navbar from "./Components/Navbar"
import Footer from "./Components/Footer"
import Card from "./Components/Card"
function App() {

  return (
    <>
      <Navbar />
      <div style={{display:"flex"}} >
        <Card title = "i am 1" />
       
      </div>
      
      
      <Footer />
    </>
  )
}

export default App
