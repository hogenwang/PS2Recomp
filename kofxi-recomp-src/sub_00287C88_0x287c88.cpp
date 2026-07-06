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

// Function: sub_00287C88
// Address: 0x287c88 - 0x287db0
void sub_00287C88_0x287c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287C88_0x287c88");
#endif

    switch (ctx->pc) {
        case 0x287cdcu: goto label_287cdc;
        case 0x287d28u: goto label_287d28;
        case 0x287d60u: goto label_287d60;
        case 0x287d6cu: goto label_287d6c;
        case 0x287d7cu: goto label_287d7c;
        default: break;
    }

    ctx->pc = 0x287c88u;

    // 0x287c88: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x287c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x287c8c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x287c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x287c90: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x287c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x287c94: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x287c94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287c98: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x287c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x287c9c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x287c9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ca0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x287ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x287ca4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x287ca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ca8: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x287ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x287cac: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x287cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x287cb0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x287cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x287cb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x287cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x287cb8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x287cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x287cbc: 0x8e950004  lw          $s5, 0x4($s4)
    ctx->pc = 0x287cbcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x287cc0: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x287CC0u;
    {
        const bool branch_taken_0x287cc0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x287CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287CC0u;
        // 0x287cc4: 0x8e760004  lw          $s6, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287cc0) {
            ctx->pc = 0x287CD0u;
            goto label_287cd0;
        }
    }
    ctx->pc = 0x287CC8u;
    // 0x287cc8: 0x56c00006  bnel        $s6, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x287CC8u;
    {
        const bool branch_taken_0x287cc8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x287cc8) {
            ctx->pc = 0x287CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287CC8u;
            // 0x287ccc: 0x8e83000c  lw          $v1, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287CE4u;
            goto label_287ce4;
        }
    }
    ctx->pc = 0x287CD0u;
label_287cd0:
    // 0x287cd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x287cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287cd4: 0xc0a1b6a  jal         func_286DA8
    ctx->pc = 0x287CD4u;
    SET_GPR_U32(ctx, 31, 0x287CDCu);
    ctx->pc = 0x287CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287CD4u;
    // 0x287cd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286DA8u, 0x287CD4u, 0x287CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287CDCu;
label_287cdc:
    // 0x287cdc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x287CDCu;
    {
        const bool branch_taken_0x287cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287CDCu;
        // 0x287ce0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287cdc) {
            ctx->pc = 0x287D80u;
            goto label_287d80;
        }
    }
    ctx->pc = 0x287CE4u;
label_287ce4:
    // 0x287ce4: 0x2b69021  addu        $s2, $s5, $s6
    ctx->pc = 0x287ce4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x287ce8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x287ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x287cec: 0x12340003  beq         $s1, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x287CECu;
    {
        const bool branch_taken_0x287cec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        ctx->pc = 0x287CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287CECu;
        // 0x287cf0: 0x62b826  xor         $s7, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287cec) {
            ctx->pc = 0x287CFCu;
            goto label_287cfc;
        }
    }
    ctx->pc = 0x287CF4u;
    // 0x287cf4: 0x16330006  bne         $s1, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x287CF4u;
    {
        const bool branch_taken_0x287cf4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x287CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287CF4u;
        // 0x287cf8: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287cf4) {
            ctx->pc = 0x287D10u;
            goto label_287d10;
        }
    }
    ctx->pc = 0x287CFCu;
label_287cfc:
    // 0x287cfc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x287cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x287d00: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x287d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x287d04: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x287d04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x287d08: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x287d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x287d0c: 0xe28021  addu        $s0, $a3, $v0
    ctx->pc = 0x287d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_287d10:
    // 0x287d10: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x287d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x287d14: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x287d14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x287d18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x287D18u;
    {
        const bool branch_taken_0x287d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287D18u;
        // 0x287d1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d18) {
            ctx->pc = 0x287D38u;
            goto label_287d38;
        }
    }
    ctx->pc = 0x287D20u;
    // 0x287d20: 0xc0a1ada  jal         func_286B68
    ctx->pc = 0x287D20u;
    SET_GPR_U32(ctx, 31, 0x287D28u);
    ctx->pc = 0x287D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287D20u;
    // 0x287d24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286B68u, 0x287D20u, 0x287D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287D28u;
label_287d28:
    // 0x287d28: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x287D28u;
    {
        const bool branch_taken_0x287d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287d28) {
            ctx->pc = 0x287D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287D28u;
            // 0x287d2c: 0xae120004  sw          $s2, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287D48u;
            goto label_287d48;
        }
    }
    ctx->pc = 0x287D30u;
    // 0x287d30: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x287D30u;
    {
        const bool branch_taken_0x287d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287D30u;
        // 0x287d34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d30) {
            ctx->pc = 0x287D80u;
            goto label_287d80;
        }
    }
    ctx->pc = 0x287D38u;
label_287d38:
    // 0x287d38: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x287D38u;
    {
        const bool branch_taken_0x287d38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x287d38) {
            ctx->pc = 0x287D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287D38u;
            // 0x287d3c: 0xae120004  sw          $s2, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287D48u;
            goto label_287d48;
        }
    }
    ctx->pc = 0x287D40u;
    // 0x287d40: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x287D40u;
    {
        const bool branch_taken_0x287d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287D40u;
        // 0x287d44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d40) {
            ctx->pc = 0x287D80u;
            goto label_287d80;
        }
    }
    ctx->pc = 0x287D48u;
label_287d48:
    // 0x287d48: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x287d48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287d4c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x287d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x287d50: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x287d50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287d54: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x287d54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x287d58: 0xc0a1f6c  jal         func_287DB0
    ctx->pc = 0x287D58u;
    SET_GPR_U32(ctx, 31, 0x287D60u);
    ctx->pc = 0x287D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287D58u;
    // 0x287d5c: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287DB0u, 0x287D58u, 0x287D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287D60u;
label_287d60:
    // 0x287d60: 0xae37000c  sw          $s7, 0xC($s1)
    ctx->pc = 0x287d60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 23));
    // 0x287d64: 0xc0a1a72  jal         func_2869C8
    ctx->pc = 0x287D64u;
    SET_GPR_U32(ctx, 31, 0x287D6Cu);
    ctx->pc = 0x287D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287D64u;
    // 0x287d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2869C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2869C8u, 0x287D64u, 0x287D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287D6Cu;
label_287d6c:
    // 0x287d6c: 0x12300003  beq         $s1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x287D6Cu;
    {
        const bool branch_taken_0x287d6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x287D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287D6Cu;
        // 0x287d70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d6c) {
            ctx->pc = 0x287D7Cu;
            goto label_287d7c;
        }
    }
    ctx->pc = 0x287D74u;
    // 0x287d74: 0xc0a1b1c  jal         func_286C70
    ctx->pc = 0x287D74u;
    SET_GPR_U32(ctx, 31, 0x287D7Cu);
    ctx->pc = 0x287D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287D74u;
    // 0x287d78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286C70u, 0x287D74u, 0x287D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287D7Cu;
label_287d7c:
    // 0x287d7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x287d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_287d80:
    // 0x287d80: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x287d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x287d84: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x287d84u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x287d88: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x287d88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x287d8c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x287d8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x287d90: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x287d90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x287d94: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x287d94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x287d98: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x287d98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x287d9c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x287d9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x287da0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x287da0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287da4: 0x3e00008  jr          $ra
    ctx->pc = 0x287DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287DA4u;
        // 0x287da8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287DACu;
    // 0x287dac: 0x0  nop
    ctx->pc = 0x287dacu;
    // NOP
}
