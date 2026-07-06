#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F2E78
// Address: 0x1f2e78 - 0x1f2f70
void sub_001F2E78_0x1f2e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2E78_0x1f2e78");
#endif

    switch (ctx->pc) {
        case 0x1f2eacu: goto label_1f2eac;
        case 0x1f2ec0u: goto label_1f2ec0;
        case 0x1f2ee8u: goto label_1f2ee8;
        case 0x1f2efcu: goto label_1f2efc;
        case 0x1f2f10u: goto label_1f2f10;
        case 0x1f2f20u: goto label_1f2f20;
        case 0x1f2f34u: goto label_1f2f34;
        case 0x1f2f48u: goto label_1f2f48;
        default: break;
    }

    ctx->pc = 0x1f2e78u;

    // 0x1f2e78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f2e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f2e7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f2e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f2e80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f2e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f2e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f2e88: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f2e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f2e8c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1f2e8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2e90: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f2e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f2e94: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1f2e94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f2e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f2e9c: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x1f2e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1f2ea0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1f2ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1f2ea4: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F2EA4u;
    SET_GPR_U32(ctx, 31, 0x1F2EACu);
    ctx->pc = 0x1F2EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2EA4u;
            // 0x1f2ea8: 0x8e112018  lw          $s1, 0x2018($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8216)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2EACu; }
        if (ctx->pc != 0x1F2EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2EACu; }
        if (ctx->pc != 0x1F2EACu) { return; }
    }
    ctx->pc = 0x1F2EACu;
label_1f2eac:
    // 0x1f2eac: 0x10530027  beq         $v0, $s3, . + 4 + (0x27 << 2)
    ctx->pc = 0x1F2EACu;
    {
        const bool branch_taken_0x1f2eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1F2EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2EACu;
            // 0x1f2eb0: 0x2632008c  addiu       $s2, $s1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2eac) {
            ctx->pc = 0x1F2F4Cu;
            goto label_1f2f4c;
        }
    }
    ctx->pc = 0x1F2EB4u;
    // 0x1f2eb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2eb8: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F2EB8u;
    SET_GPR_U32(ctx, 31, 0x1F2EC0u);
    ctx->pc = 0x1F2EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2EB8u;
            // 0x1f2ebc: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2EC0u; }
        if (ctx->pc != 0x1F2EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2EC0u; }
        if (ctx->pc != 0x1F2EC0u) { return; }
    }
    ctx->pc = 0x1F2EC0u;
label_1f2ec0:
    // 0x1f2ec0: 0x54530003  bnel        $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2EC0u;
    {
        const bool branch_taken_0x1f2ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1f2ec0) {
            ctx->pc = 0x1F2EC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2EC0u;
            // 0x1f2ec4: 0x82420058  lb          $v0, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2ED0u;
            goto label_1f2ed0;
        }
    }
    ctx->pc = 0x1F2EC8u;
    // 0x1f2ec8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1F2EC8u;
    {
        const bool branch_taken_0x1f2ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2EC8u;
            // 0x1f2ecc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ec8) {
            ctx->pc = 0x1F2F4Cu;
            goto label_1f2f4c;
        }
    }
    ctx->pc = 0x1F2ED0u;
label_1f2ed0:
    // 0x1f2ed0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2ED0u;
    {
        const bool branch_taken_0x1f2ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2ED0u;
            // 0x1f2ed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ed0) {
            ctx->pc = 0x1F2EE0u;
            goto label_1f2ee0;
        }
    }
    ctx->pc = 0x1F2ED8u;
    // 0x1f2ed8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1F2ED8u;
    {
        const bool branch_taken_0x1f2ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2ED8u;
            // 0x1f2edc: 0x8e22016c  lw          $v0, 0x16C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ed8) {
            ctx->pc = 0x1F2F4Cu;
            goto label_1f2f4c;
        }
    }
    ctx->pc = 0x1F2EE0u;
label_1f2ee0:
    // 0x1f2ee0: 0xc07cc36  jal         func_1F30D8
    ctx->pc = 0x1F2EE0u;
    SET_GPR_U32(ctx, 31, 0x1F2EE8u);
    ctx->pc = 0x1F2EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2EE0u;
            // 0x1f2ee4: 0x8e510018  lw          $s1, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F30D8u;
    if (runtime->hasFunction(0x1F30D8u)) {
        auto targetFn = runtime->lookupFunction(0x1F30D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2EE8u; }
        if (ctx->pc != 0x1F2EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F30D8_0x1f30d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2EE8u; }
        if (ctx->pc != 0x1F2EE8u) { return; }
    }
    ctx->pc = 0x1F2EE8u;
