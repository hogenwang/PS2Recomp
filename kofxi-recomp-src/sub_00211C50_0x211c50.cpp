#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00211C50
// Address: 0x211c50 - 0x211db8
void sub_00211C50_0x211c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211C50_0x211c50");
#endif

    switch (ctx->pc) {
        case 0x211c6cu: goto label_211c6c;
        case 0x211c7cu: goto label_211c7c;
        case 0x211ca0u: goto label_211ca0;
        case 0x211ce4u: goto label_211ce4;
        case 0x211cf8u: goto label_211cf8;
        case 0x211d08u: goto label_211d08;
        case 0x211d30u: goto label_211d30;
        case 0x211d74u: goto label_211d74;
        case 0x211d88u: goto label_211d88;
        case 0x211d90u: goto label_211d90;
        default: break;
    }

    ctx->pc = 0x211c50u;

label_211c50:
    // 0x211c50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x211c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x211c54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x211c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x211c58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x211c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x211c5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x211c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211c60: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x211c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x211c64: 0xc043e52  jal         func_10F948
    ctx->pc = 0x211C64u;
    SET_GPR_U32(ctx, 31, 0x211C6Cu);
    ctx->pc = 0x211C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211C64u;
            // 0x211c68: 0x248402b0  addiu       $a0, $a0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211C6Cu; }
        if (ctx->pc != 0x211C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211C6Cu; }
        if (ctx->pc != 0x211C6Cu) { return; }
    }
    ctx->pc = 0x211C6Cu;
label_211c6c:
    // 0x211c6c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x211c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x211c70: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x211c70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x211c74: 0xc043e52  jal         func_10F948
    ctx->pc = 0x211C74u;
    SET_GPR_U32(ctx, 31, 0x211C7Cu);
    ctx->pc = 0x211C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211C74u;
            // 0x211c78: 0x248402d0  addiu       $a0, $a0, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211C7Cu; }
        if (ctx->pc != 0x211C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211C7Cu; }
        if (ctx->pc != 0x211C7Cu) { return; }
    }
    ctx->pc = 0x211C7Cu;
label_211c7c:
    // 0x211c7c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x211c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x211c80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x211c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211c84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x211c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x211c88: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x211c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x211c8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x211c8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211c90: 0x248402e0  addiu       $a0, $a0, 0x2E0
    ctx->pc = 0x211c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
    // 0x211c94: 0x8043e52  j           func_10F948
    ctx->pc = 0x211C94u;
    ctx->pc = 0x211C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211C94u;
            // 0x211c98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x211C9Cu;
    // 0x211c9c: 0x0  nop
    ctx->pc = 0x211c9cu;
    // NOP
label_211ca0:
    // 0x211ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x211ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x211ca4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x211ca4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x211ca8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x211ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x211cac: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x211cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x211cb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x211cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x211cb4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x211cb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211cb8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x211cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x211cbc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x211cbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211cc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x211cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x211cc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x211cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211cc8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x211cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x211ccc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x211cccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211cd0: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x211cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x211cd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x211cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x211cd8: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x211cd8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x211cdc: 0xc0844dc  jal         func_211370
    ctx->pc = 0x211CDCu;
    SET_GPR_U32(ctx, 31, 0x211CE4u);
    ctx->pc = 0x211CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211CDCu;
            // 0x211ce0: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211CE4u; }
        if (ctx->pc != 0x211CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211CE4u; }
        if (ctx->pc != 0x211CE4u) { return; }
    }
    ctx->pc = 0x211CE4u;
label_211ce4:
    // 0x211ce4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x211ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211ce8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x211ce8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211cec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x211cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211cf0: 0xc08449a  jal         func_211268
    ctx->pc = 0x211CF0u;
    SET_GPR_U32(ctx, 31, 0x211CF8u);
    ctx->pc = 0x211CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211CF0u;
            // 0x211cf4: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211CF8u; }
        if (ctx->pc != 0x211CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211CF8u; }
        if (ctx->pc != 0x211CF8u) { return; }
    }
    ctx->pc = 0x211CF8u;
label_211cf8:
    // 0x211cf8: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x211cf8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x211cfc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x211cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211d00: 0xc084714  jal         func_211C50
    ctx->pc = 0x211D00u;
    SET_GPR_U32(ctx, 31, 0x211D08u);
    ctx->pc = 0x211D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211D00u;
            // 0x211d04: 0x24f9023  subu        $s2, $s2, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211C50u;
    goto label_211c50;
    ctx->pc = 0x211D08u;
label_211d08:
    // 0x211d08: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x211d08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211d0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x211d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211d10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x211d10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x211d14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x211d14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211d18: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x211d18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x211d1c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x211d1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211d20: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x211d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x211d24: 0x3e00008  jr          $ra
    ctx->pc = 0x211D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211D24u;
            // 0x211d28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x211D2Cu;
    // 0x211d2c: 0x0  nop
    ctx->pc = 0x211d2cu;
    // NOP
label_211d30:
    // 0x211d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x211d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x211d34: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x211d34u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x211d38: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x211d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x211d3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x211d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x211d40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x211d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x211d44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x211d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x211d48: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x211d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211d4c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x211d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x211d50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x211d50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211d54: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x211d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x211d58: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x211d58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211d5c: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x211d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x211d60: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x211d60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211d64: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x211d64u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x211d68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x211d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x211d6c: 0xc084612  jal         func_211848
    ctx->pc = 0x211D6Cu;
    SET_GPR_U32(ctx, 31, 0x211D74u);
    ctx->pc = 0x211D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211D6Cu;
            // 0x211d70: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211D74u; }
        if (ctx->pc != 0x211D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211D74u; }
        if (ctx->pc != 0x211D74u) { return; }
    }
    ctx->pc = 0x211D74u;
label_211d74:
    // 0x211d74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x211d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211d78: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x211d78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211d7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211d80: 0xc0845c2  jal         func_211708
    ctx->pc = 0x211D80u;
    SET_GPR_U32(ctx, 31, 0x211D88u);
    ctx->pc = 0x211D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211D80u;
            // 0x211d84: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211D88u; }
        if (ctx->pc != 0x211D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211D88u; }
        if (ctx->pc != 0x211D88u) { return; }
    }
    ctx->pc = 0x211D88u;
label_211d88:
    // 0x211d88: 0xc084714  jal         func_211C50
    ctx->pc = 0x211D88u;
    SET_GPR_U32(ctx, 31, 0x211D90u);
    ctx->pc = 0x211D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211D88u;
            // 0x211d8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211C50u;
    goto label_211c50;
    ctx->pc = 0x211D90u;
label_211d90:
    // 0x211d90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x211d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x211d94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x211d94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x211d98: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x211d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x211d9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x211d9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211da0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x211da0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211da4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x211da4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x211da8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x211da8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211dac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x211dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x211db0: 0x3e00008  jr          $ra
    ctx->pc = 0x211DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211DB0u;
            // 0x211db4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x211DB8u;
    ctx->pc = 0x211db8u;
}
