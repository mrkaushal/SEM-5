import React from 'react';
import './App.css';
import logo from '../images/logo.svg';
import Navbar from './Navbar';
import { BrowserRouter, Route, Routes } from 'react-router-dom';

import Home from './Home/Home';
import About from './About/About';
import Contact from './Contact/Contact';

function App() {
  return (
    <div className="App">
      <BrowserRouter>
      <Navbar />
      <Routes>
          <Route exact path="/" element={<Home/>}/>
          <Route exact path="/about" element={<About/>}/>
          <Route exact path="/contact" element={<Contact/>}/>
        </Routes>
    </BrowserRouter>

      <header className="App-header">
        <img src={logo} className="App-logo" alt="logo" />
        <p>
          Edit <code>src/App.js</code> and save to reload.
        </p>
      </header>
    </div>

  );
}

export default App;