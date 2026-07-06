#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C4C50
// Address: 0x1c4c50 - 0x1c4d48
void sub_001C4C50_0x1c4c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4C50_0x1c4c50");
#endif

    switch (ctx->pc) {
        case 0x1c4ca0u: goto label_1c4ca0;
        case 0x1c4cc4u: goto label_1c4cc4;
        case 0x1c4cd8u: goto label_1c4cd8;
        case 0x1c4ce0u: goto label_1c4ce0;
        case 0x1c4ce8u: goto label_1c4ce8;
        case 0x1c4cf0u: goto label_1c4cf0;
        case 0x1c4cf8u: goto label_1c4cf8;
        case 0x1c4d1cu: goto label_1c4d1c;
        default: break;
    }

    ctx->pc = 0x1c4c50u;

    // 0x1c4c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c4c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c4c54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c4c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c4c58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c4c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4c5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c4c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c4c60: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c4c60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4c64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c4c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c4c68: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c4c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c4c6c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c4c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c4c70: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C4C70u;
    {
        const bool branch_taken_0x1c4c70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4C70u;
            // 0x1c4c74: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4c70) {
            ctx->pc = 0x1C4CA0u;
            goto label_1c4ca0;
        }
    }
    ctx->pc = 0x1C4C78u;
    // 0x1c4c78: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c4c78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c4c7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4c7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4c80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c4c80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c4c84: 0x24a5a3e0  addiu       $a1, $a1, -0x5C20
    ctx->pc = 0x1c4c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943712));
    // 0x1c4c88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c4c88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4c8c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c4c8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c4c90: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c4c90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4c94: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c4c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4c98: 0x8071076  j           func_1C41D8
    ctx->pc = 0x1C4C98u;
    ctx->pc = 0x1C4C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4C98u;
            // 0x1c4c9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C41D8u;
    if (runtime->hasFunction(0x1C41D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C41D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C41D8_0x1c41d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C4CA0u;
label_1c4ca0:
    // 0x1c4ca0: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x1c4ca0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1c4ca4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1c4ca4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c4ca8: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C4CA8u;
    {
        const bool branch_taken_0x1c4ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4ca8) {
            ctx->pc = 0x1C4CACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4CA8u;
            // 0x1c4cac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C4D28u;
            goto label_1c4d28;
        }
    }
    ctx->pc = 0x1C4CB0u;
    // 0x1c4cb0: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1c4cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1c4cb4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4CB4u;
    {
        const bool branch_taken_0x1c4cb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4CB4u;
            // 0x1c4cb8: 0x3c110063  lui         $s1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4cb4) {
            ctx->pc = 0x1C4CC4u;
            goto label_1c4cc4;
        }
    }
    ctx->pc = 0x1C4CBCu;
    // 0x1c4cbc: 0xc070240  jal         func_1C0900
    ctx->pc = 0x1C4CBCu;
    SET_GPR_U32(ctx, 31, 0x1C4CC4u);
    ctx->pc = 0x1C0900u;
    if (runtime->hasFunction(0x1C0900u)) {
        auto targetFn = runtime->lookupFunction(0x1C0900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4CC4u; }
        if (ctx->pc != 0x1C4CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0900_0x1c0900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4CC4u; }
        if (ctx->pc != 0x1C4CC4u) { return; }
    }
    ctx->pc = 0x1C4CC4u;
label_1c4cc4:
    // 0x1c4cc4: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1c4cc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c4cc8: 0x3631fff6  ori         $s1, $s1, 0xFFF6
    ctx->pc = 0x1c4cc8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65526);
    // 0x1c4ccc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4CCCu;
    {
        const bool branch_taken_0x1c4ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4CCCu;
            // 0x1c4cd0: 0x3c14003f  lui         $s4, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ccc) {
            ctx->pc = 0x1C4CE0u;
            goto label_1c4ce0;
        }
    }
    ctx->pc = 0x1C4CD4u;
    // 0x1c4cd4: 0x0  nop
    ctx->pc = 0x1c4cd4u;
    // NOP
