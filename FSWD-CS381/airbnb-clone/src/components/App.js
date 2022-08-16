import React from 'react';
import './App.css';
import Home from './Home/Home';
import Header from './Header/Header';
import Footer from './Footer/Footer'
import SearchPage from './Search/SearchPage';

import { BrowserRouter as Router, Routes, Route } from "react-router-dom";

function App() {
  return (

    // BEM
    <div className="app">
      <Router>
        <Header />
        
        <Routes>
          <Route path="/search">
            <SearchPage />
          </Route>
          <Route path="/">
            <Home />
          </Route>
        </Routes>
        
        <Footer />
      </ Router>
    </div>
  );
}

export default App;