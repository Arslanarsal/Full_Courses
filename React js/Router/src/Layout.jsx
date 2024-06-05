import Header from "./components/Header/Header";
import Footer from "./components/Footer/Footer";
import { Outlet } from "react-router-dom";

function layout() {
  return (
    <div>
      <Header />
      <Outlet/>
      <Footer />
    </div>
  );
}

export default layout;
