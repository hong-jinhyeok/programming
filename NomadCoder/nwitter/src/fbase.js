import firebase from "firebase/app";
import "firebase/auth";
import "firebase/firestore";
import "firebase/storage";

const firebaseConfig = {
    apiKey: "AIzaSyCx2qmrMXtr35Cn_RiCf-Q4w9C3kqEcSvY",
    authDomain: "nwitter-3e379.firebaseapp.com",
    projectId: "nwitter-3e379",
    storageBucket: "nwitter-3e379.appspot.com",
    messagingSenderId: "216139107559",
    appId: "1:216139107559:web:2a6e8b425b21f0d7ba6642"
};

firebase.initializeApp(firebaseConfig);
export const firebaseInstance = firebase;
export const authService = firebase.auth();
export const dbService = firebase.firestore();
export const storageService = firebase.storage();