label_1c4cd8:
    // 0x1c4cd8: 0xc07106a  jal         func_1C41A8
    ctx->pc = 0x1C4CD8u;
    SET_GPR_U32(ctx, 31, 0x1C4CE0u);
    ctx->pc = 0x1C41A8u;
    if (runtime->hasFunction(0x1C41A8u)) {
        auto targetFn = runtime->lookupFunction(0x1C41A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4CE0u; }
        if (ctx->pc != 0x1C4CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C41A8_0x1c41a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4CE0u; }
        if (ctx->pc != 0x1C4CE0u) { return; }
    }
    ctx->pc = 0x1C4CE0u;
label_1c4ce0:
    // 0x1c4ce0: 0xc0703a4  jal         func_1C0E90
    ctx->pc = 0x1C4CE0u;
    SET_GPR_U32(ctx, 31, 0x1C4CE8u);
    ctx->pc = 0x1C0E90u;
    if (runtime->hasFunction(0x1C0E90u)) {
        auto targetFn = runtime->lookupFunction(0x1C0E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4CE8u; }
        if (ctx->pc != 0x1C4CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0E90_0x1c0e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4CE8u; }
        if (ctx->pc != 0x1C4CE8u) { return; }
    }
    ctx->pc = 0x1C4CE8u;
label_1c4ce8:
    // 0x1c4ce8: 0xc0710fa  jal         func_1C43E8
    ctx->pc = 0x1C4CE8u;
    SET_GPR_U32(ctx, 31, 0x1C4CF0u);
    ctx->pc = 0x1C43E8u;
    if (runtime->hasFunction(0x1C43E8u)) {
        auto targetFn = runtime->lookupFunction(0x1C43E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4CF0u; }
        if (ctx->pc != 0x1C4CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C43E8_0x1c43e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4CF0u; }
        if (ctx->pc != 0x1C4CF0u) { return; }
    }
    ctx->pc = 0x1C4CF0u;
label_1c4cf0:
    // 0x1c4cf0: 0xc071352  jal         func_1C4D48
    ctx->pc = 0x1C4CF0u;
    SET_GPR_U32(ctx, 31, 0x1C4CF8u);
    ctx->pc = 0x1C4CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4CF0u;
            // 0x1c4cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4D48u;
    if (runtime->hasFunction(0x1C4D48u)) {
        auto targetFn = runtime->lookupFunction(0x1C4D48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4CF8u; }
        if (ctx->pc != 0x1C4CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4D48_0x1c4d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4CF8u; }
        if (ctx->pc != 0x1C4CF8u) { return; }
    }
    ctx->pc = 0x1C4CF8u;
label_1c4cf8:
    // 0x1c4cf8: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x1c4cf8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1c4cfc: 0x54730008  bnel        $v1, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C4CFCu;
    {
        const bool branch_taken_0x1c4cfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x1c4cfc) {
            ctx->pc = 0x1C4D00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4CFCu;
            // 0x1c4d00: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C4D20u;
            goto label_1c4d20;
        }
    }
    ctx->pc = 0x1C4D04u;
    // 0x1c4d04: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c4d04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c4d08: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x1c4d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1c4d0c: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1C4D0Cu;
    {
        const bool branch_taken_0x1c4d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4d0c) {
            ctx->pc = 0x1C4CD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c4cd8;
        }
    }
    ctx->pc = 0x1C4D14u;
    // 0x1c4d14: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1C4D14u;
    SET_GPR_U32(ctx, 31, 0x1C4D1Cu);
    ctx->pc = 0x1C4D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D14u;
            // 0x1c4d18: 0x2684a3f8  addiu       $a0, $s4, -0x5C08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294943736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (runtime->hasFunction(0x1B4848u)) {
        auto targetFn = runtime->lookupFunction(0x1B4848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D1Cu; }
        if (ctx->pc != 0x1C4D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4848_0x1b4848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D1Cu; }
        if (ctx->pc != 0x1C4D1Cu) { return; }
    }
    ctx->pc = 0x1C4D1Cu;
label_1c4d1c:
    // 0x1c4d1c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1c4d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1c4d20:
    // 0x1c4d20: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1c4d20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4d24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4d24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c4d28:
    // 0x1c4d28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c4d28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c4d2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c4d2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4d30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c4d30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c4d34: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c4d34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4d38: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c4d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D3Cu;
            // 0x1c4d40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C4D44u;
    // 0x1c4d44: 0x0  nop
    ctx->pc = 0x1c4d44u;
    // NOP
    ctx->pc = 0x1c4d48u;
}
