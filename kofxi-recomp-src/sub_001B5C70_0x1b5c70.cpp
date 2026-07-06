#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B5C70
// Address: 0x1b5c70 - 0x1b5d20
void sub_001B5C70_0x1b5c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5C70_0x1b5c70");
#endif

    switch (ctx->pc) {
        case 0x1b5c90u: goto label_1b5c90;
        case 0x1b5ca0u: goto label_1b5ca0;
        case 0x1b5ca8u: goto label_1b5ca8;
        case 0x1b5cb0u: goto label_1b5cb0;
        case 0x1b5cc4u: goto label_1b5cc4;
        case 0x1b5d10u: goto label_1b5d10;
        default: break;
    }

    ctx->pc = 0x1b5c70u;

    // 0x1b5c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b5c74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b5c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b5c78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b5c78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5c7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b5c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b5c80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b5c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b5c84: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1b5c84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b5c88: 0xc06af38  jal         func_1ABCE0
    ctx->pc = 0x1B5C88u;
    SET_GPR_U32(ctx, 31, 0x1B5C90u);
    ctx->pc = 0x1B5C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5C88u;
            // 0x1b5c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABCE0u;
    if (runtime->hasFunction(0x1ABCE0u)) {
        auto targetFn = runtime->lookupFunction(0x1ABCE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5C90u; }
        if (ctx->pc != 0x1B5C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABCE0_0x1abce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5C90u; }
        if (ctx->pc != 0x1B5C90u) { return; }
    }
    ctx->pc = 0x1B5C90u;
label_1b5c90:
    // 0x1b5c90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5C90u;
    {
        const bool branch_taken_0x1b5c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5c90) {
            ctx->pc = 0x1B5CA0u;
            goto label_1b5ca0;
        }
    }
    ctx->pc = 0x1B5C98u;
    // 0x1b5c98: 0xc06d59a  jal         func_1B5668
    ctx->pc = 0x1B5C98u;
    SET_GPR_U32(ctx, 31, 0x1B5CA0u);
    ctx->pc = 0x1B5C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5C98u;
            // 0x1b5c9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5668u;
    if (runtime->hasFunction(0x1B5668u)) {
        auto targetFn = runtime->lookupFunction(0x1B5668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5CA0u; }
        if (ctx->pc != 0x1B5CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5668_0x1b5668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5CA0u; }
        if (ctx->pc != 0x1B5CA0u) { return; }
    }
    ctx->pc = 0x1B5CA0u;
label_1b5ca0:
    // 0x1b5ca0: 0xc06b0f4  jal         func_1AC3D0
    ctx->pc = 0x1B5CA0u;
    SET_GPR_U32(ctx, 31, 0x1B5CA8u);
    ctx->pc = 0x1B5CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5CA0u;
            // 0x1b5ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AC3D0u;
    if (runtime->hasFunction(0x1AC3D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AC3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5CA8u; }
        if (ctx->pc != 0x1B5CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AC3D0_0x1ac3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5CA8u; }
        if (ctx->pc != 0x1B5CA8u) { return; }
    }
    ctx->pc = 0x1B5CA8u;
label_1b5ca8:
    // 0x1b5ca8: 0xc06af38  jal         func_1ABCE0
    ctx->pc = 0x1B5CA8u;
    SET_GPR_U32(ctx, 31, 0x1B5CB0u);
    ctx->pc = 0x1B5CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5CA8u;
            // 0x1b5cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABCE0u;
    if (runtime->hasFunction(0x1ABCE0u)) {
        auto targetFn = runtime->lookupFunction(0x1ABCE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5CB0u; }
        if (ctx->pc != 0x1B5CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABCE0_0x1abce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5CB0u; }
        if (ctx->pc != 0x1B5CB0u) { return; }
    }
    ctx->pc = 0x1B5CB0u;
label_1b5cb0:
    // 0x1b5cb0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b5cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b5cb4: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5CB4u;
    {
        const bool branch_taken_0x1b5cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b5cb4) {
            ctx->pc = 0x1B5CB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5CB4u;
            // 0x1b5cb8: 0x86040098  lh          $a0, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5CC8u;
            goto label_1b5cc8;
        }
    }
    ctx->pc = 0x1B5CBCu;
    // 0x1b5cbc: 0xc06d67e  jal         func_1B59F8
    ctx->pc = 0x1B5CBCu;
    SET_GPR_U32(ctx, 31, 0x1B5CC4u);
    ctx->pc = 0x1B5CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5CBCu;
            // 0x1b5cc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B59F8u;
    if (runtime->hasFunction(0x1B59F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B59F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5CC4u; }
        if (ctx->pc != 0x1B5CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B59F8_0x1b59f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5CC4u; }
        if (ctx->pc != 0x1B5CC4u) { return; }
    }
    ctx->pc = 0x1B5CC4u;
label_1b5cc4:
    // 0x1b5cc4: 0x86040098  lh          $a0, 0x98($s0)
    ctx->pc = 0x1b5cc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
label_1b5cc8:
    // 0x1b5cc8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1b5cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b5ccc: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B5CCCu;
    {
        const bool branch_taken_0x1b5ccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B5CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5CCCu;
            // 0x1b5cd0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ccc) {
            ctx->pc = 0x1B5CF4u;
            goto label_1b5cf4;
        }
    }
    ctx->pc = 0x1B5CD4u;
    // 0x1b5cd4: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5CD4u;
    {
        const bool branch_taken_0x1b5cd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B5CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5CD4u;
            // 0x1b5cd8: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5cd4) {
            ctx->pc = 0x1B5CF4u;
            goto label_1b5cf4;
        }
    }
    ctx->pc = 0x1B5CDCu;
    // 0x1b5cdc: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5CDCu;
    {
        const bool branch_taken_0x1b5cdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B5CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5CDCu;
            // 0x1b5ce0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5cdc) {
            ctx->pc = 0x1B5CF4u;
            goto label_1b5cf4;
        }
    }
    ctx->pc = 0x1B5CE4u;
    // 0x1b5ce4: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5CE4u;
    {
        const bool branch_taken_0x1b5ce4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B5CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5CE4u;
            // 0x1b5ce8: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ce4) {
            ctx->pc = 0x1B5CF4u;
            goto label_1b5cf4;
        }
    }
    ctx->pc = 0x1B5CECu;
    // 0x1b5cec: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5CECu;
    {
        const bool branch_taken_0x1b5cec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B5CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5CECu;
            // 0x1b5cf0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5cec) {
            ctx->pc = 0x1B5D10u;
            goto label_1b5d10;
        }
    }
    ctx->pc = 0x1B5CF4u;
label_1b5cf4:
    // 0x1b5cf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5cf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5cf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5cfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5cfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5d00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5d04: 0x806d6f8  j           func_1B5BE0
    ctx->pc = 0x1B5D04u;
    ctx->pc = 0x1B5D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5D04u;
            // 0x1b5d08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5BE0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B5BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B5D0Cu;
    // 0x1b5d0c: 0x0  nop
    ctx->pc = 0x1b5d0cu;
    // NOP
label_1b5d10:
    // 0x1b5d10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5d10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5d14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5d18: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5D18u;
            // 0x1b5d1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5D20u;
    ctx->pc = 0x1b5d20u;
}
