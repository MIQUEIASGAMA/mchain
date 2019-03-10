#include <util.h>
#include <validation.h>
#include <utilstrencodings.h>
#include <test/test_bitcoin.h>
#include <boost/filesystem/operations.hpp>
#include <fs.h>

extern std::unique_ptr<MchainState> globalState;

void initState();

CBlock generateBlock();

dev::Address createMchainAddress(dev::h256 hashTx, uint32_t voutNumber);

MchainTransaction createMchainTransaction(valtype data, dev::u256 value, dev::u256 gasLimit, dev::u256 gasPrice,
    dev::h256 hashTransaction, dev::Address recipient, int32_t nvout = 0);

std::pair<std::vector<ResultExecute>, ByteCodeExecResult> executeBC(std::vector<MchainTransaction> txs);
