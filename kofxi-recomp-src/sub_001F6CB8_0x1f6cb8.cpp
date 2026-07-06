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

// Function: sub_001F6CB8
// Address: 0x1f6cb8 - 0x1f6e00
void sub_001F6CB8_0x1f6cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6CB8_0x1f6cb8");
#endif

    switch (ctx->pc) {
        case 0x1f6cf4u: goto label_1f6cf4;
        case 0x1f6d38u: goto label_1f6d38;
        case 0x1f6d50u: goto label_1f6d50;
        case 0x1f6d58u: goto label_1f6d58;
        case 0x1f6da4u: goto label_1f6da4;
        case 0x1f6db8u: goto label_1f6db8;
        case 0x1f6dc4u: goto label_1f6dc4;
        case 0x1f6dccu: goto label_1f6dcc;
        default: break;
    }

    ctx->pc = 0x1f6cb8u;

    // 0x1f6cb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f6cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f6cbc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f6cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1f6cc0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1f6cc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6cc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f6cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f6cc8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f6cc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ccc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f6cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6cd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f6cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f6cd4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f6cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f6cd8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f6cd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6cdc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f6cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f6ce0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f6ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f6ce4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1f6ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1f6ce8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1f6ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1f6cec: 0xc07d928  jal         func_1F64A0
    ctx->pc = 0x1F6CECu;
    SET_GPR_U32(ctx, 31, 0x1F6CF4u);
    ctx->pc = 0x1F6CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6CECu;
    // 0x1f6cf0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F64A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F64A0u, 0x1F6CECu, 0x1F6CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6CF4u;
label_1f6cf4:
    // 0x1f6cf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f6cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6cf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f6cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6cfc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F6CFCu;
    {
        const bool branch_taken_0x1f6cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6CFCu;
        // 0x1f6d00: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6cfc) {
            ctx->pc = 0x1F6D30u;
            goto label_1f6d30;
        }
    }
    ctx->pc = 0x1F6D04u;
    // 0x1f6d04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f6d04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6d08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f6d08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f6d0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f6d0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6d10: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f6d10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f6d14: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f6d14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f6d18: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f6d18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f6d1c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1f6d1cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6d20: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1f6d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6d24: 0x8076704  j           func_1D9C10
    ctx->pc = 0x1F6D24u;
    ctx->pc = 0x1F6D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6D24u;
    // 0x1f6d28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C10u;
    sub_001D9C10_0x1d9c10(rdram, ctx, runtime); return;
    ctx->pc = 0x1F6D2Cu;
    // 0x1f6d2c: 0x0  nop
    ctx->pc = 0x1f6d2cu;
    // NOP
label_1f6d30:
    // 0x1f6d30: 0xc076706  jal         func_1D9C18
    ctx->pc = 0x1F6D30u;
    SET_GPR_U32(ctx, 31, 0x1F6D38u);
    ctx->pc = 0x1F6D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6D30u;
    // 0x1f6d34: 0x8eb22018  lw          $s2, 0x2018($s5) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C18u, 0x1F6D30u, 0x1F6D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6D38u;
label_1f6d38:
    // 0x1f6d38: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1f6d38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6d3c: 0x26501198  addiu       $s0, $s2, 0x1198
    ctx->pc = 0x1f6d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4504));
    // 0x1f6d40: 0x26531128  addiu       $s3, $s2, 0x1128
    ctx->pc = 0x1f6d40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4392));
    // 0x1f6d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f6d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6d48: 0xc07d834  jal         func_1F60D0
    ctx->pc = 0x1F6D48u;
    SET_GPR_U32(ctx, 31, 0x1F6D50u);
    ctx->pc = 0x1F6D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6D48u;
    // 0x1f6d4c: 0x26510004  addiu       $s1, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F60D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F60D0u, 0x1F6D48u, 0x1F6D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6D50u;
label_1f6d50:
    // 0x1f6d50: 0xc07d774  jal         func_1F5DD0
    ctx->pc = 0x1F6D50u;
    SET_GPR_U32(ctx, 31, 0x1F6D58u);
    ctx->pc = 0x1F6D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6D50u;
    // 0x1f6d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5DD0u, 0x1F6D50u, 0x1F6D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6D58u;
