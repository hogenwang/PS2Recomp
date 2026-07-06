#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C7BC0
// Address: 0x1c7bc0 - 0x1c7cc0
void sub_001C7BC0_0x1c7bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7BC0_0x1c7bc0");
#endif

    switch (ctx->pc) {
        case 0x1c7bf8u: goto label_1c7bf8;
        case 0x1c7c50u: goto label_1c7c50;
        case 0x1c7c7cu: goto label_1c7c7c;
        case 0x1c7ca0u: goto label_1c7ca0;
        default: break;
    }

    ctx->pc = 0x1c7bc0u;

    // 0x1c7bc0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c7bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c7bc4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c7bc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c7bc8: 0x24424338  addiu       $v0, $v0, 0x4338
    ctx->pc = 0x1c7bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17208));
    // 0x1c7bcc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c7bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c7bd0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c7bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c7bd4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1c7bd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7bd8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c7bd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7bdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7be0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c7be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c7be4: 0x24060168  addiu       $a2, $zero, 0x168
    ctx->pc = 0x1c7be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x1c7be8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c7be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c7bec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c7becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c7bf0: 0xc049c22  jal         func_127088
    ctx->pc = 0x1C7BF0u;
    SET_GPR_U32(ctx, 31, 0x1C7BF8u);
    ctx->pc = 0x1C7BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7BF0u;
            // 0x1c7bf4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (runtime->hasFunction(0x127088u)) {
        auto targetFn = runtime->lookupFunction(0x127088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7BF8u; }
        if (ctx->pc != 0x1C7BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127088_0x127088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7BF8u; }
        if (ctx->pc != 0x1C7BF8u) { return; }
    }
    ctx->pc = 0x1C7BF8u;
label_1c7bf8:
    // 0x1c7bf8: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7BF8u;
    {
        const bool branch_taken_0x1c7bf8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7bf8) {
            ctx->pc = 0x1C7BFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7BF8u;
            // 0x1c7bfc: 0x2a620400  slti        $v0, $s3, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7C10u;
            goto label_1c7c10;
        }
    }
    ctx->pc = 0x1C7C00u;
    // 0x1c7c00: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c7c00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c7c04: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1C7C04u;
    {
        const bool branch_taken_0x1c7c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7C04u;
            // 0x1c7c08: 0x2484b0b0  addiu       $a0, $a0, -0x4F50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c04) {
            ctx->pc = 0x1C7C98u;
            goto label_1c7c98;
        }
    }
    ctx->pc = 0x1C7C0Cu;
    // 0x1c7c0c: 0x0  nop
    ctx->pc = 0x1c7c0cu;
    // NOP
label_1c7c10:
    // 0x1c7c10: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7C10u;
    {
        const bool branch_taken_0x1c7c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7c10) {
            ctx->pc = 0x1C7C14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7C10u;
            // 0x1c7c14: 0x32420003  andi        $v0, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7C28u;
            goto label_1c7c28;
        }
    }
    ctx->pc = 0x1C7C18u;
    // 0x1c7c18: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c7c18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c7c1c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1C7C1Cu;
    {
        const bool branch_taken_0x1c7c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7C1Cu;
            // 0x1c7c20: 0x2484b0d8  addiu       $a0, $a0, -0x4F28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c1c) {
            ctx->pc = 0x1C7C98u;
            goto label_1c7c98;
        }
    }
    ctx->pc = 0x1C7C24u;
    // 0x1c7c24: 0x0  nop
    ctx->pc = 0x1c7c24u;
    // NOP
label_1c7c28:
    // 0x1c7c28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7C28u;
    {
        const bool branch_taken_0x1c7c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7C28u;
            // 0x1c7c2c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c28) {
            ctx->pc = 0x1C7C38u;
            goto label_1c7c38;
        }
    }
    ctx->pc = 0x1C7C30u;
    // 0x1c7c30: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x1c7c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1c7c34: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x1c7c34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1c7c38:
    // 0x1c7c38: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1c7c38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7c3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c7c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7c40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c7c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7c44: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x1c7c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1c7c48: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1C7C48u;
    SET_GPR_U32(ctx, 31, 0x1C7C50u);
    ctx->pc = 0x1C7C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7C48u;
            // 0x1c7c4c: 0x2630002c  addiu       $s0, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7C50u; }
        if (ctx->pc != 0x1C7C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7C50u; }
        if (ctx->pc != 0x1C7C50u) { return; }
    }
    ctx->pc = 0x1C7C50u;
label_1c7c50:
    // 0x1c7c50: 0x32020003  andi        $v0, $s0, 0x3
    ctx->pc = 0x1c7c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x1c7c54: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1c7c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1c7c58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7C58u;
    {
        const bool branch_taken_0x1c7c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7C58u;
            // 0x1c7c5c: 0xae330004  sw          $s3, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c58) {
            ctx->pc = 0x1C7C68u;
            goto label_1c7c68;
        }
    }
    ctx->pc = 0x1C7C60u;
    // 0x1c7c60: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1c7c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1c7c64: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x1c7c64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1c7c68:
    // 0x1c7c68: 0x26020180  addiu       $v0, $s0, 0x180
    ctx->pc = 0x1c7c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x1c7c6c: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x1c7c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x1c7c70: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1c7c70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1c7c74: 0xc071f50  jal         func_1C7D40
    ctx->pc = 0x1C7C74u;
    SET_GPR_U32(ctx, 31, 0x1C7C7Cu);
    ctx->pc = 0x1C7C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7C74u;
            // 0x1c7c78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D40u;
    if (runtime->hasFunction(0x1C7D40u)) {
        auto targetFn = runtime->lookupFunction(0x1C7D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7C7Cu; }
        if (ctx->pc != 0x1C7C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7D40_0x1c7d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7C7Cu; }
        if (ctx->pc != 0x1C7C7Cu) { return; }
    }
    ctx->pc = 0x1C7C7Cu;
label_1c7c7c:
    // 0x1c7c7c: 0x26030300  addiu       $v1, $s0, 0x300
    ctx->pc = 0x1c7c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x1c7c80: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x1c7c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1c7c84: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1c7c84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c7c88: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C7C88u;
    {
        const bool branch_taken_0x1c7c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7c88) {
            ctx->pc = 0x1C7C8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7C88u;
            // 0x1c7c8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7CA4u;
            goto label_1c7ca4;
        }
    }
    ctx->pc = 0x1C7C90u;
    // 0x1c7c90: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c7c90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c7c94: 0x2484b100  addiu       $a0, $a0, -0x4F00
    ctx->pc = 0x1c7c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947072));
label_1c7c98:
    // 0x1c7c98: 0xc071ea4  jal         func_1C7A90
    ctx->pc = 0x1C7C98u;
    SET_GPR_U32(ctx, 31, 0x1C7CA0u);
    ctx->pc = 0x1C7A90u;
    if (runtime->hasFunction(0x1C7A90u)) {
        auto targetFn = runtime->lookupFunction(0x1C7A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7CA0u; }
        if (ctx->pc != 0x1C7CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7A90_0x1c7a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7CA0u; }
        if (ctx->pc != 0x1C7CA0u) { return; }
    }
    ctx->pc = 0x1C7CA0u;
label_1c7ca0:
    // 0x1c7ca0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c7ca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7ca4:
    // 0x1c7ca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c7ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7ca8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c7ca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c7cac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c7cacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7cb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c7cb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c7cb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c7cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7CB8u;
            // 0x1c7cbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7CC0u;
    ctx->pc = 0x1c7cc0u;
}
