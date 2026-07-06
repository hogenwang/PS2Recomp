#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00204D20
// Address: 0x204d20 - 0x204f50
void sub_00204D20_0x204d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204D20_0x204d20");
#endif

    switch (ctx->pc) {
        case 0x204d2cu: goto label_204d2c;
        case 0x204d64u: goto label_204d64;
        case 0x204d8cu: goto label_204d8c;
        case 0x204db4u: goto label_204db4;
        case 0x204decu: goto label_204dec;
        case 0x204e34u: goto label_204e34;
        case 0x204e6cu: goto label_204e6c;
        case 0x204eb4u: goto label_204eb4;
        case 0x204eecu: goto label_204eec;
        case 0x204f34u: goto label_204f34;
        default: break;
    }

    ctx->pc = 0x204d20u;

    // 0x204d20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x204d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x204d24: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x204d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x204d28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x204d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_204d2c:
    // 0x204d2c: 0x2442a1a0  addiu       $v0, $v0, -0x5E60
    ctx->pc = 0x204d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943136));
    // 0x204d30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x204d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x204d34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x204d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x204d38: 0x309200ff  andi        $s2, $a0, 0xFF
    ctx->pc = 0x204d38u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x204d3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x204d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x204d40: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x204d40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204d44: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x204d44u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x204d48: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x204d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204d4c: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x204d4cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x204d50: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x204d50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x204d54: 0x24c69f74  addiu       $a2, $a2, -0x608C
    ctx->pc = 0x204d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942580));
    // 0x204d58: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x204d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x204d5c: 0xc081120  jal         func_204480
    ctx->pc = 0x204D5Cu;
    SET_GPR_U32(ctx, 31, 0x204D64u);
    ctx->pc = 0x204D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204D5Cu;
    // 0x204d60: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204480u, 0x204D5Cu, 0x204D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204D64u;
label_204d64:
    // 0x204d64: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x204d64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x204d68: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x204d68u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x204d6c: 0x2484a1a4  addiu       $a0, $a0, -0x5E5C
    ctx->pc = 0x204d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943140));
    // 0x204d70: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x204d70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x204d74: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x204d74u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x204d78: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x204d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x204d7c: 0x94850002  lhu         $a1, 0x2($a0)
    ctx->pc = 0x204d7cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x204d80: 0x24c69f74  addiu       $a2, $a2, -0x608C
    ctx->pc = 0x204d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942580));
    // 0x204d84: 0xc081120  jal         func_204480
    ctx->pc = 0x204D84u;
    SET_GPR_U32(ctx, 31, 0x204D8Cu);
    ctx->pc = 0x204D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204D84u;
    // 0x204d88: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204480u, 0x204D84u, 0x204D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204D8Cu;
label_204d8c:
    // 0x204d8c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x204d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x204d90: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x204d90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x204d94: 0x2484a1a8  addiu       $a0, $a0, -0x5E58
    ctx->pc = 0x204d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943144));
    // 0x204d98: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x204d98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x204d9c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x204d9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x204da0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x204da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x204da4: 0x94850002  lhu         $a1, 0x2($a0)
    ctx->pc = 0x204da4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x204da8: 0x24c69f74  addiu       $a2, $a2, -0x608C
    ctx->pc = 0x204da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942580));
    // 0x204dac: 0xc081120  jal         func_204480
    ctx->pc = 0x204DACu;
    SET_GPR_U32(ctx, 31, 0x204DB4u);
    ctx->pc = 0x204DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204DACu;
    // 0x204db0: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204480u, 0x204DACu, 0x204DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204DB4u;
label_204db4:
    // 0x204db4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x204db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x204db8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x204db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x204dbc: 0x242001a  div         $zero, $s2, $v0
    ctx->pc = 0x204dbcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x204dc0: 0x2463a1b8  addiu       $v1, $v1, -0x5E48
    ctx->pc = 0x204dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943160));
    // 0x204dc4: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x204dc4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x204dc8: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x204dc8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x204dcc: 0x3010  mfhi        $a2
    ctx->pc = 0x204dccu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x204dd0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x204dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x204dd4: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x204dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x204dd8: 0x24429c80  addiu       $v0, $v0, -0x6380
    ctx->pc = 0x204dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941824));
    // 0x204ddc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x204ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x204de0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x204de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x204de4: 0xc081120  jal         func_204480
    ctx->pc = 0x204DE4u;
    SET_GPR_U32(ctx, 31, 0x204DECu);
    ctx->pc = 0x204DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204DE4u;
    // 0x204de8: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204480u, 0x204DE4u, 0x204DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204DECu;
label_204dec:
    // 0x204dec: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x204decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x204df0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x204df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x204df4: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x204df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x204df8: 0x2463a1ac  addiu       $v1, $v1, -0x5E54
    ctx->pc = 0x204df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943148));
    // 0x204dfc: 0x520018  mult        $zero, $v0, $s2
    ctx->pc = 0x204dfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x204e00: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x204e00u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x204e04: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x204e04u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x204e08: 0x1237c2  srl         $a2, $s2, 31
    ctx->pc = 0x204e08u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x204e0c: 0x1810  mfhi        $v1
    ctx->pc = 0x204e0cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x204e10: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x204e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x204e14: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x204e14u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x204e18: 0x24429c80  addiu       $v0, $v0, -0x6380
    ctx->pc = 0x204e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941824));
    // 0x204e1c: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x204e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x204e20: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x204e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x204e24: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x204e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x204e28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x204e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x204e2c: 0xc081120  jal         func_204480
    ctx->pc = 0x204E2Cu;
    SET_GPR_U32(ctx, 31, 0x204E34u);
    ctx->pc = 0x204E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204E2Cu;
    // 0x204e30: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204480u, 0x204E2Cu, 0x204E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204E34u;