label_1f6d58:
    // 0x1f6d58: 0x26441150  addiu       $a0, $s2, 0x1150
    ctx->pc = 0x1f6d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4432));
    // 0x1f6d5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f6d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6d60: 0x8eaa0038  lw          $t2, 0x38($s5)
    ctx->pc = 0x1f6d60u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x1f6d64: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x1f6d64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    // 0x1f6d68: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1f6d68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f6d6c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1f6d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1f6d70: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1f6d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1f6d74: 0x2468000f  addiu       $t0, $v1, 0xF
    ctx->pc = 0x1f6d74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1f6d78: 0x28670000  slti        $a3, $v1, 0x0
    ctx->pc = 0x1f6d78u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1f6d7c: 0x2446000f  addiu       $a2, $v0, 0xF
    ctx->pc = 0x1f6d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1f6d80: 0x28450000  slti        $a1, $v0, 0x0
    ctx->pc = 0x1f6d80u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1f6d84: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x1f6d84u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x1f6d88: 0x107180b  movn        $v1, $t0, $a3
    ctx->pc = 0x1f6d88u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 8));
    // 0x1f6d8c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1f6d8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1f6d90: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1f6d90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1f6d94: 0x15490006  bne         $t2, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6D94u;
    {
        const bool branch_taken_0x1f6d94 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 9));
        ctx->pc = 0x1F6D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D94u;
        // 0x1f6d98: 0x433018  mult        $a2, $v0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d94) {
            ctx->pc = 0x1F6DB0u;
            goto label_1f6db0;
        }
    }
    ctx->pc = 0x1F6D9Cu;
    // 0x1f6d9c: 0xc042986  jal         func_10A618
    ctx->pc = 0x1F6D9Cu;
    SET_GPR_U32(ctx, 31, 0x1F6DA4u);
    ctx->pc = 0x1F6DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6D9Cu;
    // 0x1f6da0: 0x8e850030  lw          $a1, 0x30($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A618u, 0x1F6D9Cu, 0x1F6DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6DA4u;
label_1f6da4:
    // 0x1f6da4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6DA4u;
    {
        const bool branch_taken_0x1f6da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6DA4u;
        // 0x1f6da8: 0xae600014  sw          $zero, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6da4) {
            ctx->pc = 0x1F6DBCu;
            goto label_1f6dbc;
        }
    }
    ctx->pc = 0x1F6DACu;
    // 0x1f6dac: 0x0  nop
    ctx->pc = 0x1f6dacu;
    // NOP
label_1f6db0:
    // 0x1f6db0: 0xc042998  jal         func_10A660
    ctx->pc = 0x1F6DB0u;
    SET_GPR_U32(ctx, 31, 0x1F6DB8u);
    ctx->pc = 0x1F6DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6DB0u;
    // 0x1f6db4: 0x8e850030  lw          $a1, 0x30($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A660u, 0x1F6DB0u, 0x1F6DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6DB8u;
label_1f6db8:
    // 0x1f6db8: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x1f6db8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_1f6dbc:
    // 0x1f6dbc: 0xc07d7f4  jal         func_1F5FD0
    ctx->pc = 0x1F6DBCu;
    SET_GPR_U32(ctx, 31, 0x1F6DC4u);
    ctx->pc = 0x1F6DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6DBCu;
    // 0x1f6dc0: 0x26640070  addiu       $a0, $s3, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5FD0u, 0x1F6DBCu, 0x1F6DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6DC4u;
label_1f6dc4:
    // 0x1f6dc4: 0xc07dc0a  jal         func_1F7028
    ctx->pc = 0x1F6DC4u;
    SET_GPR_U32(ctx, 31, 0x1F6DCCu);
    ctx->pc = 0x1F6DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6DC4u;
    // 0x1f6dc8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7028u, 0x1F6DC4u, 0x1F6DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6DCCu;
label_1f6dcc:
    // 0x1f6dcc: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x1f6dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1f6dd0: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1f6dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1f6dd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f6dd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6dd8: 0x2c3100a  movz        $v0, $s6, $v1
    ctx->pc = 0x1f6dd8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 22));
    // 0x1f6ddc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f6ddcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f6de0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f6de0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6de4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f6de4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f6de8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f6de8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f6dec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f6decu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f6df0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1f6df0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6df4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1f6df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6df8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6DF8u;
        // 0x1f6dfc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6E00u;
}
