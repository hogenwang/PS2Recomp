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

// Function: sub_001E5D18
// Address: 0x1e5d18 - 0x1e5ed0
void sub_001E5D18_0x1e5d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5D18_0x1e5d18");
#endif

    switch (ctx->pc) {
        case 0x1e5d34u: goto label_1e5d34;
        case 0x1e5d40u: goto label_1e5d40;
        case 0x1e5d58u: goto label_1e5d58;
        case 0x1e5d70u: goto label_1e5d70;
        case 0x1e5dd8u: goto label_1e5dd8;
        case 0x1e5df4u: goto label_1e5df4;
        case 0x1e5e40u: goto label_1e5e40;
        case 0x1e5e70u: goto label_1e5e70;
        case 0x1e5e98u: goto label_1e5e98;
        case 0x1e5ec0u: goto label_1e5ec0;
        default: break;
    }

    ctx->pc = 0x1e5d18u;

    // 0x1e5d18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e5d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e5d1c: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x1e5d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1e5d20: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e5d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e5d24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e5d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5d28: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e5d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e5d2c: 0xc078a20  jal         func_1E2880
    ctx->pc = 0x1E5D2Cu;
    SET_GPR_U32(ctx, 31, 0x1E5D34u);
    ctx->pc = 0x1E5D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5D2Cu;
    // 0x1e5d30: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2880u, 0x1E5D2Cu, 0x1E5D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5D34u;
label_1e5d34:
    // 0x1e5d34: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1e5d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1e5d38: 0xc07f2a8  jal         func_1FCAA0
    ctx->pc = 0x1E5D38u;
    SET_GPR_U32(ctx, 31, 0x1E5D40u);
    ctx->pc = 0x1E5D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5D38u;
    // 0x1e5d3c: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCAA0u, 0x1E5D38u, 0x1E5D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5D40u;
label_1e5d40:
    // 0x1e5d40: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1e5d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e5d44: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E5D44u;
    {
        const bool branch_taken_0x1e5d44 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1E5D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D44u;
        // 0x1e5d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5d44) {
            ctx->pc = 0x1E5D68u;
            goto label_1e5d68;
        }
    }
    ctx->pc = 0x1E5D4Cu;
    // 0x1e5d4c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e5d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e5d50: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E5D50u;
    SET_GPR_U32(ctx, 31, 0x1E5D58u);
    ctx->pc = 0x1E5D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5D50u;
    // 0x1e5d54: 0x2484e438  addiu       $a0, $a0, -0x1BC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E5D50u, 0x1E5D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5D58u;
label_1e5d58:
    // 0x1e5d58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e5d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e5d5c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e5d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5d60: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1E5D60u;
    {
        const bool branch_taken_0x1e5d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D60u;
        // 0x1e5d64: 0xae030500  sw          $v1, 0x500($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5d60) {
            ctx->pc = 0x1E5DC4u;
            goto label_1e5dc4;
        }
    }
    ctx->pc = 0x1E5D68u;
label_1e5d68:
    // 0x1e5d68: 0xc077f68  jal         func_1DFDA0
    ctx->pc = 0x1E5D68u;
    SET_GPR_U32(ctx, 31, 0x1E5D70u);
    ctx->pc = 0x1DFDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFDA0u, 0x1E5D68u, 0x1E5D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5D70u;
label_1e5d70:
    // 0x1e5d70: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x1e5d70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1e5d74: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1e5d74u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1e5d78: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1e5d78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e5d7c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1e5d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1e5d80: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1e5d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e5d84: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1e5d84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1e5d88: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x1e5d88u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e5d8c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E5D8Cu;
    {
        const bool branch_taken_0x1e5d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5d8c) {
            ctx->pc = 0x1E5D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5D8Cu;
            // 0x1e5d90: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5D94u;
            goto label_1e5d94;
        }
    }
    ctx->pc = 0x1E5D94u;
label_1e5d94:
    // 0x1e5d94: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e5d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5d98: 0x2012  mflo        $a0
    ctx->pc = 0x1e5d98u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1e5d9c: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x1e5d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1e5da0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1e5da0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e5da4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e5da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e5da8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e5da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e5dac: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1e5dacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e5db0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1e5db0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1e5db4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1e5db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e5db8: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x1e5db8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x1e5dbc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1e5dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1e5dc0: 0xae020500  sw          $v0, 0x500($s0)
    ctx->pc = 0x1e5dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1280), GPR_U32(ctx, 2));
label_1e5dc4:
    // 0x1e5dc4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e5dc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5dc8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e5dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e5dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5DCCu;
        // 0x1e5dd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5DD4u;
    // 0x1e5dd4: 0x0  nop
    ctx->pc = 0x1e5dd4u;
    // NOP
