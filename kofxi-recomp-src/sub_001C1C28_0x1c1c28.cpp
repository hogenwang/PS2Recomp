#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C1C28
// Address: 0x1c1c28 - 0x1c1d18
void sub_001C1C28_0x1c1c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1C28_0x1c1c28");
#endif

    switch (ctx->pc) {
        case 0x1c1c4cu: goto label_1c1c4c;
        case 0x1c1c68u: goto label_1c1c68;
        case 0x1c1cacu: goto label_1c1cac;
        case 0x1c1cc8u: goto label_1c1cc8;
        case 0x1c1cf4u: goto label_1c1cf4;
        default: break;
    }

    ctx->pc = 0x1c1c28u;

    // 0x1c1c28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c1c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c1c2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c1c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c1c30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c1c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c1c34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c1c34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1c38: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c1c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c1c3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1c40: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c1c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c1c44: 0xc0729fa  jal         func_1CA7E8
    ctx->pc = 0x1C1C44u;
    SET_GPR_U32(ctx, 31, 0x1C1C4Cu);
    ctx->pc = 0x1C1C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1C44u;
            // 0x1c1c48: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (runtime->hasFunction(0x1CA7E8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1C4Cu; }
        if (ctx->pc != 0x1C1C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA7E8_0x1ca7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1C4Cu; }
        if (ctx->pc != 0x1C1C4Cu) { return; }
    }
    ctx->pc = 0x1C1C4Cu;
label_1c1c4c:
    // 0x1c1c4c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c1c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c1c50: 0x2451c868  addiu       $s1, $v0, -0x3798
    ctx->pc = 0x1c1c50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953064));
    // 0x1c1c54: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x1c1c54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c1c58: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C1C58u;
    {
        const bool branch_taken_0x1c1c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1C58u;
            // 0x1c1c5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c58) {
            ctx->pc = 0x1C1C8Cu;
            goto label_1c1c8c;
        }
    }
    ctx->pc = 0x1C1C60u;
    // 0x1c1c60: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c1c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1c64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1c68:
    // 0x1c1c68: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c1c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c1c6c: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x1c1c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1c1c70: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1c1c70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1c1c74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1C74u;
    {
        const bool branch_taken_0x1c1c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1C74u;
            // 0x1c1c78: 0x51980  sll         $v1, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c74) {
            ctx->pc = 0x1C1C8Cu;
            goto label_1c1c8c;
        }
    }
    ctx->pc = 0x1C1C7Cu;
    // 0x1c1c7c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1c1c7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c1c80: 0x0  nop
    ctx->pc = 0x1c1c80u;
    // NOP
    // 0x1c1c84: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C1C84u;
    {
        const bool branch_taken_0x1c1c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1C84u;
            // 0x1c1c88: 0x668821  addu        $s1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c84) {
            ctx->pc = 0x1C1C68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c1c68;
        }
    }
    ctx->pc = 0x1C1C8Cu;
label_1c1c8c:
    // 0x1c1c8c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1c1c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c1c90: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C1C90u;
    {
        const bool branch_taken_0x1c1c90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C1C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1C90u;
            // 0x1c1c94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c90) {
            ctx->pc = 0x1C1CB8u;
            goto label_1c1cb8;
        }
    }
    ctx->pc = 0x1C1C98u;
    // 0x1c1c98: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c1c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c1c9c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c1c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c1ca0: 0x24849b90  addiu       $a0, $a0, -0x6470
    ctx->pc = 0x1c1ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941584));
    // 0x1c1ca4: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1C1CA4u;
    SET_GPR_U32(ctx, 31, 0x1C1CACu);
    ctx->pc = 0x1C1CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1CA4u;
            // 0x1c1ca8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (runtime->hasFunction(0x1B4848u)) {
        auto targetFn = runtime->lookupFunction(0x1B4848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1CACu; }
        if (ctx->pc != 0x1C1CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4848_0x1b4848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1CACu; }
        if (ctx->pc != 0x1C1CACu) { return; }
    }
    ctx->pc = 0x1C1CACu;
label_1c1cac:
    // 0x1c1cac: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C1CACu;
    {
        const bool branch_taken_0x1c1cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1CACu;
            // 0x1c1cb0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1cac) {
            ctx->pc = 0x1C1CECu;
            goto label_1c1cec;
        }
    }
    ctx->pc = 0x1C1CB4u;
    // 0x1c1cb4: 0x0  nop
    ctx->pc = 0x1c1cb4u;
    // NOP
label_1c1cb8:
    // 0x1c1cb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1cbc: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1c1cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c1cc0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1C1CC0u;
    SET_GPR_U32(ctx, 31, 0x1C1CC8u);
    ctx->pc = 0x1C1CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1CC0u;
            // 0x1c1cc4: 0x24100040  addiu       $s0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1CC8u; }
        if (ctx->pc != 0x1C1CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1CC8u; }
        if (ctx->pc != 0x1C1CC8u) { return; }
    }
    ctx->pc = 0x1C1CC8u;
label_1c1cc8:
    // 0x1c1cc8: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x1c1cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1ccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c1cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1cd0: 0xae300038  sw          $s0, 0x38($s1)
    ctx->pc = 0x1c1cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 16));
    // 0x1c1cd4: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x1c1cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x1c1cd8: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x1c1cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x1c1cdc: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1c1cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c1ce0: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x1c1ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1ce4: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x1c1ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x1c1ce8: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x1c1ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_1c1cec:
    // 0x1c1cec: 0xc072a00  jal         func_1CA800
    ctx->pc = 0x1C1CECu;
    SET_GPR_U32(ctx, 31, 0x1C1CF4u);
    ctx->pc = 0x1CA800u;
    if (runtime->hasFunction(0x1CA800u)) {
        auto targetFn = runtime->lookupFunction(0x1CA800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1CF4u; }
        if (ctx->pc != 0x1C1CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA800_0x1ca800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1CF4u; }
        if (ctx->pc != 0x1C1CF4u) { return; }
    }
    ctx->pc = 0x1C1CF4u;
label_1c1cf4:
    // 0x1c1cf4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c1cf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1cf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1cf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1cfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1cfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c1d00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c1d00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1d04: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c1d04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c1d08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c1d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1D0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D0Cu;
            // 0x1c1d10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1D14u;
    // 0x1c1d14: 0x0  nop
    ctx->pc = 0x1c1d14u;
    // NOP
    ctx->pc = 0x1c1d18u;
}
