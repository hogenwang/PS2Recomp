#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00194C00
// Address: 0x194c00 - 0x194cf0
void sub_00194C00_0x194c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194C00_0x194c00");
#endif

    switch (ctx->pc) {
        case 0x194c7cu: goto label_194c7c;
        case 0x194ca4u: goto label_194ca4;
        case 0x194cc8u: goto label_194cc8;
        default: break;
    }

    ctx->pc = 0x194c00u;

    // 0x194c00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x194c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x194c04: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x194c04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x194c08: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x194c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x194c0c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x194c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x194c10: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x194c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x194c14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x194c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x194c18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x194c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x194c1c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x194c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x194c20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x194c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x194c24: 0x33840  sll         $a3, $v1, 1
    ctx->pc = 0x194c24u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x194c28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x194c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x194c2c: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x194c2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x194c30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x194c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x194c34: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x194c34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x194c38: 0x8c46d148  lw          $a2, -0x2EB8($v0)
    ctx->pc = 0x194c38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955336)));
    // 0x194c3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x194c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x194c40: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x194c40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x194c44: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x194c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x194c48: 0xc79021  addu        $s2, $a2, $a3
    ctx->pc = 0x194c48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x194c4c: 0x8c43d0c8  lw          $v1, -0x2F38($v0)
    ctx->pc = 0x194c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955208)));
    // 0x194c50: 0x92500004  lbu         $s0, 0x4($s2)
    ctx->pc = 0x194c50u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x194c54: 0x92460006  lbu         $a2, 0x6($s2)
    ctx->pc = 0x194c54u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x194c58: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x194c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x194c5c: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x194c5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x194c60: 0x24425bc0  addiu       $v0, $v0, 0x5BC0
    ctx->pc = 0x194c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23488));
    // 0x194c64: 0x92330004  lbu         $s3, 0x4($s1)
    ctx->pc = 0x194c64u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x194c68: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x194c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x194c6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x194c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194c70: 0x90540000  lbu         $s4, 0x0($v0)
    ctx->pc = 0x194c70u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194c74: 0xc06533c  jal         func_194CF0
    ctx->pc = 0x194C74u;
    SET_GPR_U32(ctx, 31, 0x194C7Cu);
    ctx->pc = 0x194C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194C74u;
            // 0x194c78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194CF0u;
    if (runtime->hasFunction(0x194CF0u)) {
        auto targetFn = runtime->lookupFunction(0x194CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194C7Cu; }
        if (ctx->pc != 0x194C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00194CF0_0x194cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194C7Cu; }
        if (ctx->pc != 0x194C7Cu) { return; }
    }
    ctx->pc = 0x194C7Cu;
label_194c7c:
    // 0x194c7c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x194c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x194c80: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x194c80u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x194c84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x194c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x194c88: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194C88u;
    {
        const bool branch_taken_0x194c88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x194c88) {
            ctx->pc = 0x194C8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x194C88u;
            // 0x194c8c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x194C98u;
            goto label_194c98;
        }
    }
    ctx->pc = 0x194C90u;
    // 0x194c90: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x194C90u;
    {
        const bool branch_taken_0x194c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194C90u;
            // 0x194c94: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194c90) {
            ctx->pc = 0x194CD0u;
            goto label_194cd0;
        }
    }
    ctx->pc = 0x194C98u;
label_194c98:
    // 0x194c98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x194c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194c9c: 0xc065384  jal         func_194E10
    ctx->pc = 0x194C9Cu;
    SET_GPR_U32(ctx, 31, 0x194CA4u);
    ctx->pc = 0x194CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194C9Cu;
            // 0x194ca0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194E10u;
    if (runtime->hasFunction(0x194E10u)) {
        auto targetFn = runtime->lookupFunction(0x194E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194CA4u; }
        if (ctx->pc != 0x194CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00194E10_0x194e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194CA4u; }
        if (ctx->pc != 0x194CA4u) { return; }
    }
    ctx->pc = 0x194CA4u;
label_194ca4:
    // 0x194ca4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x194ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x194ca8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x194ca8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x194cac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x194cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x194cb0: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194CB0u;
    {
        const bool branch_taken_0x194cb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x194cb0) {
            ctx->pc = 0x194CB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x194CB0u;
            // 0x194cb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x194CC0u;
            goto label_194cc0;
        }
    }
    ctx->pc = 0x194CB8u;
    // 0x194cb8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x194CB8u;
    {
        const bool branch_taken_0x194cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194cb8) {
            ctx->pc = 0x194CCCu;
            goto label_194ccc;
        }
    }
    ctx->pc = 0x194CC0u;
label_194cc0:
    // 0x194cc0: 0xc065904  jal         func_196410
    ctx->pc = 0x194CC0u;
    SET_GPR_U32(ctx, 31, 0x194CC8u);
    ctx->pc = 0x194CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194CC0u;
            // 0x194cc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196410u;
    if (runtime->hasFunction(0x196410u)) {
        auto targetFn = runtime->lookupFunction(0x196410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194CC8u; }
        if (ctx->pc != 0x194CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196410_0x196410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194CC8u; }
        if (ctx->pc != 0x194CC8u) { return; }
    }
    ctx->pc = 0x194CC8u;
label_194cc8:
    // 0x194cc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x194cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_194ccc:
    // 0x194ccc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x194cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_194cd0:
    // 0x194cd0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x194cd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x194cd4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x194cd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194cd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x194cd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194cdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x194cdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194ce0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194ce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x194CE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194CE4u;
            // 0x194ce8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194CECu;
    // 0x194cec: 0x0  nop
    ctx->pc = 0x194cecu;
    // NOP
    ctx->pc = 0x194cf0u;
}
