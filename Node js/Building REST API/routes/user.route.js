const express = require(`express`)
const { handleAllUser , handleGetUserById , handleCreateUser } = require('../controllers/user.controller.js')

const router = express.Router();


router.route('/').get(handleAllUser);
router.route('/:id').get(handleGetUserById);
router.route('/').post(handleCreateUser);

module.exports = router