label_1e5dd8:
    // 0x1e5dd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e5dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e5ddc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e5ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5de0: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1e5de0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1e5de4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e5de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e5de8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e5de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e5dec: 0xc078ba4  jal         func_1E2E90
    ctx->pc = 0x1E5DECu;
    SET_GPR_U32(ctx, 31, 0x1E5DF4u);
    ctx->pc = 0x1E5DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5DECu;
    // 0x1e5df0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E90u, 0x1E5DECu, 0x1E5DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5DF4u;
label_1e5df4:
    // 0x1e5df4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1e5df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e5df8: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x1e5df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1e5dfc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e5dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5e00: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e5e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e5e04: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E5E04u;
    {
        const bool branch_taken_0x1e5e04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5e04) {
            ctx->pc = 0x1E5E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5E04u;
            // 0x1e5e08: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5E0Cu;
            goto label_1e5e0c;
        }
    }
    ctx->pc = 0x1E5E0Cu;
label_1e5e0c:
    // 0x1e5e0c: 0x8e020500  lw          $v0, 0x500($s0)
    ctx->pc = 0x1e5e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x1e5e10: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x1e5e10u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e5e14: 0x1812  mflo        $v1
    ctx->pc = 0x1e5e14u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1e5e18: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x1e5e18u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e5e1c: 0x1012  mflo        $v0
    ctx->pc = 0x1e5e1cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1e5e20: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1e5e20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e5e24: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E5E24u;
    {
        const bool branch_taken_0x1e5e24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5e24) {
            ctx->pc = 0x1E5E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5E24u;
            // 0x1e5e28: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5E4Cu;
            goto label_1e5e4c;
        }
    }
    ctx->pc = 0x1E5E2Cu;
    // 0x1e5e2c: 0x8e0204ec  lw          $v0, 0x4EC($s0)
    ctx->pc = 0x1e5e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1260)));
    // 0x1e5e30: 0x54460006  bnel        $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E5E30u;
    {
        const bool branch_taken_0x1e5e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1e5e30) {
            ctx->pc = 0x1E5E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5E30u;
            // 0x1e5e34: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5E4Cu;
            goto label_1e5e4c;
        }
    }
    ctx->pc = 0x1E5E38u;
    // 0x1e5e38: 0xc079536  jal         func_1E54D8
    ctx->pc = 0x1E5E38u;
    SET_GPR_U32(ctx, 31, 0x1E5E40u);
    ctx->pc = 0x1E5E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5E38u;
    // 0x1e5e3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E54D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E54D8u, 0x1E5E38u, 0x1E5E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5E40u;
label_1e5e40:
    // 0x1e5e40: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e5e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e5e44: 0xae0204ec  sw          $v0, 0x4EC($s0)
    ctx->pc = 0x1e5e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1260), GPR_U32(ctx, 2));
    // 0x1e5e48: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e5e48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e5e4c:
    // 0x1e5e4c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e5e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e5e50: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E50u;
        // 0x1e5e54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5E58u;
    // 0x1e5e58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e5e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e5e5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e5e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5e60: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1e5e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1e5e64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e5e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e5e68: 0xc0797b4  jal         func_1E5ED0
    ctx->pc = 0x1E5E68u;
    SET_GPR_U32(ctx, 31, 0x1E5E70u);
    ctx->pc = 0x1E5E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5E68u;
    // 0x1e5e6c: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5ED0u, 0x1E5E68u, 0x1E5E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5E70u;
label_1e5e70:
    // 0x1e5e70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e5e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5e74: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E74u;
        // 0x1e5e78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5E7Cu;
    // 0x1e5e7c: 0x0  nop
    ctx->pc = 0x1e5e7cu;
    // NOP
    // 0x1e5e80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e5e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e5e84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e5e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5e88: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1e5e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1e5e8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e5e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e5e90: 0xc0797b4  jal         func_1E5ED0
    ctx->pc = 0x1E5E90u;
    SET_GPR_U32(ctx, 31, 0x1E5E98u);
    ctx->pc = 0x1E5E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5E90u;
    // 0x1e5e94: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5ED0u, 0x1E5E90u, 0x1E5E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5E98u;
label_1e5e98:
    // 0x1e5e98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e5e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E9Cu;
        // 0x1e5ea0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5EA4u;
    // 0x1e5ea4: 0x0  nop
    ctx->pc = 0x1e5ea4u;
    // NOP
    // 0x1e5ea8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e5ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e5eac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e5eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5eb0: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1e5eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1e5eb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e5eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e5eb8: 0xc0797c0  jal         func_1E5F00
    ctx->pc = 0x1E5EB8u;
    SET_GPR_U32(ctx, 31, 0x1E5EC0u);
    ctx->pc = 0x1E5EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5EB8u;
    // 0x1e5ebc: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5F00u, 0x1E5EB8u, 0x1E5EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5EC0u;
label_1e5ec0:
    // 0x1e5ec0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e5ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5EC4u;
        // 0x1e5ec8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5ECCu;
    // 0x1e5ecc: 0x0  nop
    ctx->pc = 0x1e5eccu;
    // NOP
}
