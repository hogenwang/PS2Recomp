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

// Function: sub_001F1D00
// Address: 0x1f1d00 - 0x1f1e80
void sub_001F1D00_0x1f1d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1D00_0x1f1d00");
#endif

    switch (ctx->pc) {
        case 0x1f1d70u: goto label_1f1d70;
        case 0x1f1da8u: goto label_1f1da8;
        case 0x1f1e3cu: goto label_1f1e3c;
        default: break;
    }

    ctx->pc = 0x1f1d00u;

    // 0x1f1d00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f1d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f1d04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f1d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f1d08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f1d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f1d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f1d10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f1d10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f1d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f1d18: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1f1d18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d1c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f1d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f1d20: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1f1d20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d24: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1f1d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1f1d28: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1f1d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1f1d2c: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1f1d2cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d30: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1f1d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1f1d34: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x1f1d34u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d38: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f1d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f1d3c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f1d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1f1d40: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1f1d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1f1d44: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1f1d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1f1d48: 0xde230150  ld          $v1, 0x150($s1)
    ctx->pc = 0x1f1d48u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1f1d4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f1d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f1d50: 0x3c16003f  lui         $s6, 0x3F
    ctx->pc = 0x1f1d50u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)63 << 16));
    // 0x1f1d54: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x1f1d54u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1f1d58: 0x8ed6eb40  lw          $s6, -0x14C0($s6)
    ctx->pc = 0x1f1d58u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294961984)));
    // 0x1f1d5c: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F1D5Cu;
    {
        const bool branch_taken_0x1f1d5c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1F1D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1D5Cu;
        // 0x1f1d60: 0x8e750014  lw          $s5, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1d5c) {
            ctx->pc = 0x1F1D84u;
            goto label_1f1d84;
        }
    }
    ctx->pc = 0x1F1D64u;
    // 0x1f1d64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f1d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d68: 0xc07c7a0  jal         func_1F1E80
    ctx->pc = 0x1F1D68u;
    SET_GPR_U32(ctx, 31, 0x1F1D70u);
    ctx->pc = 0x1F1D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1D68u;
    // 0x1f1d6c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1E80u, 0x1F1D68u, 0x1F1D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D70u;
label_1f1d70:
    // 0x1f1d70: 0xde430000  ld          $v1, 0x0($s2)
    ctx->pc = 0x1f1d70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f1d74: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x1f1d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x1f1d78: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x1f1d78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1f1d7c: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1f1d7cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1f1d80: 0xfe230150  sd          $v1, 0x150($s1)
    ctx->pc = 0x1f1d80u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 336), GPR_U64(ctx, 3));
label_1f1d84:
    // 0x1f1d84: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x1f1d84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f1d88: 0x26140010  addiu       $s4, $s0, 0x10
    ctx->pc = 0x1f1d88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1f1d8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f1d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f1d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d94: 0x43882f  dsubu       $s1, $v0, $v1
    ctx->pc = 0x1f1d94u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x1f1d98: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1f1d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f1d9c: 0x2a220000  slti        $v0, $s1, 0x0
    ctx->pc = 0x1f1d9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1f1da0: 0xc049c22  jal         func_127088
    ctx->pc = 0x1F1DA0u;
    SET_GPR_U32(ctx, 31, 0x1F1DA8u);
    ctx->pc = 0x1F1DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1DA0u;
    // 0x1f1da4: 0x2880b  movn        $s1, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x1F1DA0u, 0x1F1DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1DA8u;
