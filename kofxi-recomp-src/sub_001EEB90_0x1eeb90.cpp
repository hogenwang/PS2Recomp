#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EEB90
// Address: 0x1eeb90 - 0x1eec08
void sub_001EEB90_0x1eeb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EEB90_0x1eeb90");
#endif

    switch (ctx->pc) {
        case 0x1eeb90u: goto label_1eeb90;
        case 0x1eeb94u: goto label_1eeb94;
        case 0x1eeb98u: goto label_1eeb98;
        case 0x1eeb9cu: goto label_1eeb9c;
        case 0x1eeba0u: goto label_1eeba0;
        case 0x1eeba4u: goto label_1eeba4;
        case 0x1eeba8u: goto label_1eeba8;
        case 0x1eebacu: goto label_1eebac;
        case 0x1eebb0u: goto label_1eebb0;
        case 0x1eebb4u: goto label_1eebb4;
        case 0x1eebb8u: goto label_1eebb8;
        case 0x1eebbcu: goto label_1eebbc;
        case 0x1eebc0u: goto label_1eebc0;
        case 0x1eebc4u: goto label_1eebc4;
        case 0x1eebc8u: goto label_1eebc8;
        case 0x1eebccu: goto label_1eebcc;
        case 0x1eebd0u: goto label_1eebd0;
        case 0x1eebd4u: goto label_1eebd4;
        case 0x1eebd8u: goto label_1eebd8;
        case 0x1eebdcu: goto label_1eebdc;
        case 0x1eebe0u: goto label_1eebe0;
        case 0x1eebe4u: goto label_1eebe4;
        case 0x1eebe8u: goto label_1eebe8;
        case 0x1eebecu: goto label_1eebec;
        case 0x1eebf0u: goto label_1eebf0;
        case 0x1eebf4u: goto label_1eebf4;
        case 0x1eebf8u: goto label_1eebf8;
        case 0x1eebfcu: goto label_1eebfc;
        case 0x1eec00u: goto label_1eec00;
        case 0x1eec04u: goto label_1eec04;
        default: break;
    }

    ctx->pc = 0x1eeb90u;

label_1eeb90:
    // 0x1eeb90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eeb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1eeb94:
    // 0x1eeb94: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1eeb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1eeb98:
    // 0x1eeb98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1eeb98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eeb9c:
    // 0x1eeb9c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1eeb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1eeba0:
    // 0x1eeba0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1eeba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1eeba4:
    // 0x1eeba4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1eeba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1eeba8:
    // 0x1eeba8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1eeba8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1eebac:
    // 0x1eebac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1eebacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eebb0:
    // 0x1eebb0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1eebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1eebb4:
    // 0x1eebb4: 0x40f809  jalr        $v0
label_1eebb8:
    if (ctx->pc == 0x1EEBB8u) {
        ctx->pc = 0x1EEBB8u;
            // 0x1eebb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EEBBCu;
        goto label_1eebbc;
    }
    ctx->pc = 0x1EEBB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EEBBCu);
        ctx->pc = 0x1EEBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEBB4u;
            // 0x1eebb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EEBBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EEBBCu; }
            if (ctx->pc != 0x1EEBBCu) { return; }
        }
        }
    }
    ctx->pc = 0x1EEBBCu;
label_1eebbc:
    // 0x1eebbc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1eebbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1eebc0:
    // 0x1eebc0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1eebc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1eebc4:
    // 0x1eebc4: 0xc0757de  jal         func_1D5F78
label_1eebc8:
    if (ctx->pc == 0x1EEBC8u) {
        ctx->pc = 0x1EEBC8u;
            // 0x1eebc8: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x1EEBCCu;
        goto label_1eebcc;
    }
    ctx->pc = 0x1EEBC4u;
    SET_GPR_U32(ctx, 31, 0x1EEBCCu);
    ctx->pc = 0x1EEBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEBC4u;
            // 0x1eebc8: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F78u;
    if (runtime->hasFunction(0x1D5F78u)) {
        auto targetFn = runtime->lookupFunction(0x1D5F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEBCCu; }
        if (ctx->pc != 0x1EEBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5F78_0x1d5f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEBCCu; }
        if (ctx->pc != 0x1EEBCCu) { return; }
    }
    ctx->pc = 0x1EEBCCu;
label_1eebcc:
    // 0x1eebcc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1eebccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eebd0:
    // 0x1eebd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eebd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eebd4:
    // 0x1eebd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1eebd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eebd8:
    // 0x1eebd8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1eebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1eebdc:
    // 0x1eebdc: 0x40f809  jalr        $v0
label_1eebe0:
    if (ctx->pc == 0x1EEBE0u) {
        ctx->pc = 0x1EEBE0u;
            // 0x1eebe0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EEBE4u;
        goto label_1eebe4;
    }
    ctx->pc = 0x1EEBDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EEBE4u);
        ctx->pc = 0x1EEBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEBDCu;
            // 0x1eebe0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EEBE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EEBE4u; }
            if (ctx->pc != 0x1EEBE4u) { return; }
        }
        }
    }
    ctx->pc = 0x1EEBE4u;
label_1eebe4:
    // 0x1eebe4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1eebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1eebe8:
    // 0x1eebe8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1eebe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1eebec:
    // 0x1eebec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1eebecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1eebf0:
    // 0x1eebf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eebf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1eebf4:
    // 0x1eebf4: 0x3e00008  jr          $ra
label_1eebf8:
    if (ctx->pc == 0x1EEBF8u) {
        ctx->pc = 0x1EEBF8u;
            // 0x1eebf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1EEBFCu;
        goto label_1eebfc;
    }
    ctx->pc = 0x1EEBF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEBF4u;
            // 0x1eebf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EEBFCu;
label_1eebfc:
    // 0x1eebfc: 0x0  nop
    ctx->pc = 0x1eebfcu;
    // NOP
label_1eec00:
    // 0x1eec00: 0x3e00008  jr          $ra
label_1eec04:
    if (ctx->pc == 0x1EEC04u) {
        ctx->pc = 0x1EEC04u;
            // 0x1eec04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1EEC08u;
        goto label_fallthrough_0x1eec00;
    }
    ctx->pc = 0x1EEC00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEC00u;
            // 0x1eec04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1eec00:
    ctx->pc = 0x1EEC08u;
    ctx->pc = 0x1eec08u;
}