label_1f2ee8:
    // 0x1f2ee8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F2EE8u;
    {
        const bool branch_taken_0x1f2ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2EE8u;
            // 0x1f2eec: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ee8) {
            ctx->pc = 0x1F2F38u;
            goto label_1f2f38;
        }
    }
    ctx->pc = 0x1F2EF0u;
    // 0x1f2ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ef4: 0xc07cc4a  jal         func_1F3128
    ctx->pc = 0x1F2EF4u;
    SET_GPR_U32(ctx, 31, 0x1F2EFCu);
    ctx->pc = 0x1F2EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2EF4u;
            // 0x1f2ef8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3128u;
    if (runtime->hasFunction(0x1F3128u)) {
        auto targetFn = runtime->lookupFunction(0x1F3128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2EFCu; }
        if (ctx->pc != 0x1F2EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3128_0x1f3128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2EFCu; }
        if (ctx->pc != 0x1F2EFCu) { return; }
    }
    ctx->pc = 0x1F2EFCu;
label_1f2efc:
    // 0x1f2efc: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F2EFCu;
    {
        const bool branch_taken_0x1f2efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2EFCu;
            // 0x1f2f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2efc) {
            ctx->pc = 0x1F2F3Cu;
            goto label_1f2f3c;
        }
    }
    ctx->pc = 0x1F2F04u;
    // 0x1f2f04: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1f2f04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2f08: 0xc07cc5e  jal         func_1F3178
    ctx->pc = 0x1F2F08u;
    SET_GPR_U32(ctx, 31, 0x1F2F10u);
    ctx->pc = 0x1F2F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2F08u;
            // 0x1f2f0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3178u;
    if (runtime->hasFunction(0x1F3178u)) {
        auto targetFn = runtime->lookupFunction(0x1F3178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2F10u; }
        if (ctx->pc != 0x1F2F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3178_0x1f3178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2F10u; }
        if (ctx->pc != 0x1F2F10u) { return; }
    }
    ctx->pc = 0x1F2F10u;
label_1f2f10:
    // 0x1f2f10: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F2F10u;
    {
        const bool branch_taken_0x1f2f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2F10u;
            // 0x1f2f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2f10) {
            ctx->pc = 0x1F2F3Cu;
            goto label_1f2f3c;
        }
    }
    ctx->pc = 0x1F2F18u;
    // 0x1f2f18: 0xc07cbdc  jal         func_1F2F70
    ctx->pc = 0x1F2F18u;
    SET_GPR_U32(ctx, 31, 0x1F2F20u);
    ctx->pc = 0x1F2F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2F18u;
            // 0x1f2f1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F2F70u;
    if (runtime->hasFunction(0x1F2F70u)) {
        auto targetFn = runtime->lookupFunction(0x1F2F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2F20u; }
        if (ctx->pc != 0x1F2F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F2F70_0x1f2f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2F20u; }
        if (ctx->pc != 0x1F2F20u) { return; }
    }
    ctx->pc = 0x1F2F20u;
label_1f2f20:
    // 0x1f2f20: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F2F20u;
    {
        const bool branch_taken_0x1f2f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2f20) {
            ctx->pc = 0x1F2F24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2F20u;
            // 0x1f2f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2F3Cu;
            goto label_1f2f3c;
        }
    }
    ctx->pc = 0x1F2F28u;
    // 0x1f2f28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f2f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2f2c: 0xc07cc96  jal         func_1F3258
    ctx->pc = 0x1F2F2Cu;
    SET_GPR_U32(ctx, 31, 0x1F2F34u);
    ctx->pc = 0x1F2F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2F2Cu;
            // 0x1f2f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3258u;
    if (runtime->hasFunction(0x1F3258u)) {
        auto targetFn = runtime->lookupFunction(0x1F3258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2F34u; }
        if (ctx->pc != 0x1F2F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3258_0x1f3258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2F34u; }
        if (ctx->pc != 0x1F2F34u) { return; }
    }
    ctx->pc = 0x1F2F34u;
label_1f2f34:
    // 0x1f2f34: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x1f2f34u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f2f38:
    // 0x1f2f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2f3c:
    // 0x1f2f3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f2f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2f40: 0xc07cbf4  jal         func_1F2FD0
    ctx->pc = 0x1F2F40u;
    SET_GPR_U32(ctx, 31, 0x1F2F48u);
    ctx->pc = 0x1F2F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2F40u;
            // 0x1f2f44: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F2FD0u;
    if (runtime->hasFunction(0x1F2FD0u)) {
        auto targetFn = runtime->lookupFunction(0x1F2FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2F48u; }
        if (ctx->pc != 0x1F2F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F2FD0_0x1f2fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2F48u; }
        if (ctx->pc != 0x1F2F48u) { return; }
    }
    ctx->pc = 0x1F2F48u;
label_1f2f48:
    // 0x1f2f48: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1f2f48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f2f4c:
    // 0x1f2f4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f2f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2f50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f2f50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f2f54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f2f54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2f58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f2f58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2f5c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f2f5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2f60: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1f2f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2f64: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2F64u;
            // 0x1f2f68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F2F6Cu;
    // 0x1f2f6c: 0x0  nop
    ctx->pc = 0x1f2f6cu;
    // NOP
    ctx->pc = 0x1f2f70u;
}