label_1f1da8:
    // 0x1f1da8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F1DA8u;
    {
        const bool branch_taken_0x1f1da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1DA8u;
        // 0x1f1dac: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1da8) {
            ctx->pc = 0x1F1DF0u;
            goto label_1f1df0;
        }
    }
    ctx->pc = 0x1F1DB0u;
    // 0x1f1db0: 0xde430000  ld          $v1, 0x0($s2)
    ctx->pc = 0x1f1db0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f1db4: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x1f1db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1f1db8: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1f1db8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x1f1dbc: 0xde420008  ld          $v0, 0x8($s2)
    ctx->pc = 0x1f1dbcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1f1dc0: 0xae150000  sw          $s5, 0x0($s0)
    ctx->pc = 0x1f1dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
    // 0x1f1dc4: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x1f1dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x1f1dc8: 0x14850005  bne         $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1DC8u;
    {
        const bool branch_taken_0x1f1dc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1F1DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1DC8u;
        // 0x1f1dcc: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1dc8) {
            ctx->pc = 0x1F1DE0u;
            goto label_1f1de0;
        }
    }
    ctx->pc = 0x1F1DD0u;
    // 0x1f1dd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f1dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1dd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1DD4u;
    {
        const bool branch_taken_0x1f1dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1DD4u;
        // 0x1f1dd8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1dd4) {
            ctx->pc = 0x1F1DE4u;
            goto label_1f1de4;
        }
    }
    ctx->pc = 0x1F1DDCu;
    // 0x1f1ddc: 0x0  nop
    ctx->pc = 0x1f1ddcu;
    // NOP
label_1f1de0:
    // 0x1f1de0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1f1de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1f1de4:
    // 0x1f1de4: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x1f1de4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f1de8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F1DE8u;
    {
        const bool branch_taken_0x1f1de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1DE8u;
        // 0x1f1dec: 0xffc20000  sd          $v0, 0x0($fp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1de8) {
            ctx->pc = 0x1F1E48u;
            goto label_1f1e48;
        }
    }
    ctx->pc = 0x1F1DF0u;
label_1f1df0:
    // 0x1f1df0: 0x52e00009  beql        $s7, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F1DF0u;
    {
        const bool branch_taken_0x1f1df0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1df0) {
            ctx->pc = 0x1F1DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1DF0u;
            // 0x1f1df4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1E18u;
            goto label_1f1e18;
        }
    }
    ctx->pc = 0x1F1DF8u;
    // 0x1f1df8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f1df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f1dfc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1f1dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f1e00: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1f1e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1f1e04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f1e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f1e08: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1f1e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1f1e0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f1e10: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1f1e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1f1e14: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1f1e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f1e18:
    // 0x1f1e18: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f1e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1e1c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1f1e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f1e20: 0x2a42023  subu        $a0, $s5, $a0
    ctx->pc = 0x1f1e20u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1f1e24: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1f1e24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f1e28: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1f1e28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f1e2c: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x1f1e2cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1f1e30: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1f1e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1f1e34: 0xc07c7a0  jal         func_1F1E80
    ctx->pc = 0x1F1E34u;
    SET_GPR_U32(ctx, 31, 0x1F1E3Cu);
    ctx->pc = 0x1F1E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1E34u;
    // 0x1f1e38: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1E80u, 0x1F1E34u, 0x1F1E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1E3Cu;
label_1f1e3c:
    // 0x1f1e3c: 0x222882d  daddu       $s1, $s1, $v0
    ctx->pc = 0x1f1e3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1f1e40: 0x2a220000  slti        $v0, $s1, 0x0
    ctx->pc = 0x1f1e40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1f1e44: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x1f1e44u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_1f1e48:
    // 0x1f1e48: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f1e48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1e4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f1e4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1e50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f1e50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f1e54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f1e54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f1e58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f1e58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f1e5c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f1e5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f1e60: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f1e60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f1e64: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1f1e64u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f1e68: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1f1e68u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f1e6c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1f1e6cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f1e70: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1f1e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f1e74: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E74u;
        // 0x1f1e78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1E7Cu;
    // 0x1f1e7c: 0x0  nop
    ctx->pc = 0x1f1e7cu;
    // NOP
    if (ctx->pc == 0x1f1e7cu) { ctx->pc = 0x1f1e80u; }
}