label_204e34:
    // 0x204e34: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x204e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x204e38: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x204e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x204e3c: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x204e3cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x204e40: 0x2463a1bc  addiu       $v1, $v1, -0x5E44
    ctx->pc = 0x204e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943164));
    // 0x204e44: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x204e44u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x204e48: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x204e48u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x204e4c: 0x3010  mfhi        $a2
    ctx->pc = 0x204e4cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x204e50: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x204e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x204e54: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x204e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x204e58: 0x24429c80  addiu       $v0, $v0, -0x6380
    ctx->pc = 0x204e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941824));
    // 0x204e5c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x204e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x204e60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x204e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x204e64: 0xc081120  jal         func_204480
    ctx->pc = 0x204E64u;
    SET_GPR_U32(ctx, 31, 0x204E6Cu);
    ctx->pc = 0x204E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204E64u;
    // 0x204e68: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204480u, 0x204E64u, 0x204E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204E6Cu;
label_204e6c:
    // 0x204e6c: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x204e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x204e70: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x204e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x204e74: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x204e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x204e78: 0x2463a1b0  addiu       $v1, $v1, -0x5E50
    ctx->pc = 0x204e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943152));
    // 0x204e7c: 0x510018  mult        $zero, $v0, $s1
    ctx->pc = 0x204e7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x204e80: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x204e80u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x204e84: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x204e84u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x204e88: 0x1137c2  srl         $a2, $s1, 31
    ctx->pc = 0x204e88u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
    // 0x204e8c: 0x1810  mfhi        $v1
    ctx->pc = 0x204e8cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x204e90: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x204e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x204e94: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x204e94u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x204e98: 0x24429c80  addiu       $v0, $v0, -0x6380
    ctx->pc = 0x204e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941824));
    // 0x204e9c: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x204e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x204ea0: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x204ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x204ea4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x204ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x204ea8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x204ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x204eac: 0xc081120  jal         func_204480
    ctx->pc = 0x204EACu;
    SET_GPR_U32(ctx, 31, 0x204EB4u);
    ctx->pc = 0x204EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204EACu;
    // 0x204eb0: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204480u, 0x204EACu, 0x204EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204EB4u;
label_204eb4:
    // 0x204eb4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x204eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x204eb8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x204eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x204ebc: 0x202001a  div         $zero, $s0, $v0
    ctx->pc = 0x204ebcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x204ec0: 0x2463a1c0  addiu       $v1, $v1, -0x5E40
    ctx->pc = 0x204ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943168));
    // 0x204ec4: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x204ec4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x204ec8: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x204ec8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x204ecc: 0x3010  mfhi        $a2
    ctx->pc = 0x204eccu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x204ed0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x204ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x204ed4: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x204ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x204ed8: 0x24429c80  addiu       $v0, $v0, -0x6380
    ctx->pc = 0x204ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941824));
    // 0x204edc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x204edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x204ee0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x204ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x204ee4: 0xc081120  jal         func_204480
    ctx->pc = 0x204EE4u;
    SET_GPR_U32(ctx, 31, 0x204EECu);
    ctx->pc = 0x204EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204EE4u;
    // 0x204ee8: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204480u, 0x204EE4u, 0x204EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204EECu;
label_204eec:
    // 0x204eec: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x204eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x204ef0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x204ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x204ef4: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x204ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x204ef8: 0x2463a1b4  addiu       $v1, $v1, -0x5E4C
    ctx->pc = 0x204ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943156));
    // 0x204efc: 0x500018  mult        $zero, $v0, $s0
    ctx->pc = 0x204efcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x204f00: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x204f00u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x204f04: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x204f04u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x204f08: 0x1037c2  srl         $a2, $s0, 31
    ctx->pc = 0x204f08u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x204f0c: 0x1810  mfhi        $v1
    ctx->pc = 0x204f0cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x204f10: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x204f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x204f14: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x204f14u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x204f18: 0x24429c80  addiu       $v0, $v0, -0x6380
    ctx->pc = 0x204f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941824));
    // 0x204f1c: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x204f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x204f20: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x204f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x204f24: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x204f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x204f28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x204f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x204f2c: 0xc081120  jal         func_204480
    ctx->pc = 0x204F2Cu;
    SET_GPR_U32(ctx, 31, 0x204F34u);
    ctx->pc = 0x204F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F2Cu;
    // 0x204f30: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204480u, 0x204F2Cu, 0x204F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F34u;
label_204f34:
    // 0x204f34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x204f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x204f38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x204f38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204f3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x204f3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204f40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x204f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204f44: 0x3e00008  jr          $ra
    ctx->pc = 0x204F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F44u;
        // 0x204f48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204F4Cu;
    // 0x204f4c: 0x0  nop
    ctx->pc = 0x204f4cu;
    // NOP
    if (ctx->pc == 0x204f4cu) { ctx->pc = 0x204f50u; }
}
